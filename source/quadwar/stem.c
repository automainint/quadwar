#include "stem.h"
#include "gl/gl.h"

void qw_init(void) { }

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
