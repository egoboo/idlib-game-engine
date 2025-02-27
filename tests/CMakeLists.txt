# Minimum required CMake version.
cmake_minimum_required (VERSION 3.8)
# Project name and settings.
project(idlib-game-engine-tests CXX)
message("building Idlib: Game Engine Tests Executable")
set_project_default_properties()

# Include directory locations.
include_directories(${PROJECT_SOURCE_DIR}/../library/src)
include_directories(${PROJECT_SOURCE_DIR})

# Build a list of all tests.
file(GLOB_RECURSE test_files ${PROJECT_SOURCE_DIR}/idlib/tests/*.cpp)

add_executable(idlib-game-engine-tests-executable ${test_files})
target_link_libraries(idlib-game-engine-tests-executable idlib-library idlib-library)
target_link_libraries(idlib-game-engine-tests-executable GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(idlib-game-engine-tests-executable)
