#ifndef QUADWAR_MATH_H
#define QUADWAR_MATH_H

#define _USE_MATH_DEFINES
#include <math.h>

#include <assert.h>
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

#define EPSILON .001f

typedef float vec_t;

typedef struct {
  vec_t v[3];
} vec3_t;

typedef struct {
  vec_t v[4];
} vec4_t, quat_t;

typedef struct {
  vec_t v[16];
} mat4_t;

#ifdef __GNUC__
#  pragma GCC diagnostic push
#  pragma GCC diagnostic ignored "-Wunused-function"
#  pragma GCC diagnostic ignored "-Wunknown-pragmas"

#  pragma GCC push_options
#  pragma GCC optimize("O3")
#endif

static vec3_t vec3(vec_t const x, vec_t const y, vec_t const z) {
  vec3_t const v = { { x, y, z } };
  return v;
}

static vec4_t vec4(vec_t const x, vec_t const y, vec_t const z,
                   vec_t const w) {
  vec4_t const v = { { x, y, z, w } };
  return v;
}

static quat_t quat(vec_t const x, vec_t const y, vec_t const z,
                   vec_t const w) {
  return vec4(x, y, z, w);
}

static vec3_t vec3_normal(vec3_t const v) {
  vec_t const x = v.v[0];
  vec_t const y = v.v[1];
  vec_t const z = v.v[2];

  vec_t const length_squared = x * x + y * y + z * z;
  assert(length_squared >= EPSILON);

  if (length_squared < EPSILON) {
    vec3_t const n = { { 0.f, 0.f, 1.f } };
    return n;
  }

  vec_t const  length = sqrtf(length_squared);
  vec3_t const n      = { { x / length, y / length, z / length } };

  return n;
}

static vec4_t vec4_normal(vec4_t const v) {
  vec_t const x = v.v[0];
  vec_t const y = v.v[1];
  vec_t const z = v.v[2];
  vec_t const w = v.v[3];

  vec_t const length_squared = x * x + y * y + z * z + w * w;
  assert(length_squared >= EPSILON);

  if (length_squared < EPSILON) {
    vec4_t const n = { { 0.f, 0.f, 0.f, 1.f } };
    return n;
  }

  vec_t const  length = sqrtf(length_squared);
  vec4_t const n      = { { x / length, y / length, z / length,
                            w / length } };

  return n;
}

static quat_t quat_normal(quat_t const q) {
  return vec4_normal(q);
}

static quat_t quat_mul(quat_t const left, quat_t const right) {
  vec_t const i0 = left.v[0];
  vec_t const j0 = left.v[1];
  vec_t const k0 = left.v[2];
  vec_t const r0 = left.v[3];

  vec_t const i1 = right.v[0];
  vec_t const j1 = right.v[1];
  vec_t const k1 = right.v[2];
  vec_t const r1 = right.v[3];

  quat_t const q = { { r0 * i1 + i0 * r1 + j0 * k1 - k0 * j1, //
                       r0 * j1 - i0 * k1 + j0 * r1 + k0 * i1, //
                       r0 * k1 + i0 * j1 - j0 * i1 + k0 * r1, //
                       r0 * r1 - i0 * i1 - j0 * j1 - k0 * k1 } };

  return q;
}

static quat_t quat_rotation(vec_t const angle, vec3_t const axis) {
  vec_t const s = sinf(angle / 2.f);
  vec_t const c = cosf(angle / 2.f);

  vec_t const x = axis.v[0];
  vec_t const y = axis.v[1];
  vec_t const z = axis.v[2];

  quat_t const q = { { x * s, y * s, z * s, c } };

  return q;
}

static mat4_t quat_to_mat4(quat_t const q) {
  vec_t const i = q.v[0];
  vec_t const j = q.v[1];
  vec_t const k = q.v[2];
  vec_t const r = q.v[3];

  mat4_t const m = { { 1.f - 2.f * (j * j + k * k), //
                       2.f * (i * j - k * r),       //
                       2.f * (i * k + j * r),       //
                       0.f,                         //
                       2.f * (i * j + k * r),       //
                       1.f - 2.f * (i * i + k * k), //
                       2.f * (j * k - i * r),       //
                       0.f,                         //
                       2.f * (i * k - j * r),       //
                       2.f * (j * k + i * r),       //
                       1.f - 2.f * (i * i + j * j), //
                       0.f,                         //
                       0.f,                         //
                       0.f,                         //
                       0.f,                         //
                       1.f } };

  return m;
}

static mat4_t mat4_mul(mat4_t const left, mat4_t const right) {
  mat4_t m;
  memset(&m, 0, sizeof m);

  for (int j = 0; j < 4; j++)
    for (int i = 0; i < 4; i++)
      for (int k = 0; k < 4; k++)
        m.v[j * 4 + i] += left.v[k * 4 + i] * right.v[j * 4 + k];

  return m;
}

static mat4_t mat4_move(vec3_t const offset) {
  vec_t const x = offset.v[0];
  vec_t const y = offset.v[1];
  vec_t const z = offset.v[2];

  mat4_t const m = { { 1.f, 0.f, 0.f, 0.f, //
                       0.f, 1.f, 0.f, 0.f, //
                       0.f, 0.f, 1.f, 0.f, //
                       x, y, z, 1.f } };

  return m;
}

static mat4_t mat4_scale(vec3_t const scale) {
  vec_t const x = scale.v[0];
  vec_t const y = scale.v[1];
  vec_t const z = scale.v[2];

  mat4_t const m = { { x, 0.f, 0.f, 0.f, //
                       0.f, y, 0.f, 0.f, //
                       0.f, 0.f, z, 0.f, //
                       0.f, 0.f, 0.f, 1.f } };

  return m;
}

static mat4_t mat4_frustum(vec_t const left, vec_t const right,
                           vec_t const bottom, vec_t const top,
                           vec_t const znear, vec_t const zfar) {
  vec_t const t0 = 2.f * znear;
  vec_t const t1 = right - left;
  vec_t const t2 = top - bottom;
  vec_t const t3 = zfar - znear;

  mat4_t const m = { { t0 / t1,              //
                       0.f,                  //
                       0.f,                  //
                       0.f,                  //
                       0.f,                  //
                       t0 / t2,              //
                       0.f,                  //
                       0.f,                  //
                       (right + left) / t1,  //
                       (top + bottom) / t2,  //
                       (-zfar - znear) / t3, //
                       -1.f,                 //
                       0.f,                  //
                       0.f,                  //
                       (-t0 * zfar) / t3,    //
                       0.f } };

  return m;
}

static mat4_t mat4_perspective(vec_t const fovy,
                               vec_t const aspect_ratio_,
                               vec_t const znear, vec_t const zfar) {
  vec_t const ymax = znear * tanf(fovy);
  vec_t const xmax = ymax * aspect_ratio_;

  return mat4_frustum(-xmax, xmax, -ymax, ymax, znear, zfar);
}

static vec3_t rgb_to_hsl(vec3_t const rgb) {
  vec_t const x_max     = fmaxf(fmaxf(rgb.v[0], rgb.v[1]), rgb.v[2]);
  vec_t const x_min     = fminf(fminf(rgb.v[0], rgb.v[1]), rgb.v[2]);
  const vec_t chroma    = x_max - x_min;
  vec_t const lightness = (x_max + x_min) / 2.f;

  vec_t hue        = 0.f;
  vec_t saturation = 0.f;

  if (chroma > EPSILON) {
    if (rgb.v[0] >= rgb.v[1] && rgb.v[0] >= rgb.v[2])
      hue = ((rgb.v[1] - rgb.v[2]) / chroma) / 6.f;
    else if (rgb.v[1] >= rgb.v[2])
      hue = (2.f + (rgb.v[2] - rgb.v[0]) / chroma) / 6.f;
    else
      hue = (4.f + (rgb.v[0] - rgb.v[1]) / chroma) / 6.f;
  }

  vec_t const l_opposite = 1.f - lightness;

  if (lightness > EPSILON && l_opposite > EPSILON)
    saturation = (x_max - lightness) / fminf(lightness, l_opposite);

  vec3_t const hsl = { { hue, saturation, lightness } };

  return hsl;
}

static vec_t hsl_to_rgb_helper_(vec_t const hue12,
                                vec_t const lightness,
                                vec_t const alpha, vec_t const n) {
  vec_t const k = fmodf(n + hue12, 12.f);
  return lightness -
         alpha * fmaxf(-1.f, fminf(fminf(k - 3.f, 9.f - k), 1.f));
}

static vec3_t hsl_to_rgb(vec3_t const hsl) {
  vec_t hue12     = hsl.v[0] * 12.f;
  vec_t lightness = hsl.v[2];
  vec_t alpha     = hsl.v[1] * fminf(hsl.v[2], 1.f - hsl.v[2]);

  vec3_t const rgb = {
    { hsl_to_rgb_helper_(hue12, lightness, alpha, 0),
      hsl_to_rgb_helper_(hue12, lightness, alpha, 8),
      hsl_to_rgb_helper_(hue12, lightness, alpha, 4) }
  };

  return rgb;
}

#ifdef __GNUC__
#  pragma GCC pop_options

#  pragma GCC diagnostic pop
#endif

#ifdef __cplusplus
}
#endif

#endif
