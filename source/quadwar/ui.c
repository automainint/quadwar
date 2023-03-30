#include "ui.h"

#include "graphics.h"

void ui_init(ui_t *ui, kit_allocator_t alloc) {
  if (ui == NULL)
    return;

  memset(ui, 0, sizeof *ui);
  ui->is_changed = 1;
  DA_INIT(ui->widgets, 0, alloc);
}

void ui_destroy(ui_t *ui) {
  if (ui == NULL)
    return;

  DA_DESTROY(ui->widgets);
}

void ui_mouse(ui_t *ui, ptrdiff_t x, ptrdiff_t y) {
  if (ui == NULL)
    return;

  for (ptrdiff_t i = 0; i < ui->widgets.size; i++) {
    ui_widget_t *a = ui->widgets.values + i;

    if (!a->is_visible)
      continue;

    a->_temp = x >= a->x && x < a->x + a->width && y >= a->y &&
               y < a->y + a->height;
  }

  for (ptrdiff_t i = 0; i < ui->widgets.size; i++) {
    ui_widget_t *a = ui->widgets.values + i;

    if (!a->is_visible)
      continue;

    for (ptrdiff_t j = 0; j < i; j++) {
      ui_widget_t *b = ui->widgets.values + i;

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
    a->is_pressed = 1;
    a->click      = 1;
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
}

void ui_render(ui_t *ui) {
  if (ui == NULL)
    return;

  for (ptrdiff_t i = 0; i < ui->widgets.size; i++) {
    ui_widget_t *a = ui->widgets.values + i;

    if (!a->is_visible)
      continue;

    switch (a->type) {
      case UI_PANEL: break;

      case UI_TEXT: break;

      case UI_BUTTON: break;

      default:;
    }
  }

  ui->is_changed = 0;
}
