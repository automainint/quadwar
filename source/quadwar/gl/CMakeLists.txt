target_sources(
  quadwar
    PUBLIC
      $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/gl3platform.h>
      $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/gl32.h>
      $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/khrplatform.h>)
