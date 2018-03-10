# Minimum required CMake version.
cmake_minimum_required(VERSION 3.8)
# Project name and settings.
project(idlib-game-engine-library CXX)
message("building Idlib: Game Engine Library")
set_project_default_properties()

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/glew)

####################################################################################################################
# "Threads" and "OpenGL" work both on Windows.

set(CMAKE_THREAD_PREFER_PTHREAD TRUE)
set(THREADS_PREFER_PTHREAD_FLAG TRUE)
FIND_PACKAGE(Threads REQUIRED)

FIND_PACKAGE(OpenGL REQUIRED)

# "SDL", "SDL_sound", "SDL_ttf", and "SDL_image" do not work on Windows and do not work on Linux.
IF (NOT WIN32 AND NOT UNIX)
  #FIND_PACKAGE(SDL2 REQUIRED)
  #FIND_PACKAGE(SDL2_Mixer REQUIRED)
  #FIND_PACKAGE(SDL_ttf REQUIRED)
  #FIND_PACKAGE(SDL2_image REQUIRED)
endif()

# Only available under Linux.
if (UNIX)
    #message("searching SDL using FindPkgConfig")
    INCLUDE(FindPkgConfig)
    PKG_SEARCH_MODULE(SDL2 REQUIRED sdl2)
    PKG_SEARCH_MODULE(SDL2_IMAGE REQUIRED SDL2_image>=2.0.0)
    PKG_SEARCH_MODULE(SDL2_MIXER REQUIRED SDL2_mixer>=2.0.0)
    PKG_SEARCH_MODULE(SDL2_TTF REQUIRED SDL2_ttf>=2.0.0)
endif()

####################################################################################################################
# If on Windows and not Cygwin, download SDL 2, SDL 2 mixer, SDL 2 ttf, and SDL 2 image.

# SDL 2.x.
if (${IDLIB_CXX_COMPILER_ID} EQUAL ${IDLIB_CXX_COMPILER_ID_MSVC})
    download_and_unpack("https://www.libsdl.org/release/SDL2-devel-2.0.7-VC.zip"
                        "${PROJECT_SOURCE_DIR}/SDL2-devel-2.0.7-VC.zip"
                        "${PROJECT_SOURCE_DIR}/SDL2-devel-2.0.7-VC")
    set(SDL2_INCLUDE_DIRS ${PROJECT_SOURCE_DIR}/SDL2-devel-2.0.7-VC/SDL2-2.0.7/include)
    #message("SDL 2 include directories ${SDL2_INCLUDE_DIRS}")
    if (${IDLIB_PLATFORM_ID} EQUAL ${IDLIB_PLATFORM_ID_X64})
      set(library_directory ${PROJECT_SOURCE_DIR}/SDL2-devel-2.0.7-VC/SDL2-2.0.7/lib/x64)
    else()
      set(library_directory ${PROJECT_SOURCE_DIR}/SDL2-devel-2.0.7-VC/SDL2-2.0.7/lib/x86)
    endif()
    set(SDL2_LIBRARIES ${library_directory}/SDL2.lib)
    set(SDL2_RUNTIME_LIBRARIES ${library_directory}/SDL2.dll)
    #message("SDL 2 libraries ${SDL2_LIBRARIES}")
    #message("SDL 2 runtime libraries ${SDL2_RUNTIME_LIBRARIES}")
endif()

# SDL 2.x mixer.
if (${IDLIB_CXX_COMPILER_ID} EQUAL ${IDLIB_CXX_COMPILER_ID_MSVC})
    download_and_unpack("https://www.libsdl.org/projects/SDL_mixer/release/SDL2_mixer-devel-2.0.0-VC.zip"
                        "${PROJECT_SOURCE_DIR}/SDL2_mixer-devel-2.0.0-VC.zip"
                        "${PROJECT_SOURCE_DIR}/SDL2_mixer-devel-2.0.0-VC")
    set(SDL2_MIXER_INCLUDE_DIRS ${PROJECT_SOURCE_DIR}/SDL2_mixer-devel-2.0.0-VC/SDL2_mixer-2.0.0/include)
    #message("SDL 2 mixer include directories ${SDL2_MIXER_INCLUDE_DIRS}")
    if (${IDLIB_PLATFORM_ID} EQUAL ${IDLIB_PLATFORM_ID_X64})
      set(library_directory ${PROJECT_SOURCE_DIR}/SDL2_mixer-devel-2.0.0-VC/SDL2_mixer-2.0.0/lib/x64)
    else()
      set(library_directory ${PROJECT_SOURCE_DIR}/SDL2_mixer-devel-2.0.0-VC/SDL2_mixer-2.0.0/lib/x86)
    endif()
    set(SDL2_MIXER_LIBRARIES ${library_directory}/SDL2_mixer.lib)
    set(SDL2_MIXER_RUNTIME_LIBRARIES ${library_directory}/SDL2_mixer.dll)
    list(APPEND SDL2_MIXER_RUNTIME_LIBRARIES ${library_directory}/smpeg2.dll)
    list(APPEND SDL2_MIXER_RUNTIME_LIBRARIES ${library_directory}/libogg-0.dll)
    list(APPEND SDL2_MIXER_RUNTIME_LIBRARIES ${library_directory}/libvorbis-0.dll)
    list(APPEND SDL2_MIXER_RUNTIME_LIBRARIES ${library_directory}/libvorbisfile-3.dll)
    list(APPEND SDL2_MIXER_RUNTIME_LIBRARIES ${library_directory}/libFLAC-8.dll)
    list(APPEND SDL2_MIXER_RUNTIME_LIBRARIES ${library_directory}/libmodplug-1.dll)
    #message("SDL 2 mixer libraries ${SDL2_MIXER_LIBRARIES}")
    #message("SDL 2 mixer runtime libraries ${SDL2_MIXER_RUNTIME_LIBRARIES}")
endif()

# SDL 2.x image.        
if (${IDLIB_CXX_COMPILER_ID} EQUAL ${IDLIB_CXX_COMPILER_ID_MSVC})    
    download_and_unpack("https://www.libsdl.org/projects/SDL_image/release/SDL2_image-devel-2.0.2-VC.zip"
                        "${PROJECT_SOURCE_DIR}/SDL2_image-devel-2.0.2-VC.zip"
                          "${PROJECT_SOURCE_DIR}/SDL2_image-devel-2.0.2-VC")
    set(SDL2_IMAGE_INCLUDE_DIRS ${PROJECT_SOURCE_DIR}/SDL2_image-devel-2.0.2-VC/SDL2_image-2.0.2/include)
    #message("SDL 2 image include directories ${SDL2_IMAGE_INCLUDE_DIRS}")
    if (${IDLIB_PLATFORM_ID} EQUAL ${IDLIB_PLATFORM_ID_X64})
      set(library_directory ${PROJECT_SOURCE_DIR}/SDL2_image-devel-2.0.2-VC/SDL2_image-2.0.2/lib/x64)
    else()
      set(library_directory ${PROJECT_SOURCE_DIR}/SDL2_image-devel-2.0.2-VC/SDL2_image-2.0.2/lib/x86)
    endif()
    set(SDL2_IMAGE_LIBRARIES ${library_directory}/SDL2_image.lib)
    set(SDL2_IMAGE_RUNTIME_LIBRARIES ${library_directory}/SDL2_image.dll)
    list(APPEND SDL2_IMAGE_RUNTIME_LIBRARIES ${library_directory}/zlib1.dll)
    list(APPEND SDL2_IMAGE_RUNTIME_LIBRARIES ${library_directory}/libtiff-5.dll)
    list(APPEND SDL2_IMAGE_RUNTIME_LIBRARIES ${library_directory}/libpng16-16.dll)
    list(APPEND SDL2_IMAGE_RUNTIME_LIBRARIES ${library_directory}/libjpeg-9.dll)
    #message("SDL 2 image libraries ${SDL2_IMAGE_LIBRARIES}")
    #message("SDL 2 image runtime libraries ${SDL2_IMAGE_RUNTIME_LIBRARIES}")
endif()

# SDL 2.x ttf.
if (${IDLIB_CXX_COMPILER_ID} EQUAL ${IDLIB_CXX_COMPILER_ID_MSVC})
    download_and_unpack("https://www.libsdl.org/projects/SDL_ttf/release/SDL2_ttf-devel-2.0.14-VC.zip"
                        "${PROJECT_SOURCE_DIR}/SDL2_ttf-devel-2.0.14-VC.zip"
                        "${PROJECT_SOURCE_DIR}/SDL2_ttf-devel-2.0.14-VC")
    set(SDL2_TTF_INCLUDE_DIRS ${PROJECT_SOURCE_DIR}/SDL2_ttf-devel-2.0.14-VC/SDL2_ttf-2.0.14/include)
    #message("SDL 2 ttf include directories ${SDL2_TTF_INCLUDE_DIRS}")
    if (${IDLIB_PLATFORM_ID} EQUAL ${IDLIB_PLATFORM_ID_X64})
      set(library_directory ${PROJECT_SOURCE_DIR}/SDL2_ttf-devel-2.0.14-VC/SDL2_ttf-2.0.14/lib/x64)
    else()
      set(library_directory ${PROJECT_SOURCE_DIR}/SDL2_ttf-devel-2.0.14-VC/SDL2_ttf-2.0.14/lib/x86)
    endif()
    set(SDL2_TTF_LIBRARIES ${library_directory}/SDL2_ttf.lib)
    set(SDL2_TTF_RUNTIME_LIBRARIES ${library_directory}/SDL2_ttf.dll)
    list(APPEND SDL2_TTF_RUNTIME_LIBRARIES ${library_directory}/libfreetype-6.dll)
    #list(APPEND SDL2_TTF_RUNTIME_LIBRARIES ${library_directory}/zlib1.dll)
    #message("SDL 2 ttf libraries ${SDL2_TTF_LIBRARIES}")
    #message("SDL 2 ttf runtime libraries ${SDL2_TTF_RUNTIME_LIBRARIES}")
endif()

####################################################################################################################
# Download PhysFS on all systems.
download_and_unpack("https://icculus.org/physfs/downloads/physfs-3.0.0.tar.bz2"
                    "${PROJECT_SOURCE_DIR}/physfs-3.0.0.tar.bz2"
                    "${PROJECT_SOURCE_DIR}")
# Build static library.
set(PHYSFS_BUILD_STATIC TRUE)
# Do not build shared library.
set(PHYSFS_BUILD_SHARED FALSE)
# Do not build tests.
set(PHYSFS_BUILD_TEST FALSE)
add_subdirectory(${PROJECT_SOURCE_DIR}/physfs-3.0.0 EXCLUDE_FROM_ALL)
# Store header location and library target.
set(PHYSFS_LIBRARIES physfs-static)
set(PHYSFS_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/physfs-3.0.0/src)

# Include directory locations.
include_directories(${PROJECT_SOURCE_DIR}/src)
# Determine source files and compile them as C++.
file(GLOB_RECURSE SOURCE_FILES ${PROJECT_SOURCE_DIR}/src/*.cpp)
# Determine header files.
file(GLOB_RECURSE HEADER_FILES ${PROJECT_SOURCE_DIR}/src/*.hpp)

# Define compilation output.
set(idlib-game-engine-library-runtime-libraries)
list(APPEND idlib-game-engine-library-runtime-libraries ${SDL2_RUNTIME_LIBRARIES} ${SDL2_IMAGE_RUNTIME_LIBRARIES} ${SDL2_MIXER_RUNTIME_LIBRARIES} ${SDL2_TTF_RUNTIME_LIBRARIES})

add_library(idlib-game-engine-library STATIC ${SOURCE_FILES} ${HEADER_FILES})
set_property(TARGET idlib-game-engine-library PROPERTY runtime-libraries ${idlib-game-engine-library-runtime-libraries})

target_include_directories(idlib-game-engine-library PRIVATE "${PROJECT_SOURCE_DIR}/src")
target_include_directories(idlib-game-engine-library INTERFACE "${PROJECT_SOURCE_DIR}/src")

target_include_directories(idlib-game-engine-library INTERFACE "${SDL2_INCLUDE_DIRS}")
target_link_libraries(idlib-game-engine-library ${SDL2_LIBRARIES} ${PHYSFS_LIBRARIES})

target_include_directories(idlib-game-engine-library INTERFACE "${SDL2_IMAGE_INCLUDE_DIRS}")
target_link_libraries(idlib-game-engine-library ${SDL2_IMAGE_LIBRARIES})

target_include_directories(idlib-game-engine-library INTERFACE "${SDL2_MIXER_INCLUDE_DIRS}")
target_link_libraries(idlib-game-engine-library ${SDL2_MIXER_LIBRARIES})

target_include_directories(idlib-game-engine-library INTERFACE "${SDL2_TTF_INCLUDE_DIRS}")
target_link_libraries(idlib-game-engine-library ${SDL2_TTF_LIBRARIES})

target_include_directories(idlib-game-engine-library INTERFACE "${PHYSFS_INCLUDE_DIR}")
target_link_libraries(idlib-game-engine-library ${PHYSFS_LIBRARY})

target_link_libraries(idlib-game-engine-library glew)

target_link_libraries(idlib-game-engine-library idlib-color-library idlib-math-geometry-library idlib-signal-library idlib-filesystem-library idlib-library)

target_link_libraries(idlib-game-engine-library Threads::Threads)

# Link to libraries required by PhysFS on OS X.
if (APPLE)
    target_link_libraries(idlib-game-engine-library "-framework IOKit")
    target_link_libraries(idlib-game-engine-library "-framework Foundation")
endif()


IF(DOXYGEN_FOUND)
    ADD_CUSTOM_TARGET(idlib-game-engine-library-doc ${DOXYGEN_EXECUTABLE} COMMENT "build Idlib: Game Engine documentation")
ELSE(DOXYGEN_FOUND)
    MESSAGE(STATUS "Doxygen not found. You won't be able to build documentation.")
ENDIF(DOXYGEN_FOUND)
