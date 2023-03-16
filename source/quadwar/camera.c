#include "camera.h"

camera_t camera_look_at(vec3_t const eye, vec3_t const target) {
  camera_t result;
  memset(&result, 0, sizeof result);

  result.position = eye;
  result.rotation = quat_normal(quat_conjugate(
      quat_look_at(vec3_sub(target, eye), qw_camera_up)));

  return result;
}

camera_t camera_move(camera_t const camera, vec3_t const offset) {
  camera_t result;
  memset(&result, 0, sizeof result);

  result.position = vec3_add(camera.position, offset);
  result.rotation = camera.rotation;

  return result;
}

camera_t camera_rotate_local(camera_t const camera,
                             quat_t const   rotation) {
  camera_t result;
  memset(&result, 0, sizeof result);

  result.position = camera.position;
  result.rotation = quat_normal(quat_mul(camera.rotation, rotation));

  /*  FIXME
   *  Normalize rolling.
   */

  return result;
}

camera_t camera_rotate(camera_t const camera, quat_t const rotation) {
  camera_t result;
  memset(&result, 0, sizeof result);

  result.position = camera.position;
  result.rotation = quat_normal(quat_mul(rotation, camera.rotation));

  /*  FIXME
   *  Normalize rolling.
   */

  return result;
}

mat4_t camera_to_mat4(camera_t const camera) {
  return mat4_mul(quat_to_mat4(camera.rotation),
                  mat4_move(camera.position));
}
