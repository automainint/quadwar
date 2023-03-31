#ifndef QUADWAR_UI_H
#define QUADWAR_UI_H

#include "math.h"
#include <kit/dynamic_array.h>
#include <kit/string_ref.h>

#ifdef __cplusplus
extern "C" {
#endif

enum { UI_PANEL, UI_TEXT, UI_BUTTON };

enum {
  UI_COLOR_PANEL_NORMAL,
  UI_COLOR_PANEL_DISABLED,
  UI_COLOR_BUTTON_NORMAL,
  UI_COLOR_BUTTON_ACTIVE,
  UI_COLOR_BUTTON_PRESSED,
  UI_COLOR_BUTTON_DISABLED,
  UI_COLOR_TEXT_NORMAL,
  UI_COLOR_TEXT_ACTIVE,
  UI_COLOR_TEXT_PRESSED,
  UI_COLOR_TEXT_DISABLED,
  UI_COLORS_SIZE
};

typedef struct {
  unsigned is_visible : 1;
  unsigned is_enabled : 1;
  unsigned is_pressed : 1;
  unsigned has_cursor : 1;
  unsigned click      : 1;
  unsigned _temp      : 1;

  ptrdiff_t    level;
  ptrdiff_t    x;
  ptrdiff_t    y;
  ptrdiff_t    width;
  ptrdiff_t    height;
  kit_string_t text;

  int type;
} ui_widget_t;

typedef KIT_DA(ui_widget_t) ui_widget_array_t;

typedef struct {
  unsigned is_changed  : 1;
  unsigned is_captured : 1;
  unsigned has_cursor  : 1;

  ptrdiff_t cursor;
  ptrdiff_t text_size;
  ptrdiff_t spacing;
  vec4_t    colors[UI_COLORS_SIZE];

  ui_widget_array_t widgets;
} ui_t;

void ui_init(ui_t *ui, kit_allocator_t alloc);
void ui_destroy(ui_t *ui);

void ui_motion(ui_t *ui, ptrdiff_t x, ptrdiff_t y);
void ui_press(ui_t *ui);
void ui_unpress(ui_t *ui);
void ui_render(ui_t *ui);

#ifdef __cplusplus
}
#endif

#endif
