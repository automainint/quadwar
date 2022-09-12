#include "stem.h"

#include "gl/gl.h"
#include <stdio.h>

#define CODE_(text) #text

static char const *const vertex_shader_source = //
    "#version 130\n"                            //
    CODE_(                                      //
        in vec2  in_position;                   //
        out vec4 ex_color;                      //
        void     main(void) {                   //
          gl_Position = vec4(in_position.x, in_position.y, 0.0,
                                 1.0);                 //
          ex_color    = vec4(0.7, 0.3, 0.25, 1.0); //
        }                                              //
    );

static char const *const fragment_shader_source = //
    "#version 130\n"                              //
    CODE_(                                        //
        precision highp float;                    //
        in vec4   ex_color;                       //
        void      main() {                        //
          gl_FragColor = ex_color;           //
        }                                         //
    );

static GLuint vertex_array;
static GLuint vertex_buffer;
static GLuint vertex_shader;
static GLuint fragment_shader;
static GLuint shader_program;

void qw_down(int key) {
  // printf("^ key down %d\n", key);
}

void qw_up(int key) {
  // printf("^ key up %d\n", key);
}

void qw_motion(int x, int y, int delta_x, int delta_y) {
  // printf("^ motion %3d %3d\n", x, y);
}

void qw_wheel(float delta_x, float delta_y) {
  // printf("^ wheel %3g %3g\n", delta_x, delta_y);
}

void qw_init(void) {
  for (int i = 0; i < QW_KEY_MAP_SIZE; i++) qw_key_map[i] = i;

  glGenVertexArrays(1, &vertex_array);
  glBindVertexArray(vertex_array);

  glGenBuffers(1, &vertex_buffer);
  glBindBuffer(GL_ARRAY_BUFFER, vertex_buffer);

  float data[] = {
    -.5f, -.5f, //
    -.5f, .5f,  //
    .5f,  .5f,  //
    -.5f, -.5f, //
    .5f,  .5f,  //
    .5f,  -.5f,
  };

  glBufferData(GL_ARRAY_BUFFER, sizeof data, data, GL_STATIC_DRAW);

  glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 0, NULL);
  glEnableVertexAttribArray(0);

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

  glBindAttribLocation(shader_program, 0, "in_position");

  glLinkProgram(shader_program);

  glGetProgramiv(shader_program, GL_LINK_STATUS, &status);

  if (status == GL_FALSE) {
    char  program_log[1024];
    GLint program_log_size = sizeof program_log - 1;
    glGetProgramInfoLog(shader_program, sizeof program_log,
                        &program_log_size, program_log);
    printf("Shader program link failed.\n%*s\n", program_log_size,
           program_log);
  }

  glUseProgram(shader_program);
}

void qw_cleanup(void) {
  glUseProgram(0);
  glDeleteProgram(shader_program);
  glDeleteShader(vertex_shader);
  glDeleteShader(fragment_shader);
  glDeleteBuffers(1, &vertex_buffer);
  glDeleteVertexArrays(1, &vertex_array);
}

void qw_size(int x, int y, int width, int height) {
  // printf("^ size %3d %3d %3d %3d\n", x, y, width, height);
  glViewport(x, y, width, height);
}

int qw_frame(int64_t time_elapsed) {
  glClearColor(.45f, .42f, .48f, 1.f);
  glClearDepth(1.0);
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

  glDrawArrays(GL_TRIANGLES, 0, 6);

  return QW_CONTINUE;
}
