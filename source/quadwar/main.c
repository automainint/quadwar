#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include <SDL.h>
#include <SDL_video.h>

#include "gl/gl.h"

enum { DEFAULT_WINDOW_WIDTH = 1024, DEFAULT_WINDOW_HEIGHT = 768 };

static void log_print_(char const *const message) {
  printf("%s", message);
}

int init(void) {
  if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    printf("SDL_Init failed: %s\n", SDL_GetError());
    return QW_ERROR;
  }

  return QW_OK;
}

SDL_Window *create_window(void) {
  SDL_Window *window = SDL_CreateWindow(
      "Quadwar", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
      DEFAULT_WINDOW_WIDTH, DEFAULT_WINDOW_HEIGHT,
      SDL_WINDOW_RESIZABLE | SDL_WINDOW_OPENGL);

  if (window == NULL)
    printf("SDL_CreateWindow failed: %s\n", SDL_GetError());

  return window;
}

SDL_Renderer *create_renderer(SDL_Window *window) {
  if (window == NULL)
    return NULL;

  SDL_Renderer *const renderer = SDL_CreateRenderer(
      window, -1,
      SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

  if (renderer == NULL)
    printf("SDL_CreateRenderer failed: %s\n", SDL_GetError());

  SDL_RendererInfo info;
  if (SDL_GetRendererInfo(renderer, &info) < 0)
    printf("SDL_GetRendererInfo failed: %s\n", SDL_GetError());
  else
    printf("SDL renderer: %s\n", info.name);

  if (gl_load(log_print_) != QW_OK) {
    SDL_DestroyRenderer(renderer);
    return NULL;
  }

  return renderer;
}

void update_size(SDL_Renderer *renderer) {
  if (renderer == NULL)
    return;

  SDL_Rect rect;
  SDL_RenderGetViewport(renderer, &rect);

  glViewport(0, 0, rect.w, rect.h);
}

void frame(SDL_Renderer *renderer, int64_t time_elapsed) {
  glClearColor(.4f, .5f, .6f, 1.f);
  glClearDepth(1.0);
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

  SDL_RenderPresent(renderer);
}

void event_loop(SDL_Renderer *renderer) {
  if (renderer == NULL)
    return;

  update_size(renderer);

  struct timespec time_0;
  timespec_get(&time_0, TIME_UTC);

  int64_t time_extra = 0;

  for (int done = 0; !done;) {
    SDL_Event event;
    while (SDL_PollEvent(&event) == 1)
      if (event.type == SDL_QUIT)
        done = 1;

    update_size(renderer);

    struct timespec time_1;
    timespec_get(&time_1, TIME_UTC);

    int64_t time_elapsed = (time_1.tv_sec - time_0.tv_sec) *
                               1000000000 +
                           (time_1.tv_nsec - time_0.tv_nsec);

    int64_t time_elapsed_ms = (time_elapsed + time_extra) / 1000000;
    time_extra              = (time_elapsed + time_extra) % 1000000;

    frame(renderer, time_elapsed_ms);

    time_0 = time_1;
  }
}

void run(void) {
  if (init() != QW_OK)
    return;

  SDL_Window   *window   = create_window();
  SDL_Renderer *renderer = create_renderer(window);

  event_loop(renderer);

  if (renderer != NULL)
    SDL_DestroyRenderer(renderer);
  if (window != NULL)
    SDL_DestroyWindow(window);

  SDL_Quit();
}

int main(int argc, char **argv) {
  run();
  return 0;
}
