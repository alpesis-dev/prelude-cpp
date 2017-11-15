cmake_minimum_required (VERSION 2.8)

# ----------------------------------------------------------------------------
# Project

project (DEMO)

set (DEMO_VERSION_MAJOR 1)
set (DEMO_VERSION_MINOR 0)

# ----------------------------------------------------------------------------

configure_file (
  "${PROJECT_SOURCE_DIR}/demo/version.h.in"
  "${PROJECT_BINARY_DIR}/demo/version.h"
)

# include dirs
include_directories ("${PROJECT_BINARY_DIR}")
include_directories ("${PROJECT_BINARY_DIR}/demo/")
include_directories ("${PROJECT_BINARY_DIR}/demo/maths")

# ----------------------------------------------------------------------------
# option

option (USE_MATHS "Use maths" ON)


# ----------------------------------------------------------------------------
# subdirectories

add_subdirectory (demo)
