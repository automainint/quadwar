target_sources(
  ${QUADWAR}
    PRIVATE
      main.c
    PUBLIC
      $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/options.h>)
add_subdirectory(gl)
