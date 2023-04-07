#include "graphics.h"

#include "gl/gl.h"
#include <kit/file.h>
#include <stdio.h>

#define CODE_(...) #__VA_ARGS__

#define OFFSET(a, b) (void *) offsetof(a, b)

static char const *const src_3d_solid_vert = //
    "#version 300 es\n"                      //
    CODE_(uniform mat4 u_mvp_matrix;         //

          in vec3 in_position; //
          in vec3 in_normal;   //

          out vec3 f_position; //
          out vec3 f_normal;   //

          void main(void) {           //
            f_position = in_position; //
            f_normal   = in_normal;   //

            gl_Position = u_mvp_matrix * vec4(in_position,
                                              1.0); //
          }                                         //
    );

static char const *const src_3d_solid_frag = //
    "#version 300 es\n"                      //
    CODE_(                                   //
        precision highp float;               //

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

static char const *const src_2d_solid_vert = //
    "#version 300 es\n"                      //
    CODE_(uniform vec2 u_screen;             //

          in vec2 in_position; //

          void main(void) { //
            gl_Position = vec4(
                -1.0 + 2.0 * in_position.x / u_screen.x, //
                1.0 - 2.0 * in_position.y / u_screen.y,  //
                0.0,                                     //
                1.0);                                    //
          }                                              //
    );

static char const *const src_2d_solid_frag = //
    "#version 300 es\n"                      //
    CODE_(                                   //
        precision highp float;               //

        uniform vec4 u_color; //

        out vec4 out_color; //

        void main(void) {      //
          out_color = u_color; //
        }                      //
    );

static char const *const src_2d_texture_vert = //
    "#version 300 es\n"                        //
    CODE_(uniform vec2 u_screen;               //

          in vec2 in_position; //
          in vec2 in_texcoord; //

          out vec2 f_texcoord; //

          void main(void) {           //
            f_texcoord = in_texcoord; //

            gl_Position = vec4(
                -1.0 + 2.0 * in_position.x / u_screen.x, //
                1.0 - 2.0 * in_position.y / u_screen.y,  //
                0.0,                                     //
                1.0);                                    //
          }                                              //
    );

static char const *const src_2d_texture_frag = //
    "#version 300 es\n"                        //
    CODE_(                                     //
        precision highp float;                 //

        uniform vec4      u_color;   //
        uniform sampler2D u_texture; //

        in vec2 f_texcoord; //

        out vec4 out_color; //

        void main(void) { //
          out_color = u_color * texture(u_texture,
                                        f_texcoord); //
        }                                            //
    );

typedef struct {
  GLuint  vertex_array;
  GLuint  vertex_buffer;
  GLsizei size;
} mesh_internal_t;

static kit_allocator_t ALLOC;
static int             is_ready = 0;

static GLuint shader_3d_solid_vert;
static GLuint shader_3d_solid_frag;
static GLuint shader_3d_solid_prog;

static GLint u_3d_solid_mvp_matrix;
static GLint u_3d_solid_eye;
static GLint u_3d_solid_light;
static GLint u_3d_solid_color;

static GLuint shader_2d_solid_vert;
static GLuint shader_2d_solid_frag;
static GLuint shader_2d_solid_prog;

static GLint u_2d_solid_screen;
static GLint u_2d_solid_color;

static GLuint shader_2d_texture_vert;
static GLuint shader_2d_texture_frag;
static GLuint shader_2d_texture_prog;

static GLint u_2d_texture_screen;
static GLint u_2d_texture_color;
static GLint u_2d_texture_texture;

static GLuint temp_texture;

static DA(mesh_internal_t) mesh_array;

static int    screen_width  = 1;
static int    screen_height = 1;
static vec_t  aspect_ratio  = 1.f;
static mat4_t projection_matrix;

static void graphics_shaders_cleanup(void) {
  qwlog_glDeleteProgram(shader_3d_solid_prog);
  qwlog_glDeleteShader(shader_3d_solid_vert);
  qwlog_glDeleteShader(shader_3d_solid_frag);

  qwlog_glDeleteProgram(shader_2d_solid_prog);
  qwlog_glDeleteShader(shader_2d_solid_vert);
  qwlog_glDeleteShader(shader_2d_solid_frag);

  qwlog_glDeleteProgram(shader_2d_texture_prog);
  qwlog_glDeleteShader(shader_2d_texture_vert);
  qwlog_glDeleteShader(shader_2d_texture_frag);
}

static string_t get_cache_folder(void) {
  string_t s      = path_cache(ALLOC);
  string_t result = path_join(WRAP_STR(s), SZ("quadwar"), ALLOC);
  DA_DESTROY(s);
  return result;
}

static kit_status_t graphics_load_shader(int   rebuild,
                                         str_t cache_folder,
                                         str_t name, GLuint *vert,
                                         GLuint *frag, GLuint *prog,
                                         char const *src_vert,
                                         char const *src_frag) {
  kit_status_t result = KIT_OK;

  string_t cache_file = path_join(cache_folder, name, ALLOC);
  FILE    *in         = NULL;

  if (!rebuild)
    in = fopen(BS(cache_file), "rb");

  int32_t  binary_size;
  int32_t  binary_format;
  uint8_t *binary_data;

  if (in != NULL) {
    fread(&binary_size, 4, 1, in);
    fread(&binary_format, 4, 1, in);

    binary_data = (uint8_t *) kit_alloc_dispatch(
        ALLOC, KIT_ALLOCATE, binary_size, 0, NULL);

    if (binary_data != NULL) {
      fread(binary_data, 1, binary_size, in);

      printf("%s: Load cached shader program binary.\n", BS(name));

      *prog = qwlog_glCreateProgram();

      qwlog_glProgramBinary(*prog, (GLenum) binary_format,
                            binary_data, binary_size);

      kit_alloc_dispatch(ALLOC, KIT_DEALLOCATE, 0, 0, binary_data);
    }

    fclose(in);
  } else {
    printf("%s: Compile shader program.\n", BS(name));

    *vert = qwlog_glCreateShader(GL_VERTEX_SHADER);

    qwlog_glShaderSource(*vert, 1, &src_vert, NULL);
    qwlog_glCompileShader(*vert);

    GLint status;
    qwlog_glGetShaderiv(*vert, GL_COMPILE_STATUS, &status);

    if (status == GL_FALSE) {
      char  shader_log[1024];
      GLint shader_log_size = sizeof shader_log - 1;
      qwlog_glGetShaderInfoLog(*vert, sizeof shader_log,
                               &shader_log_size, shader_log);
      printf("%s: Vertex shader compilation failed.\n%*s\n", BS(name),
             shader_log_size, shader_log);
      result = QW_ERROR;
    }

    *frag = qwlog_glCreateShader(GL_FRAGMENT_SHADER);

    qwlog_glShaderSource(*frag, 1, &src_frag, NULL);
    qwlog_glCompileShader(*frag);

    qwlog_glGetShaderiv(*frag, GL_COMPILE_STATUS, &status);

    if (status == GL_FALSE) {
      char  shader_log[1024];
      GLint shader_log_size = sizeof shader_log - 1;
      qwlog_glGetShaderInfoLog(*frag, sizeof shader_log,
                               &shader_log_size, shader_log);
      printf("%s: Fragment shader compilation failed.\n%*s\n",
             BS(name), shader_log_size, shader_log);
      result = QW_ERROR;
    }

    *prog = qwlog_glCreateProgram();

    qwlog_glAttachShader(*prog, *vert);
    qwlog_glAttachShader(*prog, *frag);

    qwlog_glLinkProgram(*prog);

    qwlog_glGetProgramiv(*prog, GL_LINK_STATUS, &status);

    if (status == GL_FALSE) {
      char  program_log[1024];
      GLint program_log_size = sizeof program_log - 1;
      qwlog_glGetProgramInfoLog(*prog, sizeof program_log,
                                &program_log_size, program_log);
      printf("%s: Shader program link failed.\n%*s\n", BS(name),
             program_log_size, program_log);
      result = QW_ERROR;
    } else {
#ifndef __EMSCRIPTEN__
      FILE *out = fopen(BS(cache_file), "wb");

      if (out != NULL) {
        qwlog_glGetProgramiv(*prog, GL_PROGRAM_BINARY_LENGTH,
                             &binary_size);

        binary_data = (uint8_t *) kit_alloc_dispatch(
            ALLOC, KIT_ALLOCATE, binary_size, 0, NULL);

        if (binary_data != NULL) {
          int written;

          qwlog_glGetProgramBinary(*prog, binary_size, &written,
                                   (GLenum *) &binary_format,
                                   binary_data);

          printf("%s: Cache shader program binary.\n", BS(name));

          fwrite(&written, 4, 1, out);
          fwrite(&binary_format, 4, 1, out);
          fwrite(binary_data, 1, written, out);

          kit_alloc_dispatch(ALLOC, KIT_DEALLOCATE, 0, 0,
                             binary_data);
        }

        fclose(out);
      }
#endif
    }
  }

  DA_DESTROY(cache_file);

  return result;
}

static kit_status_t graphics_shaders_load(int rebuild) {
  kit_status_t result = KIT_OK;

  string_t cache_folder = get_cache_folder();
  file_create_folder_recursive(WRAP_STR(cache_folder));

  graphics_load_shader(
      rebuild, WRAP_STR(cache_folder), SZ("shader_3d_solid.bin"),
      &shader_3d_solid_vert, &shader_3d_solid_frag,
      &shader_3d_solid_prog, src_3d_solid_vert, src_3d_solid_frag);

  graphics_load_shader(
      rebuild, WRAP_STR(cache_folder), SZ("shader_2d_solid.bin"),
      &shader_2d_solid_vert, &shader_2d_solid_frag,
      &shader_2d_solid_prog, src_2d_solid_vert, src_2d_solid_frag);

  graphics_load_shader(
      rebuild, WRAP_STR(cache_folder), SZ("shader_2d_texture.bin"),
      &shader_2d_texture_vert, &shader_2d_texture_frag,
      &shader_2d_texture_prog, src_2d_texture_vert,
      src_2d_texture_frag);

  DA_DESTROY(cache_folder);

  qwlog_glBindAttribLocation(shader_3d_solid_prog, 0, "in_position");
  qwlog_glBindAttribLocation(shader_3d_solid_prog, 1, "in_normal");

  qwlog_glBindAttribLocation(shader_2d_solid_prog, 0, "in_position");

  qwlog_glBindAttribLocation(shader_2d_texture_prog, 0,
                             "in_position");
  qwlog_glBindAttribLocation(shader_2d_texture_prog, 1,
                             "in_texcoord");

  u_3d_solid_mvp_matrix = qwlog_glGetUniformLocation(
      shader_3d_solid_prog, "u_mvp_matrix");
  u_3d_solid_eye   = qwlog_glGetUniformLocation(shader_3d_solid_prog,
                                                "u_eye");
  u_3d_solid_light = qwlog_glGetUniformLocation(shader_3d_solid_prog,
                                                "u_light");
  u_3d_solid_color = qwlog_glGetUniformLocation(shader_3d_solid_prog,
                                                "u_color");

  u_2d_solid_screen = qwlog_glGetUniformLocation(shader_2d_solid_prog,
                                                 "u_screen");
  u_2d_solid_color  = qwlog_glGetUniformLocation(shader_2d_solid_prog,
                                                 "u_color");

  u_2d_texture_screen = qwlog_glGetUniformLocation(
      shader_2d_texture_prog, "u_screen");
  u_2d_texture_color = qwlog_glGetUniformLocation(
      shader_2d_texture_prog, "u_color");
  u_2d_texture_texture = qwlog_glGetUniformLocation(
      shader_2d_texture_prog, "u_texture");

  return result;
}
static kit_status_t graphics_init(void) {
  if (is_ready)
    return KIT_OK;

  is_ready = 1;

  ALLOC = kit_alloc_default();

  qwlog_glGenTextures(1, &temp_texture);

  qwlog_glBindTexture(GL_TEXTURE_2D, temp_texture);
  qwlog_glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER,
                        GL_NEAREST);
  qwlog_glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER,
                        GL_NEAREST);
  qwlog_glBindTexture(GL_TEXTURE_2D, 0);

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

  qwlog_glGenVertexArrays(1, &internal->vertex_array);
  qwlog_glBindVertexArray(internal->vertex_array);

  qwlog_glGenBuffers(1, &internal->vertex_buffer);
  qwlog_glBindBuffer(GL_ARRAY_BUFFER, internal->vertex_buffer);

  qwlog_glBufferData(GL_ARRAY_BUFFER,
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

  qwlog_glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE,
                              sizeof(vertex_t),
                              OFFSET(vertex_t, position));

  qwlog_glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE,
                              sizeof(vertex_t),
                              OFFSET(vertex_t, normal));

  qwlog_glEnableVertexAttribArray(0);
  qwlog_glEnableVertexAttribArray(1);
  qwlog_glDisableVertexAttribArray(2);

  qwlog_glBindVertexArray(0);

  mesh->id = n;

  return KIT_OK;
}

void graphics_rebuild_shaders(void) {
  graphics_shaders_load(1);
}

void graphics_reset_mesh_data(void) {
  for (ptrdiff_t i = 0; i < mesh_array.size; i++) {
    qwlog_glDeleteBuffers(1, &mesh_array.values[i].vertex_buffer);
    qwlog_glDeleteVertexArrays(1, &mesh_array.values[i].vertex_array);
  }

  DA_DESTROY(mesh_array);
  memset(&mesh_array, 0, sizeof mesh_array);
}

void graphics_viewport(int width, int height) {
  screen_width      = width;
  screen_height     = height;
  aspect_ratio      = ((vec_t) width) / (vec_t) height;
  projection_matrix = mat4_perspective(M_PI * .1f, aspect_ratio, .1f,
                                       400.f);

  if (is_ready)
    qwlog_glViewport(0, 0, width, height);
}

void graphics_clear(vec3_t color) {
  qwlog_glClearColor(color.v[0], color.v[1], color.v[2], 1.f);
  qwlog_glClearDepthf(1.f);
  qwlog_glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

void graphics_cleanup(void) {
  if (!is_ready)
    return;

  graphics_shaders_cleanup();
  graphics_reset_mesh_data();

  qwlog_glDeleteTextures(1, &temp_texture);

  is_ready = 0;
}

void graphics_mode(int mode) {
  if (graphics_init() != KIT_OK)
    return;

  switch (mode) {
    case GRAPHICS_MESH:
      qwlog_glEnable(GL_DEPTH_TEST);
      qwlog_glDisable(GL_BLEND);

      qwlog_glBindVertexArray(0);
      qwlog_glBindTexture(GL_TEXTURE_2D, 0);

      qwlog_glUseProgram(shader_3d_solid_prog);

      break;

    case GRAPHICS_IMMEDIATE:
      qwlog_glDisable(GL_DEPTH_TEST);

      qwlog_glEnable(GL_BLEND);
      qwlog_glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

      qwlog_glBindBuffer(GL_ARRAY_BUFFER, 0);
      qwlog_glBindTexture(GL_TEXTURE_2D, temp_texture);

      qwlog_glBindVertexArray(0);

      break;

    default:;
  }
}

void mesh_init(mesh_t *mesh, kit_allocator_t alloc) {
  memset(mesh, 0, sizeof *mesh);
  DA_INIT(mesh->data.vertices, 0, alloc);
  mesh->id = -1;
}

void mesh_destroy(mesh_t *mesh) {
  DA_DESTROY(mesh->data.vertices);
}

void mesh_render(mesh_t *mesh, scene_t *scene) {
  if (graphics_init() != KIT_OK)
    return;
  if (mesh_init_internal(mesh) != KIT_OK)
    return;

  /*  FIXME
   *  Compute the camera matrix beforehand.
   */
  mat4_t const mvp = mat4_mul(projection_matrix,
                              camera_to_mat4(scene->camera));

  qwlog_glUniformMatrix4fv(u_3d_solid_mvp_matrix, 1, GL_FALSE, mvp.v);
  qwlog_glUniform3fv(u_3d_solid_eye, 1, scene->camera.position.v);
  qwlog_glUniform3fv(u_3d_solid_light, 1, scene->light_position.v);
  qwlog_glUniform4f(u_3d_solid_color, mesh->color.v[0],
                    mesh->color.v[1], mesh->color.v[2], 1.f);

  qwlog_glBindVertexArray(mesh_array.values[mesh->id].vertex_array);
  qwlog_glDrawArrays(GL_TRIANGLES, 0,
                     mesh_array.values[mesh->id].size);
}

void im_draw_rect(ptrdiff_t x, ptrdiff_t y, ptrdiff_t width,
                  ptrdiff_t height, vec4_t color) {
  vec_t const position[] = {
    x,         y,          //
    x + width, y,          //
    x + width, y + height, //
    x,         y,          //
    x + width, y + height, //
    x,         y + height  //
  };

  qwlog_glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 0, position);

  qwlog_glEnableVertexAttribArray(0);
  qwlog_glDisableVertexAttribArray(1);
  qwlog_glDisableVertexAttribArray(2);

  qwlog_glUseProgram(shader_2d_solid_prog);

  qwlog_glUniform2f(u_2d_solid_screen, (vec_t) screen_width,
                    (vec_t) screen_height);
  qwlog_glUniform4fv(u_2d_solid_color, 1, color.v);

  qwlog_glDrawArrays(GL_TRIANGLES, 0, 6);
}

void im_draw_pixels(ptrdiff_t x, ptrdiff_t y, ptrdiff_t width,
                    ptrdiff_t height, vec4_t color,
                    ptrdiff_t image_width, ptrdiff_t image_height,
                    uint8_t const *image_data) {
  assert(image_width > 0);
  assert(image_height > 0);
  assert(image_data != NULL);

  if (image_width <= 0 || image_height <= 0 || image_data == NULL)
    return;

  vec_t const position[] = {
    x,         y,          //
    x + width, y,          //
    x + width, y + height, //
    x,         y,          //
    x + width, y + height, //
    x,         y + height  //
  };

  vec_t const texcoord[] = {
    0.f, 0.f, //
    1.f, 0.f, //
    1.f, 1.f, //
    0.f, 0.f, //
    1.f, 1.f, //
    0.f, 1.f  //
  };

  qwlog_glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 0, position);
  qwlog_glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 0, texcoord);

  qwlog_glEnableVertexAttribArray(0);
  qwlog_glEnableVertexAttribArray(1);
  qwlog_glDisableVertexAttribArray(2);

  qwlog_glUseProgram(shader_2d_texture_prog);

  qwlog_glUniform2f(u_2d_texture_screen, (vec_t) screen_width,
                    (vec_t) screen_height);
  qwlog_glUniform4fv(u_2d_texture_color, 1, color.v);
  qwlog_glUniform1i(u_2d_texture_texture, 0);

  qwlog_glBindTexture(GL_TEXTURE_2D, temp_texture);

  qwlog_glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, image_width,
                     image_height, 0, GL_RGBA, GL_UNSIGNED_BYTE,
                     image_data);

  qwlog_glDrawArrays(GL_TRIANGLES, 0, 6);
}

#define LCD_CHAR_WIDTH 5
#define LCD_CHAR_HEIGHT 7
#define LCD_CHARS_X 16
#define LCD_CHARS_Y 6
#define LCD_CHAR_COUNT (LCD_CHARS_X * LCD_CHARS_Y)
#define LCD_WIDTH (LCD_CHAR_WIDTH * LCD_CHARS_X)
#define LCD_HEIGHT (LCD_CHAR_HEIGHT * LCD_CHARS_Y)
#define LCD_SIZE \
  (LCD_CHAR_WIDTH * LCD_CHAR_HEIGHT * LCD_CHARS_X * LCD_CHARS_Y)

typedef struct {
  ptrdiff_t offset;
  ptrdiff_t left;
  ptrdiff_t right;
  ptrdiff_t top;
  ptrdiff_t bottom;
} char_info_t;

static const uint64_t lcd[] = {
  0xffe77bfe7fbfff3f, 0xfddd991ad73fdfff, 0xa9d0d73fdfffffc2,
  0xff3feffffdc2fddc, 0xefe3f8e6fdff77ba, 0x9dfefdfa8b787f3f,
  0xfdfd8d1affffee7f, 0x7fbfff3ff67f9ffe, 0xe739f7ffbfff7bfa,
  0xcfffffff398661bc, 0x7ce6d6bdbd9bdf76, 0xd9dfb1addf76b77f,
  0x2fabef76bee3bce6, 0xf776ddffdffe36ec, 0xcee3bce6f6edad0b,
  0x7ce739ee73bcc639, 0xffffffffffffff7f, 0x0108c631cffffdff,
  0x318e8b9d0a060c88, 0x63099a4f2ce738c6, 0x9c4f20e738ce3182,
  0x202420ce40026201, 0x38c6319e6095984f, 0x8191619c9a4b2c67,
  0x8b9c0a660c8f0108, 0xffffffffffffffff, 0xce738808c230ffff,
  0x89b6318cfef3dcc1, 0xb18cfd77deddd573, 0xfbb7beeebb5549bc,
  0xbef77b5549bbc190, 0x7506c9b6319cfff7, 0xe3b8b23cfff7befb,
  0xfcfffff77ec36eae, 0x07f37cffffffffff, 0xbeef7ffffffffff3,
  0xfdccf37cfb37ffff, 0x6d7b7aefce69beff, 0x621fb555baef7db7,
  0xb555bcef79b4611f, 0xbaef75cf7d6b5adf, 0x75f7730cc33fb555,
  0xffffffffcd559aef, 0xfffffffffff7ffcf, 0x07f3b9ffffffffff,
  0xbdc2d673abbcd738, 0xd673ab1f66d667f7, 0x6bbcf6d66377bdde,
  0xf63862afbee73955, 0x65b7bdfb76046bbb, 0xbdc396aee77cf6fe,
  0xfffffffffefe67f7, 0x7f3b9ff
};

static const char_info_t info[] = {
  { 0, 1, 1, 2, 1 },    { 5, 1, 2, 0, 0 },    { 10, 1, 1, 1, 1 },
  { 15, 0, 0, 1, 1 },   { 20, 1, 1, 0, 0 },   { 25, 0, 0, 1, 1 },
  { 30, 0, 0, 0, 0 },   { 35, 2, 2, 1, 1 },   { 40, 1, 2, 0, 0 },
  { 45, 2, 1, 0, 0 },   { 50, 0, 1, 0, 1 },   { 55, 1, 1, 2, 1 },
  { 60, 1, 2, 4, 0 },   { 65, 1, 1, 3, 1 },   { 70, 1, 2, 4, 1 },
  { 75, 0, 2, 0, 0 },   { 560, 0, 1, 0, 1 },  { 565, 1, 1, 0, 1 },
  { 570, 1, 1, 0, 1 },  { 575, 1, 1, 0, 1 },  { 580, 0, 1, 0, 1 },
  { 585, 0, 1, 0, 1 },  { 590, 0, 1, 0, 1 },  { 595, 0, 1, 0, 1 },
  { 600, 0, 1, 0, 1 },  { 605, 0, 1, 0, 1 },  { 610, 1, 2, 1, 1 },
  { 615, 1, 2, 1, 0 },  { 620, 1, 1, 1, 1 },  { 625, 1, 1, 2, 1 },
  { 630, 1, 1, 1, 1 },  { 635, 0, 1, 0, 0 },  { 1120, 0, 0, 0, 1 },
  { 1125, 0, 0, 0, 1 }, { 1130, 0, 0, 0, 1 }, { 1135, 0, 0, 0, 1 },
  { 1140, 0, 0, 0, 1 }, { 1145, 0, 0, 0, 1 }, { 1150, 0, 0, 0, 1 },
  { 1155, 0, 0, 0, 1 }, { 1160, 0, 0, 0, 1 }, { 1165, 0, 1, 0, 1 },
  { 1170, 0, 0, 0, 1 }, { 1175, 0, 1, 0, 1 }, { 1180, 0, 0, 0, 1 },
  { 1185, 0, 0, 0, 1 }, { 1190, 0, 0, 0, 1 }, { 1195, 0, 0, 0, 1 },
  { 1680, 0, 0, 0, 1 }, { 1685, 0, 0, 0, 0 }, { 1690, 0, 0, 0, 1 },
  { 1695, 0, 0, 0, 1 }, { 1700, 0, 0, 0, 1 }, { 1705, 0, 0, 0, 1 },
  { 1710, 0, 0, 0, 1 }, { 1715, 0, 0, 0, 1 }, { 1720, 0, 0, 0, 1 },
  { 1725, 0, 0, 0, 1 }, { 1730, 0, 1, 0, 1 }, { 1735, 1, 2, 0, 0 },
  { 1740, 1, 1, 0, 0 }, { 1745, 1, 2, 0, 0 }, { 1750, 0, 0, 0, 1 },
  { 1755, 0, 0, 6, 0 }, { 2240, 2, 0, 0, 1 }, { 2245, 0, 1, 1, 1 },
  { 2250, 0, 1, 1, 1 }, { 2255, 0, 1, 1, 1 }, { 2260, 0, 1, 1, 1 },
  { 2265, 0, 1, 1, 1 }, { 2270, 1, 1, 1, 1 }, { 2275, 0, 1, 1, 0 },
  { 2280, 1, 1, 1, 1 }, { 2285, 2, 2, 0, 1 }, { 2290, 1, 2, 0, 0 },
  { 2295, 1, 1, 0, 1 }, { 2300, 1, 2, 0, 1 }, { 2305, 0, 0, 1, 1 },
  { 2310, 1, 1, 1, 1 }, { 2315, 0, 1, 1, 1 }, { 2800, 0, 1, 1, 0 },
  { 2805, 0, 1, 1, 0 }, { 2810, 1, 1, 1, 1 }, { 2815, 0, 1, 1, 1 },
  { 2820, 1, 1, 1, 1 }, { 2825, 1, 1, 1, 1 }, { 2830, 0, 0, 1, 1 },
  { 2835, 0, 0, 1, 1 }, { 2840, 0, 1, 1, 1 }, { 2845, 0, 1, 1, 1 },
  { 2850, 0, 1, 1, 1 }, { 2855, 1, 1, 0, 0 }, { 2860, 2, 2, 0, 0 },
  { 2865, 1, 1, 0, 0 }, { 2870, 0, 0, 2, 1 }, { 2875, 0, 0, 0, 0 }
};

static ptrdiff_t text_area_width(ptrdiff_t spacing, int is_monospace,
                                 kit_str_t text) {
  ptrdiff_t width = 0;

  for (ptrdiff_t i = 0; i < text.size; i++) {
    if (i > 0)
      width += spacing;

    ptrdiff_t c = text.values[i] - 32;

    if (c < 0 || c >= sizeof info / sizeof *info)
      c = (sizeof info / sizeof *info) - 1;

    if (is_monospace)
      width += LCD_CHAR_WIDTH;
    else
      width += LCD_CHAR_WIDTH - info[c].left - info[c].right;
  }

  return width;
}

text_area_t im_text_area(ptrdiff_t spacing, int is_monospace,
                         kit_str_t text) {
  text_area_t const area = { .width = text_area_width(
                                 spacing, is_monospace, text),
                             .height      = LCD_CHAR_HEIGHT,
                             .top_line    = 0,
                             .bottom_line = 0 };

  return area;
}

void im_draw_text(ptrdiff_t x, ptrdiff_t y, ptrdiff_t width,
                  ptrdiff_t height, vec4_t color, ptrdiff_t spacing,
                  int is_monospace, kit_str_t text) {
  if (width <= 0 || height <= 0 || text.size == 0)
    return;

  ptrdiff_t const line_size = text_area_width(spacing, is_monospace,
                                              text);

  uint8_t *pixels = (uint8_t *) kit_alloc_dispatch(
      ALLOC, KIT_ALLOCATE, line_size * LCD_CHAR_HEIGHT * 4, 0, NULL);

  if (pixels == NULL)
    return;

  for (ptrdiff_t i = 0; i < line_size * LCD_CHAR_HEIGHT; i++) {
    pixels[i * 4]     = 0xff;
    pixels[i * 4 + 1] = 0xff;
    pixels[i * 4 + 2] = 0xff;
    pixels[i * 4 + 3] = 0;
  }

  ptrdiff_t total_width = 0;

  for (ptrdiff_t char_index = 0; char_index < text.size;
       char_index++) {
    if (char_index > 0)
      total_width += spacing;

    ptrdiff_t c = text.values[char_index] - 32;

    if (c < 0 || c >= sizeof info / sizeof *info)
      c = (sizeof info / sizeof *info) - 1;

    ptrdiff_t left, width;
    if (is_monospace) {
      left  = 0;
      width = LCD_CHAR_WIDTH;
    } else {
      left  = info[c].left;
      width = LCD_CHAR_WIDTH - left - info[c].right;
    }

    ptrdiff_t const offset = info[c].offset;
    ptrdiff_t const top    = info[c].top;
    ptrdiff_t const height = LCD_CHAR_HEIGHT - top - info[c].bottom;

    for (ptrdiff_t j = 0; j < height; j++)
      for (ptrdiff_t i = 0; i < width; i++) {
        ptrdiff_t const k = offset + (top + j) * LCD_WIDTH + left + i;
        if ((lcd[k / 64] & (1ull << (k % 64))) != 0)
          continue;
        ptrdiff_t const n = ((j + top) * line_size + total_width +
                             i) *
                            4;
        pixels[n + 3] = 0xff;
      }

    total_width += width;
  }

  im_draw_pixels(x, y, width, height, color, line_size,
                 LCD_CHAR_HEIGHT, pixels);

  kit_alloc_dispatch(ALLOC, KIT_DEALLOCATE, 0, 0, pixels);
}
