target_sources(
  ${QUADWAR}
    PRIVATE
      main.c stem.c
    PUBLIC
      $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/stem.h>
      $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/options.h>)
add_subdirectory(gl)
