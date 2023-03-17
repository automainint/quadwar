#ifndef QUADWAR_CAMERA_H
#define QUADWAR_CAMERA_H

#include "math.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
  vec3_t position;
  quat_t rotation;
} camera_t;

static vec3_t const camera_forward = { { 0.f, 0.f, 1.f } };
static vec3_t const camera_right   = { { 1.f, 0.f, 0.f } };
static vec3_t const camera_up      = { { 0.f, 1.f, 0.f } };

camera_t camera_look_at(vec3_t eye, vec3_t target);

camera_t camera_move(camera_t camera, vec3_t offset);

camera_t camera_move_local(camera_t camera, vec3_t offset);

camera_t camera_rotate(camera_t camera, quat_t rotation);

camera_t camera_rotate_local(camera_t camera, quat_t rotation);

camera_t camera_normal(camera_t camera, vec3_t up, vec_t factor);

camera_t camera_normal_local(camera_t camera, vec3_t up,
                             vec_t factor);

mat4_t camera_to_mat4(camera_t camera);

#ifdef __cplusplus
}
#endif

#endif
