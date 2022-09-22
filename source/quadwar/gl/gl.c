#include "gl.h"

#include "funcs.inl.h"

#define FEATURE_GL_VERSION_1_0
#define FEATURE_GL_VERSION_1_1
#define FEATURE_GL_VERSION_1_2
#define FEATURE_GL_VERSION_1_3
#define FEATURE_GL_VERSION_1_4
#define FEATURE_GL_VERSION_1_5

#define FEATURE_GL_ES_VERSION_2_0
#define FEATURE_GL_ES_VERSION_3_0

/*
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

#define FEATURE_GL_ES_VERSION_3_1
#define FEATURE_GL_ES_VERSION_3_2
 */

#define LOAD_(func, name)                            \
  load((void **) &func, name, get_proc_address, log, \
       sizeof("Failed to load " name "\n") - 1,      \
       "Failed to load " name "\n")

#define HAS_EXTENSION_(name) 0
#define SAVE_EXTENSION_(name, status) (void) 0

static int load(void **func, char const *const name,
                gl_get_proc_address_callback const get_proc_address,
                gl_log_callback const log, ptrdiff_t const error_size,
                char const *const error) {
  *func = get_proc_address(name);
  if (func == NULL) {
    str_t const s = { .size = error_size, .values = error };
    log(s);
    return 0;
  }
  return 1;
}

int qw_gl_load(gl_get_proc_address_callback get_proc_address,
               gl_log_callback              log) {
  int ok = 1;

#include "loads.inl.h"

  return ok ? QW_OK : QW_ERROR;
}
