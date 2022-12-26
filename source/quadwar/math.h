#ifndef QUADWAR_MATH_H
#define QUADWAR_MATH_H

#define _USE_MATH_DEFINES
#include <math.h>

#include <assert.h>
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef M_PI
#  define M_PI 3.14159265359
#endif

#define QW_EPSILON .001f

#define QW_REF_X 95.047f
#define QW_REF_Y 100.0f
#define QW_REF_Z 108.883f

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
  assert(length_squared >= QW_EPSILON);

  if (length_squared < QW_EPSILON) {
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
  assert(length_squared >= QW_EPSILON);

  if (length_squared < QW_EPSILON) {
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

static vec3_t rgb_to_xyz(vec3_t const rgb) {
  vec_t red   = rgb.v[0];
  vec_t green = rgb.v[1];
  vec_t blue  = rgb.v[2];

  if (red > 0.04045f)
    red = powf(((red + 0.055f) / 1.055f), 2.4f);
  else
    red = red / 12.92f;

  if (green > 0.04045)
    green = powf(((green + 0.055f) / 1.055f), 2.4f);
  else
    green = green / 12.92f;

  if (blue > 0.04045f)
    blue = powf(((blue + 0.055f) / 1.055f), 2.4f);
  else
    blue = blue / 12.92f;

  red   = red * 100.f;
  green = green * 100.f;
  blue  = blue * 100.f;

  return vec3(red * 0.4124f + green * 0.3576f + blue * 0.1805f,
              red * 0.2126f + green * 0.7152f + blue * 0.0722f,
              red * 0.0193f + green * 0.1192f + blue * 0.9505f);
}

static vec3_t xyz_to_lab(vec3_t const xyz) {
  vec_t x = (xyz.v[0] / QW_REF_X);
  vec_t y = (xyz.v[1] / QW_REF_Y);
  vec_t z = (xyz.v[2] / QW_REF_Z);

  if (x > 0.008856f)
    x = powf(x, (1.f / 3.f));
  else
    x = (7.787f * x) + (16.f / 116.f);

  if (y > 0.008856f)
    y = powf(y, (1.f / 3.f));
  else
    y = (7.787f * y) + (16.f / 116.f);

  if (z > 0.008856f)
    z = powf(z, (1.f / 3.f));
  else
    z = (7.787f * z) + (16.f / 116.f);

  vec_t const lightness = (116.f * y) - 16.f;
  vec_t const a         = 500.f * (x - y);
  vec_t const b         = 200.f * (y - z);

  return vec3(lightness, a, b);
}

static vec3_t lab_to_xyz(vec3_t const lab) {
  vec_t const lightness = lab.v[0];
  vec_t const a         = lab.v[1];
  vec_t const b         = lab.v[2];

  vec_t y = (lightness + 16.f) / 116.f;
  vec_t x = (a / 500.f) + y;
  vec_t z = y - (b / 200.f);

  if (powf(y, 3.f) > 0.008856)
    y = powf(y, 3.f);
  else
    y = (y - (16.f / 116.f)) / 7.787f;

  if (powf(x, 3.f) > 0.008856f)
    x = powf(x, 3.f);
  else
    x = (x - (16.f / 116.f)) / 7.787f;

  if (powf(z, 3.f) > 0.008856f)
    z = powf(z, 3.f);
  else
    z = (z - (16.f / 116.f)) / 7.787f;

  return vec3(QW_REF_X * x, QW_REF_Y * y, QW_REF_Z * z);
}

static vec3_t xyz_to_rgb(vec3_t const xyz) {
  vec_t const x = xyz.v[0] / 100.f;
  vec_t const y = xyz.v[1] / 100.f;
  vec_t const z = xyz.v[2] / 100.f;

  vec_t red   = x * 3.2406f + (y * -1.5372f) + z * (-0.4986f);
  vec_t green = x * (-0.9689f) + y * 1.8758f + z * 0.0415f;
  vec_t blue  = x * 0.0557f + y * (-0.2040f) + z * 1.0570f;

  if (red > 0.0031308f)
    red = 1.055f * powf(red, (1.0f / 2.4)) - 0.055f;
  else
    red = 12.92f * red;

  if (green > 0.0031308f)
    green = 1.055f * powf(green, (1.0f / 2.4)) - 0.055f;
  else
    green = 12.92f * green;

  if (blue > 0.0031308f)
    blue = 1.055f * powf(blue, (1.0f / 2.4)) - 0.055f;
  else
    blue = 12.92f * blue;

  return vec3(red, green, blue);
}

static vec3_t lab_to_lch(vec3_t const lab) {
  vec_t const lightness = lab.v[0];
  vec_t const a         = lab.v[1];
  vec_t const b         = lab.v[2];

  vec_t const chroma = sqrtf(a * a + b * b);
  vec_t const hue    = a == 0.f ? 0.f : atanf(b / a);

  return vec3(lightness, chroma, hue);
}

static vec3_t lch_to_lab(vec3_t const lch) {
  vec_t const lightness = lch.v[0];
  vec_t const chroma    = lch.v[1];
  vec_t const hue       = lch.v[2];

  vec_t const a = chroma * cos(hue);
  vec_t const b = chroma * sin(hue);

  return vec3(lightness, a, b);
}

static vec3_t rgb_to_lch(vec3_t const rgb) {
  vec3_t const xyz = rgb_to_xyz(rgb);
  vec3_t const lab = xyz_to_lab(xyz);

  return lab_to_lch(lab);
}

static vec3_t lch_to_rgb(vec3_t const lch) {
  vec3_t const lab = lch_to_lab(lch);
  vec3_t const xyz = lab_to_xyz(lab);

  return xyz_to_rgb(xyz);
}

#ifdef __GNUC__
#  pragma GCC pop_options

#  pragma GCC diagnostic pop
#endif

#ifdef __cplusplus
}
#endif

#endif
