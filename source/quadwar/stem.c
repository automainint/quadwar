#include "stem.h"

#include "gl/gl.h"
#include "math.h"
#include <stdio.h>
#include <stdlib.h>

#define CODE_(...) #__VA_ARGS__

static char const *const vertex_shader_source = //
    "#version 130\n"                            //
    CODE_(uniform mat4 u_view;                  //
          uniform mat4 u_object;                //

          in vec3  in_position; //
          out vec4 ex_color;    //

          void main(void) { //
            gl_Position = (u_view * u_object) * vec4(in_position.x,
                                                     in_position.y,
                                                     in_position.z,
                                                     1.0); //
            ex_color    = vec4(0.7, 0.3, 0.25, 1.0);       //
          }                                                //
    );

static char const *const fragment_shader_source = //
    "#version 130\n"                              //
    CODE_(                                        //
        precision highp float;                    //
        in vec4   ex_color;                       //

        void main() {              //
          gl_FragColor = ex_color; //
        }                          //
    );

static GLuint vertex_array;
static GLuint vertex_buffer;
static GLuint vertex_shader;
static GLuint fragment_shader;
static GLuint shader_program;

static GLint u_view;
static GLint u_object;

float aspect_ratio = 1.f;

void qw_down(int const key) {
  // printf("^ key down %d\n", key);
}

void qw_up(int const key) {
  // printf("^ key up %d\n", key);
}

void qw_motion(int const x, int const y, int const delta_x,
               int const delta_y) {
  // printf("^ motion %3d %3d\n", x, y);
}

void qw_wheel(float const delta_x, float const delta_y) {
  // printf("^ wheel %3g %3g\n", delta_x, delta_y);
}

static void build_shaders(void) {
  static char const cache_file[] = ".cache_shader.bin";

  FILE *in = fopen(cache_file, "rb");

  int32_t  binary_size;
  int32_t  binary_format;
  uint8_t *binary_data = NULL;

  if (in != NULL) {
    fread(&binary_size, 4, 1, in);
    fread(&binary_format, 4, 1, in);

    binary_data = (uint8_t *) malloc(binary_size);

    if (binary_data != NULL) {
      fread(binary_data, 1, binary_size, in);

      printf("Load cached shader program binary\n");

      shader_program = glCreateProgram();

      glProgramBinary(shader_program, (GLenum) binary_format,
                      binary_data, binary_size);
    }

    fclose(in);
  } else {
    printf("Compile shader program\n");

    vertex_shader = glCreateShader(GL_VERTEX_SHADER);

    glShaderSource(vertex_shader, 1, &vertex_shader_source, NULL);
    glCompileShader(vertex_shader);

    GLint status;
    glGetShaderiv(vertex_shader, GL_COMPILE_STATUS, &status);

    if (status == GL_FALSE) {
      char  shader_log[1024];
      GLint shader_log_size = sizeof shader_log - 1;
      glGetShaderInfoLog(vertex_shader, sizeof shader_log,
                         &shader_log_size, shader_log);
      printf("Vertex shader compilation failed.\n%*s\n",
             shader_log_size, shader_log);
    }

    fragment_shader = glCreateShader(GL_FRAGMENT_SHADER);

    glShaderSource(fragment_shader, 1, &fragment_shader_source, NULL);
    glCompileShader(fragment_shader);

    glGetShaderiv(fragment_shader, GL_COMPILE_STATUS, &status);

    if (status == GL_FALSE) {
      char  shader_log[1024];
      GLint shader_log_size = sizeof shader_log - 1;
      glGetShaderInfoLog(fragment_shader, sizeof shader_log,
                         &shader_log_size, shader_log);
      printf("Fragment shader compilation failed.\n%*s\n",
             shader_log_size, shader_log);
    }

    shader_program = glCreateProgram();

    glAttachShader(shader_program, vertex_shader);
    glAttachShader(shader_program, fragment_shader);

    glLinkProgram(shader_program);

    glGetProgramiv(shader_program, GL_LINK_STATUS, &status);

    if (status == GL_FALSE) {
      char  program_log[1024];
      GLint program_log_size = sizeof program_log - 1;
      glGetProgramInfoLog(shader_program, sizeof program_log,
                          &program_log_size, program_log);
      printf("Shader program link failed.\n%*s\n", program_log_size,
             program_log);
    } else {
      glGetProgramiv(shader_program, GL_PROGRAM_BINARY_LENGTH,
                     &binary_size);

      binary_data = (uint8_t *) malloc(binary_size);

      if (binary_data != NULL) {
        int written;

        glGetProgramBinary(shader_program, binary_size, &written,
                           (GLenum *) &binary_format, binary_data);

        printf("Cache shader program binary\n");

        FILE *out = fopen(cache_file, "wb");

        fwrite(&written, 4, 1, out);
        fwrite(&binary_format, 4, 1, out);
        fwrite(binary_data, 1, written, out);

        fclose(out);
      }
    }
  }

  if (binary_data != NULL)
    free(binary_data);
}

void qw_init(void) {
  for (int i = 0; i < QW_KEY_MAP_SIZE; i++) qw_key_map[i] = i;

  glGenVertexArrays(1, &vertex_array);
  glBindVertexArray(vertex_array);

  glGenBuffers(1, &vertex_buffer);
  glBindBuffer(GL_ARRAY_BUFFER, vertex_buffer);

  float data[] = { -.5f, -.5f, 0.f, //
                   -.5f, .5f,  0.f, //
                   .5f,  .5f,  0.f, //
                   -.5f, -.5f, 0.f, //
                   .5f,  .5f,  0.f, //
                   .5f,  -.5f, 0.f };

  glBufferData(GL_ARRAY_BUFFER, sizeof data, data, GL_STATIC_DRAW);

  glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, NULL);
  glEnableVertexAttribArray(0);

  glBindVertexArray(0);

  build_shaders();

  glBindAttribLocation(shader_program, 0, "in_position");

  u_view   = glGetUniformLocation(shader_program, "u_view");
  u_object = glGetUniformLocation(shader_program, "u_object");
}

void qw_cleanup(void) {
  glDeleteProgram(shader_program);
  glDeleteShader(vertex_shader);
  glDeleteShader(fragment_shader);
  glDeleteBuffers(1, &vertex_buffer);
  glDeleteVertexArrays(1, &vertex_array);
}

void qw_size(int const x, int const y, int const width,
             int const height) {
  // printf("^ size %3d %3d %3d %3d\n", x, y, width, height);
  glViewport(x, y, width, height);
  aspect_ratio = ((float) width) / (float) height;
}

int qw_frame(int64_t const time_elapsed) {
  static vec_t t = 0.f;

  vec3_t const axis = vec3_normal(vec3(1.f, 0.f, 0.f));

  quat_t const q = quat_rotation(M_PI * .6f * t, axis);

  mat4_t const position = mat4_move(vec3(0.f, 0.f, -1.f));

  mat4_t const rotation = quat_to_mat4(q);

  mat4_t const view = mat4_perspective(M_PI * .3f, aspect_ratio, .1f,
                                       400.f);

  mat4_t const object = mat4_mul(position, rotation);

  t += .001f * (vec_t) time_elapsed;

  glClearColor(.45f, .42f, .48f, 1.f);
  glClearDepth(1.0);
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

  glEnable(GL_DEPTH_TEST);

  glUseProgram(shader_program);
  glUniformMatrix4fv(u_view, 1, GL_FALSE, view.v);
  glUniformMatrix4fv(u_object, 1, GL_FALSE, object.v);

  glBindVertexArray(vertex_array);
  glDrawArrays(GL_TRIANGLES, 0, 6);

  glBindVertexArray(0);
  glUseProgram(0);

  return QW_CONTINUE;
}
