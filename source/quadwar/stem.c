#include "stem.h"

#include "gl/gl.h"
#include <stdio.h>

int qw_key_map[QW_KEY_MAP_SIZE];

void qw_down(int key) {
  printf("^ key down %d\n", key);
}

void qw_up(int key) {
  printf("^ key up %d\n", key);
}

void qw_motion(int x, int y, int delta_x, int delta_y) {
  printf("^ motion %3d %3d\n", x, y);
}

void qw_wheel(float delta_x, float delta_y) {
  printf("^ wheel %3g %3g\n", delta_x, delta_y);
}

void qw_init(void) {
  for (int i = 0; i < QW_KEY_MAP_SIZE; i++) qw_key_map[i] = i;
}

void qw_cleanup(void) { }

void qw_size(int x, int y, int width, int height) {
  glViewport(x, y, width, height);
}

int qw_frame(int64_t time_elapsed) {
  glClearColor(.45f, .42f, .48f, 1.f);
  glClearDepth(1.0);
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

  return QW_CONTINUE;
}
