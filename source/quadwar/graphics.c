#include "graphics.h"

#include "gl/gl.h"
#include <stdio.h>

#define CODE_(...) #__VA_ARGS__

#define OFFSET(a, b) (void *) offsetof(a, b)

static char const *const source_solid_vertex = //
    "#version 300 es\n"                        //
    CODE_(uniform mat4 u_view;                 //
          uniform mat4 u_object;               //

          in vec3 in_position; //
          in vec3 in_normal;   //

          out vec3 f_position; //
          out vec3 f_normal;   //

          void main(void) {           //
            f_position = in_position; //
            f_normal   = in_normal;   //

            gl_Position = (u_view * u_object) * vec4(in_position,
                                                     1.0); //
          }                                                //
    );

static char const *const source_solid_fragment = //
    "#version 300 es\n"                          //
    CODE_(                                       //
        precision highp float;                   //

        uniform vec3 u_eye;   //
        uniform vec3 u_light; //
        uniform vec4 u_color; //

        in vec3 f_position; //
        in vec3 f_normal;   //

        out vec4 out_color; //

        void main(void) {                          //
          vec3  d = u_light - f_position;          //
          vec3  r = normalize(d);                  //
          vec3  s = normalize(u_eye - f_position); //
          float k = dot(r, f_normal);              //
          float l = dot(s, f_normal);              //

          float ambient   = 0.1;                            //
          float diffusion = 2500.0 * k / dot(d, d);         //
          float specular  = dot(r, f_normal * l * 2.0 - s); //

          if (k <= 0.0)       //
            diffusion = 0.0;  //
          if (specular < 0.0) //
            specular = 0.0;   //

          if (specular > 0.0)               //
            specular = pow(specular, 15.0); //

          vec4 black = vec4(0.0, 0.0, 0.0, 0.0);
          vec4 white = vec4(1.0, 1.0, 1.0, 1.0);

          vec4 c = u_color * (ambient + diffusion) + white * specular;

          out_color = clamp(c, black,
                            white); //
        }                           //
    );

static char const *const source_flat_vertex = //
    "#version 300 es\n"                       //
    CODE_(
        uniform vec3 u_screen, //

        in vec2 in_position; //
        in vec2 in_texcoord; //
        in vec4 in_color;    //

        out vec2 f_texcoord; //
        out vec4 f_color;    //

        void main(void) {           //
          f_texcoord = in_texcoord; //
          f_color    = in_color;    //

          gl_Position = vec4(
              -1.0 + 2.0 * in_position.x / u_screen.x, //
              1.0 - 2.0 * in_position.y / u_screen.y,  //
              u_screen.z,                              //
              1.0);                                    //
        }                                              //
    );

static char const *const source_flat_fragment = //
    "#version 300 es\n"                         //
    CODE_(                                      //
        precision highp float;                  //

        uniform sampler2D u_texture; //

        in vec2 f_texcoord; //
        in vec4 f_color;    //

        out vec4 out_color; //

        void main(void) {                                       //
          out_color = f_color * texture(u_texture, f_texcoord); //
        }                                                       //
    );

typedef struct {
  GLuint  vertex_array;
  GLuint  vertex_buffer;
  GLsizei size;
} mesh_internal_t;

static int is_ready = 0;

static GLuint solid_vertex;
static GLuint solid_fragment;
static GLuint solid_program;

static GLint u_view;
static GLint u_object;
static GLint u_eye;
static GLint u_light;
static GLint u_color;

static DA(mesh_internal_t) mesh_array;

static vec_t  aspect_ratio = 1.f;
static mat4_t projection_matrix;

static void graphics_shaders_cleanup(void) {
  qw_glDeleteProgram(solid_program);
  qw_glDeleteShader(solid_vertex);
  qw_glDeleteShader(solid_fragment);
}

static kit_status_t graphics_shaders_load(int rebuild) {
  kit_status_t result = KIT_OK;

  /*  FIXME
   *  Load flat shaders.
   */
  (void) source_flat_vertex;
  (void) source_flat_fragment;

  static char const cache_file[] = ".cache_shader.bin";

  kit_allocator_t alloc = kit_alloc_default();

  FILE *in = NULL;

  if (!rebuild)
    in = fopen(cache_file, "rb");

  int32_t  binary_size;
  int32_t  binary_format;
  uint8_t *binary_data;

  if (in != NULL) {
    fread(&binary_size, 4, 1, in);
    fread(&binary_format, 4, 1, in);

    binary_data = (uint8_t *) kit_alloc_dispatch(
        alloc, KIT_ALLOCATE, binary_size, 0, NULL);

    if (binary_data != NULL) {
      fread(binary_data, 1, binary_size, in);

      printf("Load cached shader program binary\n");

      solid_program = qw_glCreateProgram();

      qw_glProgramBinary(solid_program, (GLenum) binary_format,
                         binary_data, binary_size);

      kit_alloc_dispatch(alloc, KIT_DEALLOCATE, 0, 0, binary_data);
    }

    fclose(in);
  } else {
    printf("Compile shader program\n");

    solid_vertex = qw_glCreateShader(GL_VERTEX_SHADER);

    qw_glShaderSource(solid_vertex, 1, &source_solid_vertex, NULL);
    qw_glCompileShader(solid_vertex);

    GLint status;
    qw_glGetShaderiv(solid_vertex, GL_COMPILE_STATUS, &status);

    if (status == GL_FALSE) {
      char  shader_log[1024];
      GLint shader_log_size = sizeof shader_log - 1;
      qw_glGetShaderInfoLog(solid_vertex, sizeof shader_log,
                            &shader_log_size, shader_log);
      printf("Vertex shader compilation failed.\n%*s\n",
             shader_log_size, shader_log);
      result = QW_ERROR;
    }

    solid_fragment = qw_glCreateShader(GL_FRAGMENT_SHADER);

    qw_glShaderSource(solid_fragment, 1, &source_solid_fragment,
                      NULL);
    qw_glCompileShader(solid_fragment);

    qw_glGetShaderiv(solid_fragment, GL_COMPILE_STATUS, &status);

    if (status == GL_FALSE) {
      char  shader_log[1024];
      GLint shader_log_size = sizeof shader_log - 1;
      qw_glGetShaderInfoLog(solid_fragment, sizeof shader_log,
                            &shader_log_size, shader_log);
      printf("Fragment shader compilation failed.\n%*s\n",
             shader_log_size, shader_log);
      result = QW_ERROR;
    }

    solid_program = qw_glCreateProgram();

    qw_glAttachShader(solid_program, solid_vertex);
    qw_glAttachShader(solid_program, solid_fragment);

    qw_glLinkProgram(solid_program);

    qw_glGetProgramiv(solid_program, GL_LINK_STATUS, &status);

    if (status == GL_FALSE) {
      char  program_log[1024];
      GLint program_log_size = sizeof program_log - 1;
      qw_glGetProgramInfoLog(solid_program, sizeof program_log,
                             &program_log_size, program_log);
      printf("Shader program link failed.\n%*s\n", program_log_size,
             program_log);
      result = QW_ERROR;
    } else {
#ifndef __EMSCRIPTEN__
      FILE *out = fopen(cache_file, "wb");

      if (out != NULL) {
        qw_glGetProgramiv(solid_program, GL_PROGRAM_BINARY_LENGTH,
                          &binary_size);

        binary_data = (uint8_t *) kit_alloc_dispatch(
            alloc, KIT_ALLOCATE, binary_size, 0, NULL);

        if (binary_data != NULL) {
          int written;

          qw_glGetProgramBinary(solid_program, binary_size, &written,
                                (GLenum *) &binary_format,
                                binary_data);

          printf("Cache shader program binary\n");

          fwrite(&written, 4, 1, out);
          fwrite(&binary_format, 4, 1, out);
          fwrite(binary_data, 1, written, out);

          kit_alloc_dispatch(alloc, KIT_DEALLOCATE, 0, 0,
                             binary_data);
        }

        fclose(out);
      }
#endif
    }
  }

  qw_glBindAttribLocation(solid_program, 0, "in_position");
  qw_glBindAttribLocation(solid_program, 1, "in_normal");

  u_view   = qw_glGetUniformLocation(solid_program, "u_view");
  u_object = qw_glGetUniformLocation(solid_program, "u_object");
  u_eye    = qw_glGetUniformLocation(solid_program, "u_eye");
  u_light  = qw_glGetUniformLocation(solid_program, "u_light");
  u_color  = qw_glGetUniformLocation(solid_program, "u_color");

  return result;
}
static kit_status_t graphics_init(void) {
  if (is_ready)
    return KIT_OK;

  is_ready = 1;

  return graphics_shaders_load(0);
}

static kit_status_t mesh_init_internal(mesh_t *mesh) {
  assert(mesh != NULL);

  if (mesh == NULL)
    return QW_ERROR;
  if (mesh->id >= 0 && mesh->id < mesh_array.size)
    return KIT_OK;

  if (mesh_array.values == NULL)
    DA_INIT(mesh_array, 0, mesh->data.vertices.alloc);

  ptrdiff_t const n = mesh_array.size;

  DA_RESIZE(mesh_array, n + 1);
  if (mesh_array.size != n + 1)
    return KIT_ERROR_BAD_ALLOC;

  mesh_internal_t *const internal = mesh_array.values + n;

  /*  Initialize mesh data.
   */

  qw_glGenVertexArrays(1, &internal->vertex_array);
  qw_glBindVertexArray(internal->vertex_array);

  qw_glGenBuffers(1, &internal->vertex_buffer);
  qw_glBindBuffer(GL_ARRAY_BUFFER, internal->vertex_buffer);

  qw_glBufferData(GL_ARRAY_BUFFER,
                  mesh->data.vertices.size *
                      sizeof *mesh->data.vertices.values,
                  mesh->data.vertices.values, GL_STATIC_DRAW);

  internal->size = (GLsizei) mesh->data.vertices.size;

  /*  We don't need this data anymore.
   */
  DA_DESTROY(mesh->data.vertices);
  memset(&mesh->data, 0, sizeof mesh->data);

  /*  Initialize vertex attributes.
   */

  qw_glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(vertex_t),
                           OFFSET(vertex_t, position));

  qw_glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, sizeof(vertex_t),
                           OFFSET(vertex_t, normal));

  qw_glEnableVertexAttribArray(0);
  qw_glEnableVertexAttribArray(1);

  qw_glBindVertexArray(0);

  mesh->id = n;

  return KIT_OK;
}

kit_status_t graphics_rebuild_shaders(void) {
  return graphics_shaders_load(1);
}

void graphics_reset_mesh_data(void) {
  for (ptrdiff_t i = 0; i < mesh_array.size; i++) {
    qw_glDeleteBuffers(1, &mesh_array.values[i].vertex_buffer);
    qw_glDeleteVertexArrays(1, &mesh_array.values[i].vertex_array);
  }

  DA_DESTROY(mesh_array);
  memset(&mesh_array, 0, sizeof mesh_array);
}

void graphics_viewport(int width, int height) {
  qw_glViewport(0, 0, width, height);
  aspect_ratio      = ((vec_t) width) / (vec_t) height;
  projection_matrix = mat4_perspective(M_PI * .1f, aspect_ratio, .1f,
                                       400.f);
}

void graphics_clear(vec3_t color) {
  qw_glClearColor(color.v[0], color.v[1], color.v[2], 1.f);
  qw_glClearDepthf(1.f);
  qw_glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

void graphics_cleanup(void) {
  if (!is_ready)
    return;

  graphics_shaders_cleanup();
  graphics_reset_mesh_data();

  is_ready = 0;
}

void mesh_init(mesh_t *mesh, kit_allocator_t alloc) {
  memset(mesh, 0, sizeof *mesh);
  DA_INIT(mesh->data.vertices, 0, alloc);
  mesh->id = -1;
}

void mesh_destroy(mesh_t *mesh) {
  DA_DESTROY(mesh->data.vertices);
}

kit_status_t mesh_render(mesh_t *mesh, scene_t *scene) {
  kit_status_t status = KIT_OK;

  status |= graphics_init();
  status |= mesh_init_internal(mesh);

  if (status == KIT_OK) {
    /*  FIXME
     *  Compute the camera matrix beforehand.
     */
    mat4_t const object = camera_to_mat4(scene->camera);

    qw_glEnable(GL_DEPTH_TEST);

    qw_glUseProgram(solid_program);
    qw_glUniformMatrix4fv(u_view, 1, GL_FALSE, projection_matrix.v);
    qw_glUniformMatrix4fv(u_object, 1, GL_FALSE, object.v);
    qw_glUniform3fv(u_eye, 1, scene->camera.position.v);
    qw_glUniform3fv(u_light, 1, scene->light_position.v);
    qw_glUniform4f(u_color, mesh->color.v[0], mesh->color.v[1],
                   mesh->color.v[2], 1.f);

    qw_glBindVertexArray(mesh_array.values[mesh->id].vertex_array);
    qw_glDrawArrays(GL_TRIANGLES, 0,
                    mesh_array.values[mesh->id].size);

    qw_glBindVertexArray(0);
    qw_glUseProgram(0);
  }

  return status;
}

