#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

#include <SDL.h>
#include <SDL_video.h>

#ifdef __EMSCRIPTEN__
#  include <emscripten.h>
#  include <emscripten/html5.h>
#endif

#include "gl/gl.h"
#include "stem.h"

enum {
  DEFAULT_VSYNC = 0,
#ifdef __EMSCRIPTEN__
  DEFAULT_WINDOW_WIDTH  = 800,
  DEFAULT_WINDOW_HEIGHT = 600,
#else
  DEFAULT_WINDOW_WIDTH  = 1024,
  DEFAULT_WINDOW_HEIGHT = 768,
#endif
  FULLSCREEN_WIDTH  = 1280,
  FULLSCREEN_HEIGHT = 720,
};

static int const buttons[] = {
  [SDL_BUTTON_LEFT]   = QW_KEY_BUTTON_LEFT,
  [SDL_BUTTON_MIDDLE] = QW_KEY_BUTTON_MIDDLE,
  [SDL_BUTTON_RIGHT]  = QW_KEY_BUTTON_RIGHT,
  [SDL_BUTTON_X1]     = QW_KEY_BUTTON_X1,
  [SDL_BUTTON_X2]     = QW_KEY_BUTTON_X2
};

static void log_print_(str_t const message) {
  printf("%*s", (int) message.size, message.values);
}

static void *qw_gl_get_proc_address(char const *const name) {
  return SDL_GL_GetProcAddress(name);
}

static struct {
  SDL_Window     *window;
  int             done;
  int             width;
  int             height;
  struct timespec time_0;
  struct timespec time_1;
  int64_t         time_extra;
  int             is_alt;
  int             is_fullscreen;
  int             frames;
  int64_t         time_frame;
} g_app;

static void loop(void) {
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
        if (event.key.repeat == 0) {
          if (event.key.keysym.sym == SDLK_LALT ||
              event.key.keysym.sym == SDLK_RALT)
            g_app.is_alt++;
#ifndef __EMSCRIPTEN__
          if (g_app.is_alt > 0 &&
              event.key.keysym.sym == SDLK_RETURN) {
            if (!g_app.is_fullscreen) {
              SDL_SetWindowFullscreen(g_app.window,
                                      SDL_WINDOW_FULLSCREEN);
              SDL_SetWindowSize(g_app.window, FULLSCREEN_WIDTH,
                                FULLSCREEN_HEIGHT);
              g_app.is_fullscreen = 1;
            } else {
              SDL_SetWindowFullscreen(g_app.window, 0);
              g_app.is_fullscreen = 0;
            }
          }
#endif
          else if (event.key.keysym.scancode >= 0 &&
                   event.key.keysym.scancode < (int) QW_KEY_MAP_SIZE)
            qw_down(qw_key_map[event.key.keysym.scancode]);
        }
        break;
      case SDL_KEYUP:
        if ((event.key.keysym.sym == SDLK_LALT ||
             event.key.keysym.sym == SDLK_RALT) &&
            g_app.is_alt > 0)
          g_app.is_alt--;
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
      case SDL_QUIT: g_app.done = 1; break;
    }
  }

  int w, h;
  SDL_GL_GetDrawableSize(g_app.window, &w, &h);

  if (g_app.width != w || g_app.height != h) {
    g_app.width  = w;
    g_app.height = h;

    qw_size(g_app.width, g_app.height);
  }

  timespec_get(&g_app.time_1, TIME_UTC);
  int64_t time_elapsed = (g_app.time_1.tv_sec - g_app.time_0.tv_sec) *
                             1000000000 +
                         (g_app.time_1.tv_nsec -
                          g_app.time_0.tv_nsec);
  g_app.time_0 = g_app.time_1;

  int64_t time_elapsed_ms = (time_elapsed + g_app.time_extra) /
                            1000000;
  g_app.time_extra = (time_elapsed + g_app.time_extra) % 1000000;

  if (qw_frame(time_elapsed_ms) == QW_DONE)
    g_app.done = 1;

  SDL_GL_SwapWindow(g_app.window);

  g_app.frames++;
  g_app.time_frame += time_elapsed_ms;

  if (g_app.time_frame >= 1000) {
    printf("FPS: %d\r", g_app.frames);
    fflush(stdout);
    g_app.frames = 0;
    g_app.time_frame -= 1000;
  }
}

int main(int argc, char **argv) {
  printf("Quadwar, development version\n\n");

  memset(&g_app, 0, sizeof g_app);

  if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO) < 0) {
    printf("SDL_Init failed: %s\n", SDL_GetError());
    return QW_ERROR;
  }

  int gl_mask  = SDL_GL_CONTEXT_PROFILE_ES;
  int gl_major = 3;
  int gl_minor = 0;

  SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, gl_mask);
  SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, gl_major);
  SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, gl_minor);
  SDL_GL_SetAttribute(SDL_GL_CONTEXT_FLAGS, 0);

  g_app.window = SDL_CreateWindow(
      "Quadwar", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
      DEFAULT_WINDOW_WIDTH, DEFAULT_WINDOW_HEIGHT,
      SDL_WINDOW_RESIZABLE | SDL_WINDOW_OPENGL);

  if (g_app.window == NULL) {
    printf("SDL_CreateWindow failed: %s\n", SDL_GetError());
    return QW_ERROR;
  }

  SDL_GLContext const glcontext = SDL_GL_CreateContext(g_app.window);

  if (qw_gl_load(qw_gl_get_proc_address, log_print_) != QW_OK) {
    SDL_GL_DeleteContext(glcontext);
    SDL_DestroyWindow(g_app.window);
    return QW_ERROR;
  }

  int const   cpu_count = SDL_GetCPUCount();
  char const *platform  = SDL_GetPlatform();
  char const *video     = SDL_GetCurrentVideoDriver();
  char const *audio     = SDL_GetCurrentAudioDriver();

  if (cpu_count == 1)
    printf("CPU:      1 core,");
  else
    printf("CPU:      %d cores,", cpu_count);
  printf(" %d bytes L1 cache\n", SDL_GetCPUCacheLineSize());
  if (platform != NULL)
    printf("Platform: %s\n", platform);
  if (video != NULL)
    printf("Video:    %s", video);
  if (SDL_GL_GetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, &gl_mask) ==
          0 &&
      SDL_GL_GetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, &gl_major) ==
          0 &&
      SDL_GL_GetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, &gl_minor) ==
          0) {
    if (video != NULL)
      printf(",");
    printf(" OpenGL");
    if ((gl_mask & SDL_GL_CONTEXT_PROFILE_ES) != 0)
      printf(" ES");
    printf(" %d.%d\n", gl_major, gl_minor);
  } else
    printf("\n");
  if (audio != NULL)
    printf("Audio:    %s\n", audio);
  printf("\n");

#ifdef __EMSCRIPTEN__
  emscripten_set_main_loop(loop, 0, 0);
#endif

  SDL_GL_SetSwapInterval(DEFAULT_VSYNC ? 1 : 0);

  qw_init();

  timespec_get(&g_app.time_0, TIME_UTC);

#ifndef __EMSCRIPTEN__
  while (!g_app.done) loop();

  qw_cleanup();

  SDL_GL_DeleteContext(glcontext);
  SDL_DestroyWindow(g_app.window);

  SDL_Quit();

  printf("\nBye\n");
#endif

  return QW_OK;
}
