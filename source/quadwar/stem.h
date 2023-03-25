#ifndef QUADWAR_STEM_H
#define QUADWAR_STEM_H

#include "input.h"
#include "options.h"

#ifdef __cplusplus
extern "C" {
#endif

void qw_down(int key);
void qw_up(int key);
void qw_motion(int x, int y, int delta_x, int delta_y);
void qw_wheel(float delta_x, float delta_y);

void qw_init(void);
void qw_cleanup(void);
void qw_size(int width, int height);
int  qw_frame(int64_t time_elapsed, ptrdiff_t fps);

#ifdef __cplusplus
}
#endif

#endif
