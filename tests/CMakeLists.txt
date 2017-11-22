cmake_minimum_required (VERSION 2.8.7)

project(egobo-engine-test CXX)

# Set the default properties.
set_project_default_properties()

# Add gtest library include.
include_directories("${CMAKE_BINARY_DIR}/external/googletest/googletest/include")
# Include directory locations.
include_directories(${PROJECT_SOURCE_DIR}/../library/src)
include_directories(${PROJECT_SOURCE_DIR})

# Build a list of all tests.
file(GLOB_RECURSE test_files ${PROJECT_SOURCE_DIR}/idlib/tests/*.cpp)

add_executable(egoboo-engine-test-executable ${test_files})
target_link_libraries(egoboo-engine-test-executable egoboo-engine-library idlib-library)
target_link_libraries(egoboo-engine-test-executable gtest gtest_main)

include(CTest)
enable_testing()
add_test(egoboo-engine-test ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/egoboo-engine-test-executable)
add_custom_target(check COMMAND ${CMAKE_CTEST_COMMAND} --verbose DEPENDS ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/egoboo-engine-test-executable)

