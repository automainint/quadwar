target_sources(
  quadwar
    PRIVATE
      input.c main.c camera.c stem.c graphics.c
    PUBLIC
      $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/graphics.h>
      $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/stem.h>
      $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/camera.h>
      $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/input.h>
      $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/math.h>
      $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/options.h>)
add_subdirectory(gl)
