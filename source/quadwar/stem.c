#include "stem.h"

#include "gl/gl.h"
#include "math.h"
#include <stdio.h>
#include <stdlib.h>

#define CODE_(...) #__VA_ARGS__

static char const *const vertex_shader_source = //
    "#version 300 es\n"                         //
    CODE_(uniform mat4 u_view;                  //
          uniform mat4 u_object;                //

          in vec3 in_position; //

          void main(void) { //
            gl_Position = (u_view * u_object) * vec4(in_position.x,
                                                     in_position.y,
                                                     in_position.z,
                                                     1.0); //
          }                                                //
    );

static char const *const fragment_shader_source = //
    "#version 300 es\n"                           //
    CODE_(                                        //
        precision    highp float;                 //
        uniform vec4 u_color;                     //

        out vec4 out_color; //

        void main() {          //
          out_color = u_color; //
        }                      //
    );

static GLuint vertex_array;
static GLuint vertex_buffer;
static GLuint vertex_shader;
static GLuint fragment_shader;
static GLuint shader_program;

static GLint u_view;
static GLint u_object;
static GLint u_color;

static vec_t aspect_ratio = 1.f;

static vec_t const sense_motion = .004f;
static vec_t const sense_wheel  = .07f;

static vec_t time = 0.f;

static vec3_t back_color = { { 0.f, 0.f, 0.f } };
static vec3_t color      = { { 1.f, 1.f, 1.f } };

static quat_t rotation = { { 0.f, 0.f, 0.f, 1.f } };
static vec_t  rotate_x = 0.f;
static vec_t  rotate_y = 0.f;
static vec_t  rotate_z = 0.f;

static int is_left_button = 0;

static void shaders_build(int rebuild) {
  static char const cache_file[] = ".cache_shader.bin";

  FILE *in = NULL;

  if (!rebuild)
    in = fopen(cache_file, "rb");

  int32_t  binary_size;
  int32_t  binary_format;
  uint8_t *binary_data;

  if (in != NULL) {
    fread(&binary_size, 4, 1, in);
    fread(&binary_format, 4, 1, in);

    binary_data = (uint8_t *) malloc(binary_size);

    if (binary_data != NULL) {
      fread(binary_data, 1, binary_size, in);

      printf("Load cached shader program binary\n");

      shader_program = qw_glCreateProgram();

      qw_glProgramBinary(shader_program, (GLenum) binary_format,
                         binary_data, binary_size);

      free(binary_data);
    }

    fclose(in);
  } else {
    printf("Compile shader program\n");

    vertex_shader = qw_glCreateShader(GL_VERTEX_SHADER);

    qw_glShaderSource(vertex_shader, 1, &vertex_shader_source, NULL);
    qw_glCompileShader(vertex_shader);

    GLint status;
    qw_glGetShaderiv(vertex_shader, GL_COMPILE_STATUS, &status);

    if (status == GL_FALSE) {
      char  shader_log[1024];
      GLint shader_log_size = sizeof shader_log - 1;
      qw_glGetShaderInfoLog(vertex_shader, sizeof shader_log,
                            &shader_log_size, shader_log);
      printf("Vertex shader compilation failed.\n%*s\n",
             shader_log_size, shader_log);
    }

    fragment_shader = qw_glCreateShader(GL_FRAGMENT_SHADER);

    qw_glShaderSource(fragment_shader, 1, &fragment_shader_source,
                      NULL);
    qw_glCompileShader(fragment_shader);

    qw_glGetShaderiv(fragment_shader, GL_COMPILE_STATUS, &status);

    if (status == GL_FALSE) {
      char  shader_log[1024];
      GLint shader_log_size = sizeof shader_log - 1;
      qw_glGetShaderInfoLog(fragment_shader, sizeof shader_log,
                            &shader_log_size, shader_log);
      printf("Fragment shader compilation failed.\n%*s\n",
             shader_log_size, shader_log);
    }

    shader_program = qw_glCreateProgram();

    qw_glAttachShader(shader_program, vertex_shader);
    qw_glAttachShader(shader_program, fragment_shader);

    qw_glLinkProgram(shader_program);

    qw_glGetProgramiv(shader_program, GL_LINK_STATUS, &status);

    if (status == GL_FALSE) {
      char  program_log[1024];
      GLint program_log_size = sizeof program_log - 1;
      qw_glGetProgramInfoLog(shader_program, sizeof program_log,
                             &program_log_size, program_log);
      printf("Shader program link failed.\n%*s\n", program_log_size,
             program_log);
    } else {
#ifndef __EMSCRIPTEN__
      FILE *out = fopen(cache_file, "wb");

      if (out != NULL) {
        qw_glGetProgramiv(shader_program, GL_PROGRAM_BINARY_LENGTH,
                          &binary_size);

        binary_data = (uint8_t *) malloc(binary_size);

        if (binary_data != NULL) {
          int written;

          qw_glGetProgramBinary(shader_program, binary_size, &written,
                                (GLenum *) &binary_format,
                                binary_data);

          printf("Cache shader program binary\n");

          fwrite(&written, 4, 1, out);
          fwrite(&binary_format, 4, 1, out);
          fwrite(binary_data, 1, written, out);

          free(binary_data);
        }

        fclose(out);
      }
#endif
    }
  }
}

static void shaders_cleanup(void) {
  qw_glDeleteProgram(shader_program);
  qw_glDeleteShader(vertex_shader);
  qw_glDeleteShader(fragment_shader);
}

void qw_down(int const key) {
  switch (key) {
    case QW_KEY_BUTTON_LEFT: is_left_button = 1; break;
    case QW_KEY_RETURN:
      printf("Rebuild shaders\n");
      shaders_cleanup();
      shaders_build(1);
      qw_glBindAttribLocation(shader_program, 0, "in_position");
      u_view   = qw_glGetUniformLocation(shader_program, "u_view");
      u_object = qw_glGetUniformLocation(shader_program, "u_object");
      u_color  = qw_glGetUniformLocation(shader_program, "u_color");
      break;
    default:;
  }
}

void qw_up(int const key) {
  if (key == QW_KEY_BUTTON_LEFT)
    is_left_button = 0;
}

void qw_motion(int const x, int const y, int const delta_x,
               int const delta_y) {
  if (is_left_button) {
    rotate_x -= (vec_t) M_PI * sense_motion * (vec_t) delta_y;
    rotate_y -= (vec_t) M_PI * sense_motion * (vec_t) delta_x;
  }
}

void qw_wheel(float const delta_x, float const delta_y) {
  rotate_z += (vec_t) M_PI * sense_wheel * (vec_t) delta_y;
}

void qw_init(void) {
  for (int i = 0; i < QW_KEY_MAP_SIZE; i++) qw_key_map[i] = i;

  back_color = lch_to_rgb(vec3(45.f, 7.f, .75f));

  qw_glGenVertexArrays(1, &vertex_array);
  qw_glBindVertexArray(vertex_array);

  qw_glGenBuffers(1, &vertex_buffer);
  qw_glBindBuffer(GL_ARRAY_BUFFER, vertex_buffer);

  vec_t const data[] = { -.5f, -.5f, 0.f, //
                         -.5f, .5f,  0.f, //
                         .5f,  .5f,  0.f, //
                         -.5f, -.5f, 0.f, //
                         .5f,  .5f,  0.f, //
                         .5f,  -.5f, 0.f };

  qw_glBufferData(GL_ARRAY_BUFFER, sizeof data, data, GL_STATIC_DRAW);

  qw_glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, NULL);
  qw_glEnableVertexAttribArray(0);

  qw_glBindVertexArray(0);

  shaders_build(0);

  qw_glBindAttribLocation(shader_program, 0, "in_position");

  u_view   = qw_glGetUniformLocation(shader_program, "u_view");
  u_object = qw_glGetUniformLocation(shader_program, "u_object");
  u_color  = qw_glGetUniformLocation(shader_program, "u_color");
}

void qw_cleanup(void) {
  shaders_cleanup();

  qw_glDeleteBuffers(1, &vertex_buffer);
  qw_glDeleteVertexArrays(1, &vertex_array);
}

void qw_size(int const width, int const height) {
  qw_glViewport(0, 0, width, height);
  aspect_ratio = ((vec_t) width) / (vec_t) height;
}

int qw_frame(int64_t const time_elapsed) {
  static vec3_t const axis_x = { { 1.f, 0.f, 0.f } };
  static vec3_t const axis_y = { { 0.f, 1.f, 0.f } };
  static vec3_t const axis_z = { { 0.f, 0.f, 1.f } };

  if (rotate_x != 0.f) {
    rotation = quat_normal(
        quat_mul(rotation, quat_rotation(rotate_x, axis_x)));
    rotate_x = 0;
  }

  if (rotate_y != 0.f) {
    rotation = quat_normal(
        quat_mul(rotation, quat_rotation(rotate_y, axis_y)));
    rotate_y = 0;
  }

  if (rotate_z != 0.f) {
    rotation = quat_normal(
        quat_mul(rotation, quat_rotation(rotate_z, axis_z)));
    rotate_z = 0;
  }

  mat4_t const position = mat4_move(vec3(0.f, 0.f, -4.f));

  mat4_t const rotation_matrix = quat_to_mat4(rotation);

  mat4_t const view = mat4_perspective(M_PI * .1f, aspect_ratio, .1f,
                                       400.f);

  mat4_t const object = mat4_mul(position, rotation_matrix);

  vec_t const hue = time / 30;

  color = lch_to_rgb(
      vec3(47.f, 47.f, (2.f * M_PI) * (hue - floorf(hue))));

  time += ((vec_t) time_elapsed) / 1000.f;

  qw_glClearColor(back_color.v[0], back_color.v[1], back_color.v[2],
                  1.f);
  qw_glClearDepthf(1.f);
  qw_glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

  qw_glEnable(GL_DEPTH_TEST);

  qw_glUseProgram(shader_program);
  qw_glUniformMatrix4fv(u_view, 1, GL_FALSE, view.v);
  qw_glUniformMatrix4fv(u_object, 1, GL_FALSE, object.v);
  qw_glUniform4f(u_color, color.v[0], color.v[1], color.v[2], 1.f);

  qw_glBindVertexArray(vertex_array);
  qw_glDrawArrays(GL_TRIANGLES, 0, 6);

  qw_glBindVertexArray(0);
  qw_glUseProgram(0);

  return QW_CONTINUE;
}
