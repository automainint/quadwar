cmake_minimum_required(VERSION 3.16)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON CACHE BOOL "" FORCE)

if(NOT DEFINED CMAKE_BUILD_PARALLEL_LEVEL)
  set(CMAKE_BUILD_PARALLEL_LEVEL 4 CACHE STRING "" FORCE)
endif()

project(
  quadwar
  VERSION 0.1.1
  DESCRIPTION "Quadwar"
  LANGUAGES C)

add_executable(quadwar)

include(FetchContent)

find_package(kit QUIET)

if(NOT kit_FOUND)
  FetchContent_Declare(
    kit
    GIT_REPOSITORY https://github.com/automainint/kit.git
    GIT_TAG dev)
  set(KIT_ENABLE_TESTING OFF CACHE BOOL "" FORCE)
  FetchContent_MakeAvailable(kit)
endif()

target_link_libraries(quadwar PRIVATE kit::kit)

if(NOT EMSCRIPTEN)
  include(FindOpenGL)
  target_link_libraries(quadwar PRIVATE OpenGL::GL)
endif()

find_package(SDL2 QUIET)

if(SDL2_FOUND)
  target_link_libraries(
    quadwar
    PRIVATE
    SDL2::SDL2-static SDL2::SDL2main)
else()
  FetchContent_Declare(
    SDL2
    GIT_REPOSITORY https://github.com/libsdl-org/SDL.git
    GIT_TAG SDL2)
  set(SDL_TEST OFF CACHE BOOL "" FORCE)
  set(SDL_STATIC ON CACHE BOOL "" FORCE)
  set(SDL_SHARED OFF CACHE BOOL "" FORCE)
  FetchContent_MakeAvailable(SDL2)

  target_link_libraries(
    quadwar
    PRIVATE
    SDL2-static SDL2main)
endif()

if(NOT WIN32)
  target_link_libraries(quadwar PRIVATE m)
endif()
target_compile_features(quadwar PUBLIC c_std_11)
if(CMAKE_C_COMPILER_ID MATCHES "GNU|Clang")
  target_compile_options(quadwar PRIVATE -pedantic -Wall -Werror)
endif()

if(CMAKE_BUILD_TYPE MATCHES "debug|DEBUG|Debug")
  if(CMAKE_C_COMPILER_ID MATCHES "GNU|Clang")
    target_compile_options(
      quadwar PRIVATE
      -fsanitize=undefined,address -O0 -g)
    target_link_options(
      quadwar PRIVATE
      -fsanitize=undefined,address)
  endif()
endif()

if(CMAKE_BUILD_TYPE MATCHES "release|RELEASE|Release")
  if(CMAKE_C_COMPILER_ID MATCHES "GNU|Clang")
    target_compile_options(quadwar PRIVATE -O3)
  endif()
endif()

if(EMSCRIPTEN)
  target_link_options(quadwar PRIVATE -sFULL_ES3)
endif()

add_subdirectory(source)

enable_testing()
