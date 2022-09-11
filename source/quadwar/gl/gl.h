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

typedef void (*gl_log_callback)(char const *);

int gl_load(gl_log_callback log);

#ifdef __cplusplus
}
#endif

#endif
