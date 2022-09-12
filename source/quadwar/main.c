#include <stdint.h>
#include <stdio.h>
#include <time.h>

#include <SDL.h>
#include <SDL_video.h>

#include "gl/gl.h"
#include "stem.h"

enum { DEFAULT_WINDOW_WIDTH = 1024, DEFAULT_WINDOW_HEIGHT = 768 };

static void log_print_(str_t const message) {
  printf("%*s", (int) message.size, message.values);
}

static void *qw_gl_get_proc_address(char const *const name) {
  return SDL_GL_GetProcAddress(name);
}

int main(int argc, char **argv) {
  if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    printf("SDL_Init failed: %s\n", SDL_GetError());
    return QW_ERROR;
  }

  SDL_Window *const window = SDL_CreateWindow(
      "Quadwar", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
      DEFAULT_WINDOW_WIDTH, DEFAULT_WINDOW_HEIGHT,
      SDL_WINDOW_RESIZABLE | SDL_WINDOW_OPENGL);

  if (window == NULL) {
    printf("SDL_CreateWindow failed: %s\n", SDL_GetError());
    return QW_ERROR;
  }

  SDL_Renderer *const renderer = SDL_CreateRenderer(
      window, -1,
      SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

  if (renderer == NULL) {
    printf("SDL_CreateRenderer failed: %s\n", SDL_GetError());
    SDL_DestroyWindow(window);
    return QW_ERROR;
  }

  if (qw_gl_load(qw_gl_get_proc_address, log_print_) != QW_OK) {
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    return QW_ERROR;
  }

  qw_init();

  SDL_Rect rect;

  int x      = 0;
  int y      = 0;
  int width  = 0;
  int height = 0;

  struct timespec time_0, time_1;
  timespec_get(&time_0, TIME_UTC);

  int64_t time_extra = 0;

  int buttons[] = { [SDL_BUTTON_LEFT]   = QW_KEY_BUTTON_LEFT,
                    [SDL_BUTTON_MIDDLE] = QW_KEY_BUTTON_MIDDLE,
                    [SDL_BUTTON_RIGHT]  = QW_KEY_BUTTON_RIGHT,
                    [SDL_BUTTON_X1]     = QW_KEY_BUTTON_X1,
                    [SDL_BUTTON_X2]     = QW_KEY_BUTTON_X2 };

  for (int done = 0; !done;) {
    SDL_Event event;
    while (SDL_PollEvent(&event) == 1) {
      switch (event.type) {
        case SDL_MOUSEMOTION:
          qw_motion(event.motion.x, event.motion.y, event.motion.xrel,
                    event.motion.yrel);
          break;
        case SDL_MOUSEWHEEL:
          qw_wheel(event.wheel.preciseX, event.wheel.preciseY);
          break;
        case SDL_KEYDOWN:
          if (event.key.repeat == 0 &&
              event.key.keysym.scancode >= 0 &&
              event.key.keysym.scancode < (int) QW_KEY_MAP_SIZE)
            qw_down(qw_key_map[event.key.keysym.scancode]);
          break;
        case SDL_KEYUP:
          if (event.key.keysym.scancode >= 0 &&
              event.key.keysym.scancode < (int) QW_KEY_MAP_SIZE)
            qw_up(qw_key_map[event.key.keysym.scancode]);
          break;
        case SDL_MOUSEBUTTONDOWN:
          qw_down(qw_key_map[buttons[event.button.button]]);
          break;
        case SDL_MOUSEBUTTONUP:
          qw_up(qw_key_map[buttons[event.button.button]]);
          break;
        case SDL_QUIT: done = 1; break;
      }
    }

    SDL_RenderGetViewport(renderer, &rect);

    if (x != rect.x || y != rect.y || width != rect.w ||
        height != rect.h) {
      x      = rect.x;
      y      = rect.y;
      width  = rect.w;
      height = rect.h;

      qw_size(x, y, width, height);
    }

    timespec_get(&time_1, TIME_UTC);
    int64_t time_elapsed = (time_1.tv_sec - time_0.tv_sec) *
                               1000000000 +
                           (time_1.tv_nsec - time_0.tv_nsec);
    time_0 = time_1;

    int64_t time_elapsed_ms = (time_elapsed + time_extra) / 1000000;
    time_extra              = (time_elapsed + time_extra) % 1000000;

    if (qw_frame(time_elapsed_ms) == QW_DONE)
      done = 1;

    SDL_RenderPresent(renderer);
  }

  qw_cleanup();

  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);

  SDL_Quit();

  return QW_OK;
}
