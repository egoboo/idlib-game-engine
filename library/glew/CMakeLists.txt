project(glew C)

# Set the default properties.
set_project_default_properties()

set(sources "")

message("project source dir: ${PROJECT_SOURCE_DIR}")

# discover C sources
file(GLOB temporary ${PROJECT_SOURCE_DIR}/src/*.c)
message("c sources: ${temporary}")
list(APPEND sources ${temporary})
# discover C headers
file(GLOB temporary ${PROJECT_SOURCE_DIR}/src/*.h)
message("c headers: ${temporary}")
list(APPEND sources ${temporary})

add_library(glew STATIC ${sources})

ADD_DEFINITIONS(-DUNICODE)
ADD_DEFINITIONS(-D_UNICODE)
find_package(OpenGL REQUIRED)
include_directories(${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS})
target_link_libraries(glew ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})
target_compile_definitions(glew PRIVATE UNICODE _UNICODE)
target_include_directories(glew INTERFACE "${PROJECT_SOURCE_DIR}/src")

# glew include directory and library
include_directories(${PROJECT_SOURCE_DIR}/src)
add_definitions(-DGLEW_STATIC)
