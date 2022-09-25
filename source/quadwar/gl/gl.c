#include "gl.h"

#include "funcs.inl.h"

#define LOAD_(func, name)                                       \
  ok = ok && load((void **) &func, name, get_proc_address, log, \
                  sizeof("Failed to load " name "\n") - 1,      \
                  "Failed to load " name "\n")

static int load(void **func, char const *const name,
                gl_get_proc_address_callback const get_proc_address,
                gl_log_callback const log, ptrdiff_t const error_size,
                char const *const error) {
  *func = get_proc_address(name);
  if (*func == NULL) {
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
