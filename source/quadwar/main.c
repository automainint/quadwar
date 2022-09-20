#include <stdint.h>
#include <stdio.h>
#include <time.h>

#include <SDL.h>
#include <SDL_video.h>

#include "gl/gl.h"
#include "stem.h"

enum {
  DEFAULT_WINDOW_WIDTH  = 1024,
  DEFAULT_WINDOW_HEIGHT = 768,
  FULLSCREEN_WIDTH      = 1280,
  FULLSCREEN_HEIGHT     = 720
};

static void log_print_(str_t const message) {
  printf("%*s", (int) message.size, message.values);
}

static void *qw_gl_get_proc_address(char const *const name) {
  return SDL_GL_GetProcAddress(name);
}

int main(int argc, char **argv) {
  printf("Quadwar, development version\n\n");

  if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO) < 0) {
    printf("SDL_Init failed: %s\n", SDL_GetError());
    return QW_ERROR;
  }

  int gl_major = 2;
  int gl_minor = 1;

  SDL_GL_SetAttribute(SDL_GL_CONTEXT_FLAGS, 0);
  SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, gl_major);
  SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, gl_minor);

  SDL_Window *const window = SDL_CreateWindow(
      "Quadwar", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
      DEFAULT_WINDOW_WIDTH, DEFAULT_WINDOW_HEIGHT,
      SDL_WINDOW_RESIZABLE | SDL_WINDOW_OPENGL);

  if (window == NULL) {
    printf("SDL_CreateWindow failed: %s\n", SDL_GetError());
    return QW_ERROR;
  }

  SDL_GLContext const glcontext = SDL_GL_CreateContext(window);

  if (qw_gl_load(qw_gl_get_proc_address, log_print_) != QW_OK) {
    SDL_GL_DeleteContext(glcontext);
    SDL_DestroyWindow(window);
    return QW_ERROR;
  }

  char const *platform = SDL_GetPlatform();
  char const *video    = SDL_GetCurrentVideoDriver();
  char const *audio    = SDL_GetCurrentAudioDriver();

  printf("CPU:      %d cores, %d bytes L1 cache\n", SDL_GetCPUCount(),
         SDL_GetCPUCacheLineSize());
  if (platform != NULL)
    printf("Platform: %s\n", platform);
  if (video != NULL)
    printf("Video:    %s", video);
  if (SDL_GL_GetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, &gl_major) ==
          0 &&
      SDL_GL_GetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, &gl_minor) ==
          0) {
    if (video != NULL)
      printf(", ");
    printf("OpenGL %d.%d\n", gl_major, gl_minor);
  } else
    printf("\n");
  if (audio != NULL)
    printf("Audio:    %s\n", audio);
  printf("\n");

  qw_init();

  int width  = 0;
  int height = 0;

  struct timespec time_0, time_1;
  timespec_get(&time_0, TIME_UTC);

  int64_t time_extra = 0;

  int const buttons[] = { [SDL_BUTTON_LEFT]   = QW_KEY_BUTTON_LEFT,
                          [SDL_BUTTON_MIDDLE] = QW_KEY_BUTTON_MIDDLE,
                          [SDL_BUTTON_RIGHT]  = QW_KEY_BUTTON_RIGHT,
                          [SDL_BUTTON_X1]     = QW_KEY_BUTTON_X1,
                          [SDL_BUTTON_X2]     = QW_KEY_BUTTON_X2 };

  int is_alt        = 0;
  int is_fullscreen = 0;

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
          if (event.key.repeat == 0) {
            if (event.key.keysym.sym == SDLK_LALT ||
                event.key.keysym.sym == SDLK_RALT)
              is_alt++;
            if (is_alt > 0 && event.key.keysym.sym == SDLK_RETURN) {
              if (!is_fullscreen) {
                SDL_SetWindowFullscreen(window,
                                        SDL_WINDOW_FULLSCREEN);
                SDL_SetWindowSize(window, FULLSCREEN_WIDTH,
                                  FULLSCREEN_HEIGHT);
                is_fullscreen = 1;
              } else {
                SDL_SetWindowFullscreen(window, 0);
                is_fullscreen = 0;
              }
            } else if (event.key.keysym.scancode >= 0 &&
                       event.key.keysym.scancode <
                           (int) QW_KEY_MAP_SIZE)
              qw_down(qw_key_map[event.key.keysym.scancode]);
          }
          break;
        case SDL_KEYUP:
          if ((event.key.keysym.sym == SDLK_LALT ||
               event.key.keysym.sym == SDLK_RALT) &&
              is_alt > 0)
            is_alt--;
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

    int w, h;
    SDL_GL_GetDrawableSize(window, &w, &h);

    if (width != w || height != h) {
      width  = w;
      height = h;

      qw_size(width, height);
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

    SDL_GL_SwapWindow(window);
  }

  qw_cleanup();

  SDL_GL_DeleteContext(glcontext);
  SDL_DestroyWindow(window);

  SDL_Quit();

  printf("\nBye\n");

  return QW_OK;
}
