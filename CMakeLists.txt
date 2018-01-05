# Minimum required CMake version.
cmake_minimum_required(VERSION 3.6)

# Project name and language.
project(idlib-game-engine CXX)

# Idlib integration:
# if a path to Idlib is specified:
# 	if the path is relative
#     make it absolute
#   add the path
# Otherwise:
#   initialize the Idlib submodule
#   add the path
if (DEFINED IDLIB_PATH)
 message("path to Idlib is defined")
 if (IS_RELATIVE ${IDLIB_PATH})
  message("relative path to Idlib is ${IDLIB_PATH}")
  set(IDLIB_PATH ${CMAKE_CURRENT_SOURCE_DIR}/${IDLIB_PATH})
  message("absolute path to Idlib is ${IDLIB_PATH}")
  add_subdirectory(${IDLIB_PATH} ${CMAKE_CURRENT_BINARY_DIR}/idlib)
 endif (IS_RELATIVE ${IDLIB_PATH})
else (DEFINED IDLIB_PATH)
 execute_process(COMMAND git submodule update --init --recursive --depth 32 ${CMAKE_CURRENT_SOURCE_DIR}/idlib WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
 execute_process(COMMAND git checkout origin/develop WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/idlib)
 add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/idlib)
endif (DEFINED IDLIB_PATH)

  message("absolute path to Idlib is ${IDLIB_PATH}")

include(${CMAKE_CURRENT_SOURCE_DIR}/buildsystem/set_project_default_properties.cmake)


# Add subdirectories for the library and the tests.
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/library)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/tests)
