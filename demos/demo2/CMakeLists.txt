# Minimum required CMake version.
cmake_minimum_required(VERSION 3.8)

# Project name and language.
project(idlib-game-engine-demo2 CXX)

# Idlib: Game Engine library compiles against C++ 17.
if (NOT MSVC)
  set(CMAKE_CXX_STANDARD 17)
endif()

# Set the default properties.
set_project_default_properties()

# Determine source files.
file(GLOB_RECURSE SOURCE_FILES ${PROJECT_SOURCE_DIR}/src/*.cpp)
# Determine header files.
file(GLOB_RECURSE HEADER_FILES ${PROJECT_SOURCE_DIR}/src/*.hpp)

add_executable(idlib-game-engine-demo2 ${SOURCE_FILES} ${HEADER_FILES})
target_link_libraries(idlib-game-engine-demo2 idlib-game-engine-library)

if (${CMAKE_CXX_COMPILER_ID} STREQUAL MSVC)
  get_property(runtime-libraries TARGET idlib-game-engine-library PROPERTY runtime-libraries)
  foreach( runtime-library ${runtime-libraries} )
    get_filename_component(barename ${runtime-library} NAME)
    message("copying ${runtime-library} to $<TARGET_FILE_DIR:idlib-game-engine-demo1>/${barename}")
    add_custom_command(TARGET idlib-game-engine-demo2
                       PRE_LINK
                       COMMAND ${CMAKE_COMMAND} -E copy_if_different ${runtime-library} $<TARGET_FILE_DIR:idlib-game-engine-demo2>/${barename})
  endforeach()
endif()
