target_sources(
  quadwar
    PRIVATE
      input.c main.c stem.c
    PUBLIC
      $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/stem.h>
      $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/input.h>
      $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/gl32.h>
      $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/math.h>
      $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/options.h>)
