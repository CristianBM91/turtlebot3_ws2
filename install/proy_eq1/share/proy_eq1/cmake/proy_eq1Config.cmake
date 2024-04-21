# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_proy_eq1_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED proy_eq1_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(proy_eq1_FOUND FALSE)
  elseif(NOT proy_eq1_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(proy_eq1_FOUND FALSE)
  endif()
  return()
endif()
set(_proy_eq1_CONFIG_INCLUDED TRUE)

# output package information
if(NOT proy_eq1_FIND_QUIETLY)
  message(STATUS "Found proy_eq1: 0.1.0 (${proy_eq1_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'proy_eq1' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${proy_eq1_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(proy_eq1_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${proy_eq1_DIR}/${_extra}")
endforeach()
