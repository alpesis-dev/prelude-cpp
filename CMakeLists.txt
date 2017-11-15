cmake_minimum_required (VERSION 2.8)

# ----------------------------------------------------------------------------
# Project

project (DEMO)

set (DEMO_VERSION_MAJOR 0)
set (DEMO_VERSION_MINOR 0)
set (DEMO_VERSION_PATCH 1)
set (DEMO_VERSION ${DEMO_VERSION_MAJOR}.${DEMO_VERSION_MINOR}.${DEMO_VERSION_PATCH})

# ----------------------------------------------------------------------------

set (CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake")

include (enableCXX11)

# ----------------------------------------------------------------------------

configure_file (
  "${PROJECT_SOURCE_DIR}/demo/version.h.in"
  "${PROJECT_BINARY_DIR}/demo/version.h"
)

# include dirs
include_directories ("${PROJECT_BINARY_DIR}")
include_directories ("${PROJECT_BINARY_DIR}/demo/")

# ----------------------------------------------------------------------------
# option

option (USE_MATHS "Use maths" ON)


# ----------------------------------------------------------------------------

set (PROJECT_ROOT ${CMAKE_SOURCE_DIR})
include_directories ("${PROJECT_ROOT}")

# ----------------------------------------------------------------------------
# subdirectories

add_subdirectory (demo)
