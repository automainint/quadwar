#include "ui.h"

#include "graphics.h"

void ui_init(ui_t *ui, kit_allocator_t alloc) {
  if (ui == NULL)
    return;

  memset(ui, 0, sizeof *ui);

  ui->is_changed = 1;
  ui->text_size  = 4;
  ui->spacing    = 1;

#define LCHA rgba_from_lcha

  ui->colors[UI_COLOR_PANEL_NORMAL]    = LCHA(50.f, 0.f, 0.f, .7f);
  ui->colors[UI_COLOR_PANEL_DISABLED]  = LCHA(40.f, 0.f, 0.f, .6f);
  ui->colors[UI_COLOR_BUTTON_NORMAL]   = LCHA(50.f, 0.f, 0.f, .9f);
  ui->colors[UI_COLOR_BUTTON_ACTIVE]   = LCHA(60.f, 0.f, 0.f, .9f);
  ui->colors[UI_COLOR_BUTTON_PRESSED]  = LCHA(30.f, 0.f, 0.f, .9f);
  ui->colors[UI_COLOR_BUTTON_DISABLED] = LCHA(40.f, 0.f, 0.f, .8f);
  ui->colors[UI_COLOR_TEXT_NORMAL]     = LCHA(80.f, 0.f, 0.f, 1.f);
  ui->colors[UI_COLOR_TEXT_ACTIVE]     = LCHA(90.f, 0.f, 0.f, 1.f);
  ui->colors[UI_COLOR_TEXT_PRESSED]    = LCHA(90.f, 0.f, 0.f, 1.f);
  ui->colors[UI_COLOR_TEXT_DISABLED]   = LCHA(60.f, 0.f, 0.f, .9f);

  DA_INIT(ui->widgets, 0, alloc);
}

void ui_destroy(ui_t *ui) {
  if (ui == NULL)
    return;

  for (ptrdiff_t i = 0; i < ui->widgets.size; i++)
    DA_DESTROY(ui->widgets.values[i].text);
  DA_DESTROY(ui->widgets);
}

void ui_motion(ui_t *ui, ptrdiff_t x, ptrdiff_t y) {
  if (ui == NULL)
    return;

  ui->has_cursor = 0;

  for (ptrdiff_t i = 0; i < ui->widgets.size; i++) {
    ui_widget_t *a = ui->widgets.values + i;

    if (!a->is_visible)
      continue;

    a->_temp = x >= a->x && x < a->x + a->width && y >= a->y &&
               y < a->y + a->height;
    ui->has_cursor |= a->_temp;
  }

  for (ptrdiff_t i = 0; i < ui->widgets.size; i++) {
    ui_widget_t *a = ui->widgets.values + i;

    if (!a->is_visible)
      continue;

    for (ptrdiff_t j = 0; j < i; j++) {
      ui_widget_t *b = ui->widgets.values + j;

      if (!b->is_visible)
        continue;

      if (a->_temp && a->level >= b->level)
        b->_temp = 0;
      else if (b->_temp && b->level > a->level)
        a->_temp = 0;
    }
  }

  for (ptrdiff_t i = 0; i < ui->widgets.size; i++) {
    ui_widget_t *a = ui->widgets.values + i;

    if (!a->is_visible)
      continue;
    if (a->_temp == a->has_cursor)
      continue;

    if (a->_temp)
      ui->cursor = i;
    else
      a->is_pressed = 0;

    a->has_cursor  = a->_temp;
    ui->is_changed = 1;
  }
}

void ui_press(ui_t *ui) {
  if (ui == NULL)
    return;
  if (ui->cursor < 0 || ui->cursor >= ui->widgets.size)
    return;

  ui_widget_t *a = ui->widgets.values + ui->cursor;

  if (a->has_cursor) {
    a->is_pressed   = 1;
    a->click        = 1;
    ui->is_captured = 1;
  }
}

void ui_unpress(ui_t *ui) {
  if (ui == NULL)
    return;
  if (ui->cursor < 0 || ui->cursor >= ui->widgets.size)
    return;

  ui_widget_t *a = ui->widgets.values + ui->cursor;

  if (a->is_pressed)
    a->is_pressed = 0;
  if (ui->is_captured)
    ui->is_captured = 0;
}

static void ui_render_panel(ui_t *ui, ui_widget_t *a) {
  im_draw_rect(a->x, a->y, a->width, a->height,
               ui->colors[a->is_enabled ? UI_COLOR_PANEL_NORMAL
                                        : UI_COLOR_PANEL_DISABLED]);
}

static void ui_render_text(ui_t *ui, ui_widget_t *a,
                           int color_index) {
  text_area_t area   = im_text_area(1, 0, WRAP_STR(a->text));
  ptrdiff_t   width  = area.width * ui->text_size;
  ptrdiff_t   height = area.height * ui->text_size;
  ptrdiff_t   dx     = (a->width - width) / 2;
  ptrdiff_t   dy     = (a->height - height) / 2;
  im_draw_text(a->x + dx, a->y + dy, width, height,
               ui->colors[color_index], ui->spacing, 0,
               WRAP_STR(a->text));
}

static void ui_render_button(ui_t *ui, ui_widget_t *a) {
  im_draw_rect(a->x, a->y, a->width, a->height,
               ui->colors[!a->is_enabled  ? UI_COLOR_BUTTON_DISABLED
                          : a->is_pressed ? UI_COLOR_BUTTON_PRESSED
                          : a->has_cursor ? UI_COLOR_BUTTON_ACTIVE
                                          : UI_COLOR_BUTTON_NORMAL]);

  ui_render_text(ui, a,
                 !a->is_enabled  ? UI_COLOR_TEXT_DISABLED
                 : a->is_pressed ? UI_COLOR_TEXT_PRESSED
                 : a->has_cursor ? UI_COLOR_TEXT_ACTIVE
                                 : UI_COLOR_TEXT_NORMAL);
}

void ui_render(ui_t *ui) {
  if (ui == NULL)
    return;

  for (ptrdiff_t i = 0; i < ui->widgets.size; i++) {
    ui_widget_t *a = ui->widgets.values + i;

    if (!a->is_visible)
      continue;

    switch (a->type) {
      case UI_PANEL: ui_render_panel(ui, a); break;
      case UI_TEXT:
        ui_render_text(ui, a,
                       !a->is_enabled ? UI_COLOR_TEXT_DISABLED
                                      : UI_COLOR_TEXT_NORMAL);
        break;
      case UI_BUTTON: ui_render_button(ui, a); break;
      default:;
    }
  }

  ui->is_changed = 0;
}
