struct _cl_context;
struct _cl_event;

#include "funcs.inl.h"

#include <SDL_video.h>

#define FEATURE_GL_VERSION_1_0
#define FEATURE_GL_VERSION_1_1
#define FEATURE_GL_VERSION_1_2
#define FEATURE_GL_VERSION_1_3
#define FEATURE_GL_VERSION_1_4
#define FEATURE_GL_VERSION_1_5
#define FEATURE_GL_VERSION_2_0
#define FEATURE_GL_VERSION_2_1
#define FEATURE_GL_VERSION_3_0
#define FEATURE_GL_VERSION_3_1
#define FEATURE_GL_VERSION_3_2
#define FEATURE_GL_VERSION_3_3
#define FEATURE_GL_VERSION_4_0
#define FEATURE_GL_VERSION_4_1
#define FEATURE_GL_VERSION_4_2
#define FEATURE_GL_VERSION_4_3
#define FEATURE_GL_VERSION_4_4
#define FEATURE_GL_VERSION_4_5
#define FEATURE_GL_VERSION_4_6

#define LOAD_(func, name) \
  ((*(void **) &func = SDL_GL_GetProcAddress(name)) != NULL)

#define HAS_EXTENSION_(name) 0
#define SAVE_EXTENSION_(name, status) (void) 0

int gl_load(void) {
  int ok = 1;

#include "loads.inl.h"

  return ok;
}
