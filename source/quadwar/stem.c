#include "stem.h"

#include "camera.h"
#include "gl/gl.h"
#include "math.h"
#include <kit/mersenne_twister_64.h>
#include <stdio.h>
#include <stdlib.h>

#define CODE_(...) #__VA_ARGS__

static char const *const vertex_shader_source = //
    "#version 300 es\n"                         //
    CODE_(uniform mat4 u_view;                  //
          uniform mat4 u_object;                //

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

static char const *const fragment_shader_source = //
    "#version 300 es\n"                           //
    CODE_(                                        //
        precision highp float;                    //

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

static GLuint vertex_array;
static GLuint vertex_buffer;
static GLuint vertex_shader;
static GLuint fragment_shader;
static GLuint shader_program;

static GLint u_view;
static GLint u_object;
static GLint u_eye;
static GLint u_light;
static GLint u_color;

static vec_t aspect_ratio = 1.f;

static vec_t const sense_motion       = .004f;
static vec_t const sense_wheel        = .13f;
static vec_t const sense_movement     = .007f;
static vec_t const sense_acceleration = 5.f;

static vec_t time = 0.f;

static vec3_t back_color = { { 0.f, 0.f, 0.f } };
static vec3_t color      = { { 1.f, 1.f, 1.f } };

static int8_t is_down[QW_KEY_MAP_SIZE];

static vec3_t const world_up             = { { 0.f, 0.f, 1.f } };
static vec_t        camera_normal_factor = .005f;

static int camera_mode          = 0;
static int camera_normalization = 1;

static camera_t camera;

enum {
  MAP_SIZE_X      = 20,
  MAP_SIZE_Y      = 20,
  MAP_DATA_OFFSET = MAP_SIZE_X * MAP_SIZE_Y * 18
};

#define MAP_SCALE_Z 0.005f
#define MAP_CELL_SIZE 2.f

#define OFFSET(x) ((void *) (sizeof(vec_t) * (x)))

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

  qw_glBindAttribLocation(shader_program, 0, "in_position");
  qw_glBindAttribLocation(shader_program, 1, "in_normal");

  u_view   = qw_glGetUniformLocation(shader_program, "u_view");
  u_object = qw_glGetUniformLocation(shader_program, "u_object");
  u_eye    = qw_glGetUniformLocation(shader_program, "u_eye");
  u_light  = qw_glGetUniformLocation(shader_program, "u_light");
  u_color  = qw_glGetUniformLocation(shader_program, "u_color");
}

static void shaders_cleanup(void) {
  qw_glDeleteProgram(shader_program);
  qw_glDeleteShader(vertex_shader);
  qw_glDeleteShader(fragment_shader);
}

void qw_down(int const key) {
  is_down[key] = 1;

  switch (key) {
    case QW_KEY_RETURN:
      printf("Rebuild shaders\n");
      shaders_cleanup();
      shaders_build(1);
      break;

    case QW_KEY_V:
      camera = camera_normal_local(camera, world_up, 1.f);
      break;

    case QW_KEY_1: camera_mode = 0; break;
    case QW_KEY_2: camera_mode = 1; break;
    case QW_KEY_3: camera_mode = 2; break;
    case QW_KEY_N: camera_normalization ^= 1; break;

    default:;
  }
}

void qw_up(int const key) {
  is_down[key] = 0;
}

void qw_motion(int const x, int const y, int const delta_x,
               int const delta_y) {
  if (is_down[QW_KEY_BUTTON_LEFT]) {
    switch (camera_mode) {
      case 0:
        /*  Rotation relative to camera up axis.
         */

        camera = camera_rotate_local(
            camera, quat_mul(quat_rotation(-delta_x * sense_motion,
                                           camera_up),
                             quat_rotation(-delta_y * sense_motion,
                                           camera_right)));
        break;

      case 1:
        /*  Rotation relative to camera up axis with normalization to
         *  world up axis.
         */

        camera = camera_normal(
            camera_rotate_local(
                camera,
                quat_mul(
                    quat_rotation(-delta_x * sense_motion, camera_up),
                    quat_rotation(-delta_y * sense_motion,
                                  camera_right))),
            world_up, 1.f);
        break;

      case 2:
        /*  Rotation relative to world up axis, aka Euler angles.
         */

        if (delta_x != 0)
          camera = camera_rotate(
              camera,
              quat_rotation(-delta_x * sense_motion, world_up));
        if (delta_y != 0)
          camera = camera_rotate_local(
              camera,
              quat_rotation(-delta_y * sense_motion, camera_right));
        break;

      default:;
    }
  }

  if (is_down[QW_KEY_BUTTON_RIGHT])
    camera = camera_move_local(
        camera,
        vec3_add(vec3_mul(camera_right, delta_x * sense_motion),
                 vec3_mul(camera_up, -delta_y * sense_motion)));
}

void qw_wheel(float const delta_x, float const delta_y) {
  camera = camera_move_local(
      camera, vec3_mul(camera_forward, -delta_y * sense_wheel));
}

void qw_init(void) {
  (void) sense_motion;
  (void) sense_wheel;
  (void) sense_movement;

  for (int i = 0; i < QW_KEY_MAP_SIZE; i++) qw_key_map[i] = i;

  back_color = lch_to_rgb(vec3(45.f, 7.f, .75f));

  qw_glGenVertexArrays(1, &vertex_array);
  qw_glBindVertexArray(vertex_array);

  qw_glGenBuffers(1, &vertex_buffer);
  qw_glBindBuffer(GL_ARRAY_BUFFER, vertex_buffer);

  mt64_state_t mt64;
  mt64_init(&mt64, 31415);
  mt64_rotate(&mt64);

  vec_t data[MAP_DATA_OFFSET * 2];

  vec_t *const vertices = data;
  vec_t *const normals  = data + MAP_DATA_OFFSET;

#define N_(x, y) (((y) *MAP_SIZE_X + (x)) * 18)

  for (ptrdiff_t j = 0; j < MAP_SIZE_Y; j++)
    for (ptrdiff_t i = 0; i < MAP_SIZE_X; i++) {
      ptrdiff_t const n = N_(i, j);

      uint64_t const z0 = mt64_generate(&mt64) % 1000;
      uint64_t const z1 = mt64_generate(&mt64) % 1000;
      uint64_t const z2 = mt64_generate(&mt64) % 1000;
      uint64_t const z3 = mt64_generate(&mt64) % 1000;

      vec_t const h0 = -3.f + MAP_SCALE_Z * z0;
      vec_t const h1 = -3.f + MAP_SCALE_Z * z1;
      vec_t const h2 = -3.f + MAP_SCALE_Z * z2;
      vec_t const h3 = -3.f + MAP_SCALE_Z * z3;

      if (j > 0) {
        vertices[n + 2]  = vertices[N_(i, j - 1) + 17];
        vertices[n + 11] = vertices[N_(i, j - 1) + 17];
        vertices[n + 5]  = vertices[N_(i, j - 1) + 8];
      } else {
        if (i > 0) {
          vertices[n + 2]  = vertices[N_(i - 1, j) + 5];
          vertices[n + 11] = vertices[N_(i - 1, j) + 5];
        } else {
          vertices[n + 2]  = h0;
          vertices[n + 11] = h0;
        }
        vertices[n + 5] = h1;
      }

      if (i > 0)
        vertices[n + 17] = vertices[N_(i - 1, j) + 8];
      else
        vertices[n + 17] = h2;

      vertices[n + 8]  = h3;
      vertices[n + 14] = h3;

      vertices[n]     = (-MAP_SIZE_X * .5f + i) * MAP_CELL_SIZE;
      vertices[n + 1] = (-MAP_SIZE_Y * .5f + j) * MAP_CELL_SIZE;

      vertices[n + 3] = (-MAP_SIZE_X * .5f + i + 1) * MAP_CELL_SIZE;
      vertices[n + 4] = (-MAP_SIZE_Y * .5f + j) * MAP_CELL_SIZE;

      vertices[n + 6] = (-MAP_SIZE_X * .5f + i + 1) * MAP_CELL_SIZE;
      vertices[n + 7] = (-MAP_SIZE_Y * .5f + j + 1) * MAP_CELL_SIZE;

      vertices[n + 9]  = (-MAP_SIZE_X * .5f + i) * MAP_CELL_SIZE;
      vertices[n + 10] = (-MAP_SIZE_Y * .5f + j) * MAP_CELL_SIZE;

      vertices[n + 12] = (-MAP_SIZE_X * .5f + i + 1) * MAP_CELL_SIZE;
      vertices[n + 13] = (-MAP_SIZE_Y * .5f + j + 1) * MAP_CELL_SIZE;

      vertices[n + 15] = (-MAP_SIZE_X * .5f + i) * MAP_CELL_SIZE;
      vertices[n + 16] = (-MAP_SIZE_Y * .5f + j + 1) * MAP_CELL_SIZE;

      /*
      vec3_t const r0 = vec3(MAP_CELL_SIZE, 0.f,
                             vertices[n + 5] - vertices[n + 2]);
      vec3_t const r1 = vec3(0.f, MAP_CELL_SIZE,
                             vertices[n + 17] - vertices[n + 2]);
      */

      vec3_t const r = vec3(0.f, 0.f,
                            1.f); // vec3_normal(vec3_cross(r0, r1));

      normals[n]     = r.v[0];
      normals[n + 1] = r.v[1];
      normals[n + 2] = r.v[2];

      normals[n + 3] = r.v[0];
      normals[n + 4] = r.v[1];
      normals[n + 5] = r.v[2];

      normals[n + 6] = r.v[0];
      normals[n + 7] = r.v[1];
      normals[n + 8] = r.v[2];

      normals[n + 9]  = r.v[0];
      normals[n + 10] = r.v[1];
      normals[n + 11] = r.v[2];

      normals[n + 12] = r.v[0];
      normals[n + 13] = r.v[1];
      normals[n + 14] = r.v[2];

      normals[n + 15] = r.v[0];
      normals[n + 16] = r.v[1];
      normals[n + 17] = r.v[2];
    }

#undef N_

  qw_glBufferData(GL_ARRAY_BUFFER, sizeof data, data, GL_STATIC_DRAW);

  qw_glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, OFFSET(0));

  qw_glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 0,
                           OFFSET(MAP_DATA_OFFSET));

  qw_glEnableVertexAttribArray(0);
  qw_glEnableVertexAttribArray(1);

  qw_glBindVertexArray(0);

  shaders_build(0);

  camera = camera_look_at(vec3(-17.f, -14.f, 5.f),
                          vec3(0.f, 0.f, 2.f));
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
  vec_t const movement_factor = is_down[QW_KEY_LSHIFT] ||
                                        is_down[QW_KEY_R]
                                    ? sense_movement *
                                          sense_acceleration
                                    : sense_movement;

  if (is_down[QW_KEY_A])
    camera = camera_move_local(
        camera,
        vec3_mul(camera_right, -movement_factor * time_elapsed));
  if (is_down[QW_KEY_D])
    camera = camera_move_local(
        camera,
        vec3_mul(camera_right, movement_factor * time_elapsed));

  if (is_down[QW_KEY_W])
    camera = camera_move_local(
        camera,
        vec3_mul(camera_forward, -movement_factor * time_elapsed));
  if (is_down[QW_KEY_S])
    camera = camera_move_local(
        camera,
        vec3_mul(camera_forward, movement_factor * time_elapsed));

  if (camera_normalization)
    camera = camera_normal_local(camera, world_up,
                                 camera_normal_factor * time_elapsed);

  mat4_t const view = mat4_perspective(M_PI * .1f, aspect_ratio, .1f,
                                       400.f);

  mat4_t const object = camera_to_mat4(camera);

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
  qw_glUniform3f(u_eye, camera.position.v[0], camera.position.v[1],
                 camera.position.v[2]);
  qw_glUniform3f(u_light, 10.f, 15.f, 25.f);
  qw_glUniform4f(u_color, color.v[0], color.v[1], color.v[2], 1.f);

  qw_glBindVertexArray(vertex_array);
  qw_glDrawArrays(GL_TRIANGLES, 0, MAP_SIZE_X * MAP_SIZE_Y * 6);

  qw_glBindVertexArray(0);
  qw_glUseProgram(0);

  return QW_CONTINUE;
}
