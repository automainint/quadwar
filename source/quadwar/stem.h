#ifndef QUADWAR_STEM_H
#define QUADWAR_STEM_H

#include "options.h"

#ifdef __cplusplus
extern "C" {
#endif

void qw_init(void);
void qw_cleanup(void);
void qw_size(int x, int y, int width, int height);
int qw_frame(int64_t time_elapsed);

#ifdef __cplusplus
}
#endif

#endif
