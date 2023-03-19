#include "camera.h"

camera_t camera_look_at(vec3_t const eye, vec3_t const target) {
  camera_t result;
  memset(&result, 0, sizeof result);

  result.position = eye;
  result.rotation = quat_look_at(vec3_sub(target, eye),
                                 vec3(0.f, 0.f, 1.f));

  return result;
}

camera_t camera_move(camera_t const camera, vec3_t const offset) {
  camera_t result;
  memset(&result, 0, sizeof result);

  result.position = vec3_add(camera.position, offset);
  result.rotation = camera.rotation;

  return result;
}

camera_t camera_move_local(camera_t const camera,
                           vec3_t const   offset) {
  camera_t result;
  memset(&result, 0, sizeof result);

  result.position = vec3_add(camera.position,
                             vec3_rotate(offset, camera.rotation));
  result.rotation = camera.rotation;

  return result;
}

camera_t camera_rotate_local(camera_t const camera,
                             quat_t const   rotation) {
  camera_t result;
  memset(&result, 0, sizeof result);

  result.position = camera.position;
  result.rotation = quat_normal(quat_mul(camera.rotation, rotation));

  return result;
}

camera_t camera_rotate(camera_t const camera, quat_t const rotation) {
  camera_t result;
  memset(&result, 0, sizeof result);

  result.position = camera.position;
  result.rotation = quat_normal(quat_mul(rotation, camera.rotation));

  return result;
}

camera_t camera_normal(camera_t const camera, vec3_t const up,
                       vec_t const factor) {
  vec3_t const right_local = vec3_normal(
      vec3_rotate(camera_right, camera.rotation));
  vec3_t const forward = vec3_cross(up, right_local);
  vec_t const  angle   = vec_asin(vec3_dot(up, right_local));

  return camera_rotate(
      camera,
      quat_rotation(angle * vec_clamp(factor, 0.f, 1.f), forward));
}

camera_t camera_normal_local(camera_t const camera, vec3_t const up,
                             vec_t const factor) {
  vec3_t const right_local = vec3_normal(
      vec3_rotate(camera_right, camera.rotation));
  vec_t const angle = vec_asin(vec3_dot(up, right_local));

  return camera_rotate_local(
      camera, quat_rotation(-angle * vec_clamp(factor, 0.f, 1.f),
                            camera_forward));
}

mat4_t camera_to_mat4(camera_t const camera) {
  return mat4_mul(
      mat3_to_mat4(quat_to_mat3(quat_conjugate(camera.rotation))),
      mat4_move(vec3_neg(camera.position)));
}
