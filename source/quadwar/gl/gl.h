#ifndef QUADWAR_GL_GL_H
#define QUADWAR_GL_GL_H

#include "../options.h"

#ifdef __cplusplus
extern "C" {
#endif

struct _cl_context;
struct _cl_event;

#include "decls.inl.h"
#include "enums.inl.h"

#include <kit/string_ref.h>

typedef void *(*gl_get_proc_address_callback)(char const *name);
typedef void (*gl_log_callback)(kit_str_t message);

int qw_gl_load(gl_get_proc_address_callback get_proc_address,
            gl_log_callback              log);

#ifdef __cplusplus
}
#endif

#endif
