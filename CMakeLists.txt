cmake_minimum_required(VERSION 3.16)

set(QUADWAR_PROJECT quadwar)
set(QUADWAR quadwar)

if(NOT DEFINED CMAKE_BUILD_PARALLEL_LEVEL)
  set(CMAKE_BUILD_PARALLEL_LEVEL 4)
endif()

project(
  ${QUADWAR_PROJECT}
  VERSION 0.1.1
  DESCRIPTION "Quadwar"
  LANGUAGES C)

include(FetchContent)

find_package(Threads)
find_package(kit QUIET)
find_package(SDL2 QUIET)

if(NOT kit_FOUND)
  FetchContent_Declare(
    kit
    GIT_REPOSITORY https://github.com/automainint/kit.git
    GIT_TAG dev)
  set(KIT_ENABLE_TESTING OFF CACHE BOOL "" FORCE)
  FetchContent_MakeAvailable(kit)
endif()

if(NOT SDL2_FOUND)
  FetchContent_Declare(
    SDL2
    GIT_REPOSITORY https://github.com/libsdl-org/SDL.git
    GIT_TAG main)
  set(SDL_TEST OFF CACHE BOOL "" FORCE)
  FetchContent_MakeAvailable(SDL2)
  add_library(SDL2::SDL2 ALIAS SDL2)
  add_library(SDL2::SDL2main ALIAS SDL2main)
endif()

add_executable(${QUADWAR})
target_link_libraries(
  ${QUADWAR}
  PRIVATE
  Threads::Threads kit::kit SDL2::SDL2 SDL2::SDL2main)
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

if(CMAKE_SYSTEM_NAME MATCHES "Emscripten")
  target_link_options(${QUADWAR} PRIVATE -sFULL_ES3)
endif()

add_subdirectory(source)

enable_testing()
