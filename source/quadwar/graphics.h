#ifndef QUADWAR_GRAPHICS_H
#define QUADWAR_GRAPHICS_H

#include "camera.h"
#include "options.h"
#include <kit/dynamic_array.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
  vec3_t position;
  vec3_t normal;
} vertex_t;

typedef KIT_DA(vertex_t) vertex_array_t;

typedef struct {
  vertex_array_t vertices;
} mesh_data_t;

typedef struct {
  mesh_data_t data;
  ptrdiff_t   id;
  vec3_t      color;
} mesh_t;

typedef struct {
  camera_t camera;
  vec3_t   light_position;
} scene_t;

void graphics_rebuild_shaders(void);
void graphics_reset_mesh_data(void);
void graphics_viewport(int width, int height);
void graphics_clear(vec3_t color);
void graphics_cleanup(void);

void mesh_init(mesh_t *mesh, kit_allocator_t alloc);
void mesh_destroy(mesh_t *mesh);
void mesh_render(mesh_t *mesh, scene_t *scene);

void im_enter(void);
void im_render(void);
void im_clear(vec4_t color);
void im_draw_rect(ptrdiff_t x, ptrdiff_t y, ptrdiff_t width,
                  ptrdiff_t height, vec4_t color);
void im_draw_pixels(ptrdiff_t x, ptrdiff_t y, ptrdiff_t width,
                    ptrdiff_t height, vec4_t color,
                    ptrdiff_t image_width, ptrdiff_t image_height,
                    uint8_t const *image_data);

#ifdef __cplusplus
}
#endif

#endif
