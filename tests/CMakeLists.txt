# Minimum required CMake version.
cmake_minimum_required (VERSION 3.8)
# Project name and settings.
project(idlib-game-engine-tests CXX)
message("building Idlib: Game Engine Tests Executable")
set_project_default_properties()

# Add include directory of Google Test.
include_directories("${IDLIB_PATH}/external/googletest/googletest/include")

# Include directory locations.
include_directories(${PROJECT_SOURCE_DIR}/../library/src)
include_directories(${PROJECT_SOURCE_DIR})

# Build a list of all tests.
file(GLOB_RECURSE test_files ${PROJECT_SOURCE_DIR}/idlib/tests/*.cpp)

add_executable(idlib-game-engine-tests-executable ${test_files})
target_link_libraries(idlib-game-engine-tests-executable idlib-library idlib-library)
target_link_libraries(idlib-game-engine-tests-executable gtest gtest_main)

include(CTest)
enable_testing()
add_test(idlib-game-engine-tests ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/idlib-game-engine-tests-executable)
if (NOT MSVC)
  add_custom_target(idlib-game-engine-check COMMAND ${CMAKE_CTEST_COMMAND} --verbose DEPENDS ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/idlib-game-engine-tests-executable)
  if (NOT TARGET check)
	add_custom_target(check)
  endif()
  add_dependencies(check idlib-game-engine-check)
endif()
