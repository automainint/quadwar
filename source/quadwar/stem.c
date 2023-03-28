#include "stem.h"

#include "graphics.h"
#include <kit/allocator.h>
#include <kit/mersenne_twister_64.h>
#include <stdio.h>

static vec_t const sense_motion       = .004f;
static vec_t const sense_wheel        = .13f;
static vec_t const sense_movement     = .007f;
static vec_t const sense_acceleration = 5.f;

static vec_t time = 0.f;

static vec3_t back_color = { { 0.f, 0.f, 0.f } };
static vec3_t color      = { { 1.f, 1.f, 1.f } };

static int8_t is_down[QW_KEY_MAP_SIZE];

static vec3_t const world_up             = { { 0.f, 0.f, 1.f } };
static vec_t        camera_normal_factor = .005f;

static int camera_mode          = 0;
static int camera_normalization = 1;

static scene_t scene;
static mesh_t  world;

enum { MAP_SIZE_X = 20, MAP_SIZE_Y = 20 };

#define MAP_SCALE_Z 0.005f
#define MAP_CELL_SIZE 2.f

#define OFFSET(x) ((void *) (sizeof(vec_t) * (x)))

void qw_down(int const key) {
  is_down[key] = 1;

  switch (key) {
    case QW_KEY_RETURN:
      printf("Rebuild shaders\n");
      graphics_rebuild_shaders();
      break;

    case QW_KEY_V:
      scene.camera = camera_normal_local(scene.camera, world_up, 1.f);
      break;

    case QW_KEY_1: camera_mode = 0; break;
    case QW_KEY_2: camera_mode = 1; break;
    case QW_KEY_3: camera_mode = 2; break;
    case QW_KEY_N: camera_normalization ^= 1; break;

    default:;
  }
}

void qw_up(int const key) {
  is_down[key] = 0;
}

void qw_motion(int const x, int const y, int const delta_x,
               int const delta_y) {
  if (is_down[QW_KEY_BUTTON_LEFT]) {
    switch (camera_mode) {
      case 0:
        /*  Rotation relative to camera up axis.
         */

        scene.camera = camera_rotate_local(
            scene.camera,
            quat_mul(
                quat_rotation(-delta_x * sense_motion, camera_up),
                quat_rotation(-delta_y * sense_motion,
                              camera_right)));
        break;

      case 1:
        /*  Rotation relative to camera up axis with normalization to
         *  world up axis.
         */

        scene.camera = camera_normal(
            camera_rotate_local(
                scene.camera,
                quat_mul(
                    quat_rotation(-delta_x * sense_motion, camera_up),
                    quat_rotation(-delta_y * sense_motion,
                                  camera_right))),
            world_up, 1.f);
        break;

      case 2:
        /*  Rotation relative to world up axis, aka Euler angles.
         */

        if (delta_x != 0)
          scene.camera = camera_rotate(
              scene.camera,
              quat_rotation(-delta_x * sense_motion, world_up));
        if (delta_y != 0)
          scene.camera = camera_rotate_local(
              scene.camera,
              quat_rotation(-delta_y * sense_motion, camera_right));
        break;

      default:;
    }
  }

  if (is_down[QW_KEY_BUTTON_RIGHT])
    scene.camera = camera_move_local(
        scene.camera,
        vec3_add(vec3_mul(camera_right, delta_x * sense_motion),
                 vec3_mul(camera_up, -delta_y * sense_motion)));
}

void qw_wheel(float const delta_x, float const delta_y) {
  scene.camera = camera_move_local(
      scene.camera, vec3_mul(camera_forward, -delta_y * sense_wheel));
}

void qw_init(void) {
  printf("qw init\n");
  fflush(stdout);

  (void) sense_motion;
  (void) sense_wheel;
  (void) sense_movement;

  for (int i = 0; i < QW_KEY_MAP_SIZE; i++) qw_key_map[i] = i;

  back_color = lch_to_rgb(vec3(45.f, 7.f, .75f));

  mt64_state_t mt64;
  mt64_init(&mt64, 31415);
  mt64_rotate(&mt64);

  mesh_init(&world, kit_alloc_default());
  DA_RESIZE(world.data.vertices, MAP_SIZE_X * MAP_SIZE_Y * 6);
  if (world.data.vertices.size != MAP_SIZE_X * MAP_SIZE_Y * 6) {
    printf("Bad alloc.\n");
    return;
  }

  vertex_t *const v = world.data.vertices.values;

  vec_t const x0 = -MAP_SIZE_X * .5f;
  vec_t const y0 = -MAP_SIZE_Y * .5f;

#define N_(x, y) (((y) *MAP_SIZE_X + (x)) * 6)

  for (ptrdiff_t j = 0; j < MAP_SIZE_Y; j++)
    for (ptrdiff_t i = 0; i < MAP_SIZE_X; i++) {
      ptrdiff_t const n = N_(i, j);

      v[n].position     = vec3(x0 + i, y0 + j, 0.f);
      v[n + 1].position = vec3(x0 + i + 1, y0 + j, 0.f);
      v[n + 2].position = vec3(x0 + i + 1, y0 + j + 1, 0.f);
      v[n + 3].position = vec3(x0 + i, y0 + j, 0.f);
      v[n + 4].position = vec3(x0 + i + 1, y0 + j + 1, 0.f);
      v[n + 5].position = vec3(x0 + i, y0 + j + 1, 0.f);

      for (ptrdiff_t k = 0; k < 6; k++) {
        v[n + k].position.v[0] *= MAP_CELL_SIZE;
        v[n + k].position.v[1] *= MAP_CELL_SIZE;
      }

      uint64_t const z0 = mt64_generate(&mt64) % 1000;
      uint64_t const z1 = mt64_generate(&mt64) % 1000;
      uint64_t const z2 = mt64_generate(&mt64) % 1000;
      uint64_t const z3 = mt64_generate(&mt64) % 1000;

      vec_t const h0 = -3.f + MAP_SCALE_Z * z0;
      vec_t const h1 = -3.f + MAP_SCALE_Z * z1;
      vec_t const h2 = -3.f + MAP_SCALE_Z * z2;
      vec_t const h3 = -3.f + MAP_SCALE_Z * z3;

      ptrdiff_t ni, nj;
      if (i > 0)
        ni = N_(i - 1, j);
      if (j > 0)
        nj = N_(i, j - 1);

      if (j > 0) {
        v[n].position.v[2]     = v[nj + 5].position.v[2];
        v[n + 3].position.v[2] = v[nj + 5].position.v[2];
        v[n + 1].position.v[2] = v[nj + 2].position.v[2];
      } else {
        if (i > 0) {
          v[n].position.v[2]     = v[ni + 1].position.v[2];
          v[n + 3].position.v[2] = v[ni + 1].position.v[2];
        } else {
          v[n].position.v[2]     = h0;
          v[n + 3].position.v[2] = h0;
        }
        v[n + 1].position.v[2] = h1;
      }

      if (i > 0)
        v[n + 5].position.v[2] = v[ni + 2].position.v[2];
      else
        v[n + 5].position.v[2] = h2;

      v[n + 2].position.v[2] = h3;
      v[n + 4].position.v[2] = h3;
    }

#undef N_

  for (ptrdiff_t i = 0; i < world.data.vertices.size; i++)
    v[i].normal = vec3(0.f, 0.f, 1.f);

  scene.camera         = camera_look_at(vec3(-17.f, -14.f, 5.f),
                                        vec3(0.f, 0.f, 2.f));
  scene.light_position = vec3(10.f, 15.f, 25.f);
}

void qw_cleanup(void) {
  graphics_cleanup();
}

void qw_size(int const width, int const height) {
  graphics_viewport(width, height);
}

int qw_frame(int64_t const time_elapsed, ptrdiff_t const fps) {
  vec_t const movement_factor = is_down[QW_KEY_LSHIFT] ||
                                        is_down[QW_KEY_R]
                                    ? sense_movement *
                                          sense_acceleration
                                    : sense_movement;

  if (is_down[QW_KEY_A])
    scene.camera = camera_move_local(
        scene.camera,
        vec3_mul(camera_right, -movement_factor * time_elapsed));
  if (is_down[QW_KEY_D])
    scene.camera = camera_move_local(
        scene.camera,
        vec3_mul(camera_right, movement_factor * time_elapsed));

  if (is_down[QW_KEY_W])
    scene.camera = camera_move_local(
        scene.camera,
        vec3_mul(camera_forward, -movement_factor * time_elapsed));
  if (is_down[QW_KEY_S])
    scene.camera = camera_move_local(
        scene.camera,
        vec3_mul(camera_forward, movement_factor * time_elapsed));

  if (camera_normalization)
    scene.camera = camera_normal_local(
        scene.camera, world_up, camera_normal_factor * time_elapsed);

  graphics_clear(back_color);

  vec_t const hue = time / 30;

  color = lch_to_rgb(
      vec3(47.f, 47.f, (2.f * M_PI) * (hue - floorf(hue))));

  world.color = color;
  mesh_render(&world, &scene);

  time += ((vec_t) time_elapsed) / 1000.f;

  return QW_CONTINUE;
}
