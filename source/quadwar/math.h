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

#define M_EPSILON .0001

#define M_COLOR_REF_X 95.047f
#define M_COLOR_REF_Y 100.0f
#define M_COLOR_REF_Z 108.883f

typedef float vec_t;

typedef struct {
  vec_t v[3];
} vec3_t;

typedef struct {
  vec_t v[4];
} vec4_t, quat_t;

typedef struct {
  vec_t v[9];
} mat3_t;

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

static mat3_t mat3(                                    //
    vec_t const _00, vec_t const _01, vec_t const _02, //
    vec_t const _10, vec_t const _11, vec_t const _12, //
    vec_t const _20, vec_t const _21, vec_t const _22) {
  mat3_t const m = { {
      _00, _01, _02, //
      _10, _11, _12, //
      _20, _21, _22  //
  } };
  return m;
}

static mat4_t mat4(vec_t const _00, vec_t const _01, vec_t const _02,
                   vec_t const _03, vec_t const _10, vec_t const _11,
                   vec_t const _12, vec_t const _13, vec_t const _20,
                   vec_t const _21, vec_t const _22, vec_t const _23,
                   vec_t const _30, vec_t const _31, vec_t const _32,
                   vec_t const _33) {
  mat4_t const m = { {
      _00, _01, _02, _03, //
      _10, _11, _12, _13, //
      _20, _21, _22, _23, //
      _30, _31, _32, _33  //
  } };
  return m;
}

static mat3_t vec3_to_mat3(vec3_t const a, vec3_t const b,
                           vec3_t const c) {
  return mat3(a.v[0], a.v[1], a.v[2], //
              b.v[0], b.v[1], b.v[2], //
              c.v[0], c.v[1], c.v[2]);
}

static mat4_t vec4_to_mat4(vec4_t const a, vec4_t const b,
                           vec4_t const c, vec4_t const d) {
  return mat4(a.v[0], a.v[1], a.v[2], a.v[3], //
              b.v[0], b.v[1], b.v[2], b.v[3], //
              c.v[0], c.v[1], c.v[2], c.v[3], //
              d.v[0], d.v[1], d.v[2], d.v[3]);
}

static mat4_t mat3_to_mat4(mat3_t const a) {
  return mat4(a.v[0], a.v[1], a.v[2], 0.f, //
              a.v[3], a.v[4], a.v[5], 0.f, //
              a.v[6], a.v[7], a.v[8], 0.f, //
              0.f, 0.f, 0.f, 1.f);
}

static mat3_t mat4_to_mat3(mat4_t const a) {
  return mat3(a.v[0], a.v[1], a.v[2], //
              a.v[4], a.v[5], a.v[6], //
              a.v[8], a.v[9], a.v[10]);
}

static quat_t quat(vec_t const x, vec_t const y, vec_t const z,
                   vec_t const w) {
  return vec4(x, y, z, w);
}

static quat_t vec3_to_quat(vec3_t const v, vec_t const w) {
  return quat(v.v[0], v.v[1], v.v[2], w);
}

static vec3_t vec4_to_vec3(vec4_t const a) {
  return vec3(a.v[0], a.v[1], a.v[2]);
}

static vec3_t quat_to_vec3(quat_t const a) {
  return vec4_to_vec3(a);
}

static vec_t vec_abs(vec_t const x) {
  return fabs(x);
}

static vec_t vec_min(vec_t const x, vec_t const y) {
  return fmin(x, y);
}

static vec_t vec_max(vec_t const x, vec_t const y) {
  return fmax(x, y);
}

static vec_t vec_clamp(vec_t const x, vec_t const x0,
                       vec_t const x1) {
  return fmax(x0, fmin(x, x1));
}

static vec3_t vec3_clamp(vec3_t const x, vec3_t const x0,
                         vec3_t const x1) {
  return vec3(vec_clamp(x.v[0], x0.v[0], x1.v[0]),
              vec_clamp(x.v[1], x0.v[1], x1.v[1]),
              vec_clamp(x.v[2], x0.v[2], x1.v[2]));
}

static vec_t vec_sqrt(vec_t const x) {
  return sqrtf(x);
}

static vec_t vec_pow(vec_t const x, vec_t const y) {
  return powf(x, y);
}

static vec_t vec_sin(vec_t const x) {
  return sinf(x);
}

static vec_t vec_cos(vec_t const x) {
  return cosf(x);
}

static vec_t vec_asin(vec_t const x) {
  return asinf(x);
}

static vec_t vec_acos(vec_t const x) {
  return acosf(x);
}

static vec_t vec_atan(vec_t const x) {
  return atanf(x);
}

static vec_t vec_atan2(vec_t const y, vec_t const x) {
  return atan2f(y, x);
}

static vec3_t vec3_neg(vec3_t const a) {
  return vec3(-a.v[0], -a.v[1], -a.v[2]);
}

static vec3_t vec3_add(vec3_t const a, vec3_t const b) {
  return vec3(a.v[0] + b.v[0], a.v[1] + b.v[1], a.v[2] + b.v[2]);
}

static vec3_t vec3_add3(vec3_t const a, vec3_t const b,
                        vec3_t const c) {
  return vec3(a.v[0] + b.v[0] + c.v[0], a.v[1] + b.v[1] + c.v[1],
              a.v[2] + b.v[2] + c.v[2]);
}

static vec3_t vec3_sub(vec3_t const a, vec3_t const b) {
  return vec3(a.v[0] - b.v[0], a.v[1] - b.v[1], a.v[2] - b.v[2]);
}

static vec3_t vec3_mul(vec3_t const v, vec_t const x) {
  return vec3(v.v[0] * x, v.v[1] * x, v.v[2] * x);
}

static vec_t vec3_dot(vec3_t const a, vec3_t const b) {
  return a.v[0] * b.v[0] + a.v[1] * b.v[1] + a.v[2] * b.v[2];
}

static vec3_t vec3_cross(vec3_t const a, vec3_t const b) {
  return vec3(a.v[1] * b.v[2] - a.v[2] * b.v[1], //
              a.v[2] * b.v[0] - a.v[0] * b.v[2], //
              a.v[0] * b.v[1] - a.v[1] * b.v[0]);
}

static vec3_t vec3_normal(vec3_t const v) {
  vec_t const x = v.v[0];
  vec_t const y = v.v[1];
  vec_t const z = v.v[2];

  vec_t const length_squared = x * x + y * y + z * z;
  assert(length_squared >= M_EPSILON);

  if (length_squared < M_EPSILON) {
    vec3_t const n = { { 0.f, 0.f, 1.f } };
    return n;
  }

  vec_t const  length = vec_sqrt(length_squared);
  vec3_t const n      = { { x / length, y / length, z / length } };

  return n;
}

static vec4_t vec4_normal(vec4_t const v) {
  vec_t const x = v.v[0];
  vec_t const y = v.v[1];
  vec_t const z = v.v[2];
  vec_t const w = v.v[3];

  vec_t const length_squared = x * x + y * y + z * z + w * w;
  assert(length_squared >= M_EPSILON);

  if (length_squared < M_EPSILON) {
    vec4_t const n = { { 0.f, 0.f, 0.f, 1.f } };
    return n;
  }

  vec_t const  length = vec_sqrt(length_squared);
  vec4_t const n      = { { x / length, y / length, z / length,
                       w / length } };

  return n;
}

static quat_t quat_conjugate(quat_t const q) {
  return quat(-q.v[0], -q.v[1], -q.v[2], q.v[3]);
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
  vec_t const s = vec_sin(angle / 2.f);
  vec_t const c = vec_cos(angle / 2.f);

  vec_t const x = axis.v[0];
  vec_t const y = axis.v[1];
  vec_t const z = axis.v[2];

  quat_t const q = { { x * s, y * s, z * s, c } };

  return q;
}

static mat3_t mat3_transpose(mat3_t const m) {
  return mat3(m.v[0], m.v[3], m.v[6], //
              m.v[1], m.v[4], m.v[7], //
              m.v[2], m.v[5], m.v[8]);
}

static mat4_t mat4_transpose(mat4_t const m) {
  return mat4(m.v[0], m.v[4], m.v[8], m.v[12],  //
              m.v[1], m.v[5], m.v[9], m.v[13],  //
              m.v[2], m.v[6], m.v[10], m.v[14], //
              m.v[3], m.v[7], m.v[11], m.v[15]);
}

static mat3_t mat3_look_at(vec3_t const direction, vec3_t const up) {
  vec3_t const f = vec3_normal(vec3_neg(direction));
  vec3_t const s = vec3_normal(vec3_cross(f, up));
  vec3_t const u = vec3_cross(s, f);

  return mat3(s.v[0], u.v[0], f.v[0], //
              s.v[1], u.v[1], f.v[1], //
              s.v[2], u.v[2], f.v[2]);
}

static vec3_t vec3_rotate(vec3_t const v, quat_t const rotation) {
  vec3_t const u = vec3(rotation.v[0], rotation.v[1], rotation.v[2]);
  vec_t const  s = rotation.v[3];

  return vec3_add3(vec3_mul(u, 2.f * vec3_dot(u, v)),
                   vec3_mul(v, s * s - vec3_dot(u, u)),
                   vec3_mul(vec3_cross(u, v), 2.f * s));
}

static mat3_t quat_to_mat3(quat_t const q) {
  vec_t const xx = q.v[0] * q.v[0];
  vec_t const yy = q.v[1] * q.v[1];
  vec_t const zz = q.v[2] * q.v[2];
  vec_t const xz = q.v[0] * q.v[2];
  vec_t const xy = q.v[0] * q.v[1];
  vec_t const yz = q.v[1] * q.v[2];
  vec_t const wx = q.v[3] * q.v[0];
  vec_t const wy = q.v[3] * q.v[1];
  vec_t const wz = q.v[3] * q.v[2];

  return mat3(1.f - 2.f * (yy + zz), //
              2.f * (xy + wz),       //
              2.f * (xz - wy),       //
              2.f * (xy - wz),       //
              1.f - 2.f * (xx + zz), //
              2.f * (yz + wx),       //
              2.f * (xz + wy),       //
              2.f * (yz - wx),       //
              1.f - 2.f * (xx + yy));
}

static quat_t mat3_to_quat(mat3_t m) {
  vec_t a = m.v[0] - m.v[4] - m.v[8];
  vec_t b = m.v[4] - m.v[0] - m.v[8];
  vec_t c = m.v[8] - m.v[0] - m.v[4];
  vec_t d = m.v[0] + m.v[4] + m.v[8];

  int   n = 0;
  vec_t h = d;
  if (a > h) {
    h = a;
    n = 1;
  }
  if (b > h) {
    h = b;
    n = 2;
  }
  if (c > h) {
    h = c;
    n = 3;
  }

  vec_t s = vec_sqrt(h + 1.f) * .5f;
  vec_t k = .25f / s;

  switch (n) {
    case 0:
      return quat((m.v[5] - m.v[7]) * k, //
                  (m.v[6] - m.v[2]) * k, //
                  (m.v[1] - m.v[3]) * k, //
                  s);
    case 1:
      return quat(s,                     //
                  (m.v[1] + m.v[3]) * k, //
                  (m.v[6] + m.v[2]) * k, //
                  (m.v[5] - m.v[7]) * k);
    case 2:
      return quat((m.v[1] + m.v[3]) * k, //
                  s,                     //
                  (m.v[5] + m.v[7]) * k, //
                  (m.v[6] - m.v[2]) * k);
    case 3:
      return quat((m.v[6] + m.v[2]) * k, //
                  (m.v[5] + m.v[7]) * k, //
                  s,                     //
                  (m.v[1] - m.v[3]) * k);
    default:;
  }

  assert(0);
  return quat(0.f, 0.f, 0.f, 1.f);
}

static quat_t quat_look_at(vec3_t const direction, vec3_t const up) {
  vec3_t const z     = vec3_normal(vec3_neg(direction));
  vec3_t const right = vec3_cross(up, z);
  vec3_t const x     = vec3_mul(
          right,
          1.f / vec_sqrt(vec_max(M_EPSILON, vec3_dot(right, right))));
  vec3_t const y = vec3_cross(z, x);

  return mat3_to_quat(vec3_to_mat3(x, y, z));
}

static mat3_t mat3_mul(mat3_t const left, mat3_t const right) {
  mat3_t m;
  memset(&m, 0, sizeof m);

  for (int j = 0; j < 3; j++)
    for (int i = 0; i < 3; i++)
      for (int k = 0; k < 3; k++)
        m.v[j * 3 + i] += left.v[k * 3 + i] * right.v[j * 3 + k];

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
    red = vec_pow(((red + 0.055f) / 1.055f), 2.4f);
  else
    red = red / 12.92f;

  if (green > 0.04045f)
    green = vec_pow(((green + 0.055f) / 1.055f), 2.4f);
  else
    green = green / 12.92f;

  if (blue > 0.04045f)
    blue = vec_pow(((blue + 0.055f) / 1.055f), 2.4f);
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
  vec_t x = (xyz.v[0] / M_COLOR_REF_X);
  vec_t y = (xyz.v[1] / M_COLOR_REF_Y);
  vec_t z = (xyz.v[2] / M_COLOR_REF_Z);

  if (x > 0.008856f)
    x = vec_pow(x, (1.f / 3.f));
  else
    x = (7.787f * x) + (16.f / 116.f);

  if (y > 0.008856f)
    y = vec_pow(y, (1.f / 3.f));
  else
    y = (7.787f * y) + (16.f / 116.f);

  if (z > 0.008856f)
    z = vec_pow(z, (1.f / 3.f));
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

  if (vec_pow(y, 3.f) > 0.008856)
    y = vec_pow(y, 3.f);
  else
    y = (y - (16.f / 116.f)) / 7.787f;

  if (vec_pow(x, 3.f) > 0.008856f)
    x = vec_pow(x, 3.f);
  else
    x = (x - (16.f / 116.f)) / 7.787f;

  if (vec_pow(z, 3.f) > 0.008856f)
    z = vec_pow(z, 3.f);
  else
    z = (z - (16.f / 116.f)) / 7.787f;

  return vec3(M_COLOR_REF_X * x, M_COLOR_REF_Y * y,
              M_COLOR_REF_Z * z);
}

static vec3_t xyz_to_rgb(vec3_t const xyz) {
  vec_t const x = xyz.v[0] / 100.f;
  vec_t const y = xyz.v[1] / 100.f;
  vec_t const z = xyz.v[2] / 100.f;

  vec_t red   = x * 3.2406f + (y * -1.5372f) + z * (-0.4986f);
  vec_t green = x * (-0.9689f) + y * 1.8758f + z * 0.0415f;
  vec_t blue  = x * 0.0557f + y * (-0.2040f) + z * 1.0570f;

  if (red > 0.0031308f)
    red = 1.055f * vec_pow(red, (1.0f / 2.4)) - 0.055f;
  else
    red = 12.92f * red;

  if (green > 0.0031308f)
    green = 1.055f * vec_pow(green, (1.0f / 2.4)) - 0.055f;
  else
    green = 12.92f * green;

  if (blue > 0.0031308f)
    blue = 1.055f * vec_pow(blue, (1.0f / 2.4)) - 0.055f;
  else
    blue = 12.92f * blue;

  return vec3_clamp(vec3(red, green, blue), vec3(0.f, 0.f, 0.f),
                    vec3(1.f, 1.f, 1.f));
}

static vec3_t lab_to_lch(vec3_t const lab) {
  vec_t const lightness = lab.v[0];
  vec_t const a         = lab.v[1];
  vec_t const b         = lab.v[2];

  vec_t const chroma = sqrtf(a * a + b * b);
  vec_t const hue    = a == 0.f ? 0.f : vec_atan(b / a);

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
