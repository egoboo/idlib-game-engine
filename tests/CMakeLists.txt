cmake_minimum_required (VERSION 2.8.7)

project(idlib-game-engine-tests CXX)

# Set the default properties.
set_project_default_properties()

# Add gtest library include.
include_directories("${CMAKE_BINARY_DIR}/external/googletest/googletest/include")
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
  if (TARGET check)
    add_dependencies(check idlib-game-engine-check)
  else()
    add_custom_target(check idlib-game-engine-check)
  endif()
endif()
