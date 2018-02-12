# Minimum required CMake version.
cmake_minimum_required(VERSION 3.6)
# Project name and settings.
project(idlib-game-engine CXX)
message("building Idlib: Game Engine")

# Enable/disable compilation and execution of unit tests.
# The value of this option can be set from the command-line by -Didlib-game-engine-with-tests=(ON|OFF).
option(idlib-game-engine-with-tests
       "enable/disable compilation and execution of unit tests. ON enables compilation and execution of unit tests, OFF disables compilation and execution of unit tests. Initial value is ON."
	   ON)

# Enable/disable compilation of demos.
# The value of this option can be set from the command-line by -Didlib-game-engine-with-demos=(ON|OFF).
option(idlib-game-engine-with-demos
       "enable/disable compilation of demos. ON enables compilation of demos, OFF disables compilation of demos. Initial value is ON."
	   ON)

# Idlib integration:
# if a path to Idlib is specified:
# 	if the path is relative
#     make it absolute
#   add the path
# Otherwise:
#   initialize the Idlib submodule
#   add the path
if (NOT DEFINED IDLIB_PATH)
 set(idlib-with-tests OFF CACHE BOOL "enable/disable compilation of tests. ON enables compilation of tests, OFF disables compilation of tests. Initial value is OFF." FORCE)
 execute_process(COMMAND git submodule update --init --recursive --depth 32 ${CMAKE_CURRENT_SOURCE_DIR}/idlib WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
 execute_process(COMMAND git checkout origin/develop WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/idlib)
 set(IDLIB_PATH ${CMAKE_CURRENT_SOURCE_DIR}/idlib)
 add_subdirectory(${IDLIB_PATH})
 #message("absolute path to Idlib is ${IDLIB_PATH}")
endif ()

include(${IDLIB_PATH}/buildsystem/set_project_default_properties.cmake)
include(${CMAKE_CURRENT_SOURCE_DIR}/buildsystem/download_and_unpack.cmake)

#include_google_test()

# Add subdirectories for the library, the tests, and the demos.
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/library)

# Ensure the "check" target exists.
if (NOT MSVC)
  if (NOT TARGET check)
	add_custom_target(check)
  endif()
endif()

if (idlib-game-engine-with-tests)
  add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/tests)
endif()

if (idlib-game-engine-with-demos)
  add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/demos)
endif()
