cmake_minimum_required(VERSION 3.16)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON CACHE BOOL "" FORCE)

if(NOT DEFINED CMAKE_BUILD_PARALLEL_LEVEL)
  set(CMAKE_BUILD_PARALLEL_LEVEL 4 CACHE STRING "" FORCE)
endif()

set(QUADWAR_PROJECT quadwar)
set(QUADWAR quadwar)

project(
  ${QUADWAR_PROJECT}
  VERSION 0.1.1
  DESCRIPTION "Quadwar"
  LANGUAGES C)

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

add_executable(${QUADWAR})

find_package(SDL3 QUIET)

if(EMSCRIPTEN AND NOT SDL3_FOUND)
  find_package(SDL2 REQUIRED)

  target_link_libraries(
    ${QUADWAR}
    PRIVATE
    kit::kit SDL2::SDL2 SDL2::SDL2main)

  target_compile_definitions(${QUADWAR} PRIVATE QUADWAR_SDL2)
else()
  if(NOT SDL3_FOUND)
    FetchContent_Declare(
      SDL3
      GIT_REPOSITORY https://github.com/libsdl-org/SDL.git
      GIT_TAG main)
    set(SDL_TEST OFF CACHE BOOL "" FORCE)
    FetchContent_MakeAvailable(SDL3)
    add_library(SDL3::SDL3 ALIAS SDL3)
    add_library(SDL3::SDL3_main ALIAS SDL3_main)
  endif()

  target_link_libraries(
    ${QUADWAR}
    PRIVATE
    kit::kit SDL3::SDL3 SDL3::SDL3_main)
endif()

if(NOT WIN32)
  target_link_libraries(${QUADWAR} PRIVATE m)
endif()
target_compile_features(${QUADWAR} PUBLIC c_std_11)
if(CMAKE_C_COMPILER_ID MATCHES "GNU|Clang")
  target_compile_options(${QUADWAR} PRIVATE -pedantic -Wall -Werror)
endif()

if(CMAKE_BUILD_TYPE MATCHES "debug|DEBUG|Debug")
  if(CMAKE_C_COMPILER_ID MATCHES "GNU|Clang")
    target_compile_options(
      ${QUADWAR} PRIVATE
      -fsanitize=undefined,address -O0 -g)
    target_link_options(
      ${QUADWAR} PRIVATE
      -fsanitize=undefined,address)
  endif()
endif()

if(CMAKE_BUILD_TYPE MATCHES "release|RELEASE|Release")
  if(CMAKE_C_COMPILER_ID MATCHES "GNU|Clang")
    target_compile_options(${QUADWAR} PRIVATE -O3)
  endif()
endif()

if(EMSCRIPTEN)
  target_link_options(${QUADWAR} PRIVATE -sFULL_ES3)
endif()

add_subdirectory(source)

enable_testing()
