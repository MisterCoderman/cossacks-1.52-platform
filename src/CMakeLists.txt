# Cossacks: The Last Stand (v1.52)
# Cross-platform CMake build system
# Supports: Windows (MSVC, 32/64-bit), macOS (Clang), Linux (GCC)

cmake_minimum_required(VERSION 3.16)
project(Cossacks VERSION 1.5.2 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_C_STANDARD 11)

# Platform detection
if(WIN32)
    message(STATUS "Building for Windows")
    add_definitions(-D_WIN32 -DWIN32)
    if(CMAKE_SIZEOF_VOID_P EQUAL 8)
        message(STATUS "  Architecture: x64")
        set(COSSACKS_ARCH "x64")
        add_definitions(-D_WIN32_WINNT=0x0601 -DWINVER=0x0601)  # Windows 7
    else()
        message(STATUS "  Architecture: x86")
        set(COSSACKS_ARCH "x86")
        add_definitions(-D_WIN32_WINNT=0x0501 -DWINVER=0x0501)  # Windows XP
    endif()
elseif(APPLE)
    message(STATUS "Building for macOS")
    add_definitions(-DPLATFORM_MACOS)
    set(COSSACKS_ARCH "universal")
elseif(UNIX)
    message(STATUS "Building for Linux")
    add_definitions(-DPLATFORM_LINUX)
    set(COSSACKS_ARCH ${CMAKE_SYSTEM_PROCESSOR})
endif()

# Global define: use SDL2 instead of DirectDraw
add_definitions(-DNODDRAW)

# Find SDL2 dependencies
if(WIN32)
    # Use bundled SDL2 on Windows
    set(SDL2_INCLUDE_DIR "${CMAKE_SOURCE_DIR}/Main executable/sdl/include")
    set(SDL2_MIXER_INCLUDE_DIR "${CMAKE_SOURCE_DIR}/Main executable/SDL2_mixer/include")
    set(SDL2_LIB_DIR "${CMAKE_SOURCE_DIR}/Main executable/sdl/lib/${COSSACKS_ARCH}")
    set(SDL2_MIXER_LIB_DIR "${CMAKE_SOURCE_DIR}/Main executable/SDL2_mixer/lib/${COSSACKS_ARCH}")
else()
    # Use system SDL2 on macOS/Linux (install via: brew install sdl2 sdl2_mixer)
    find_package(PkgConfig REQUIRED)
    pkg_check_modules(SDL2 REQUIRED sdl2)
    pkg_check_modules(SDL2_MIXER REQUIRED SDL2_mixer)
endif()

# Platform abstraction layer (shared by all targets)
add_subdirectory(platform)

# Build order matches dependency chain:
# 1. CommCore.lib (static, no deps)
# 2. Main executable (dmcr)
# 3. IChat.dll (depends on dmcr)       — optional, GameSpy dead
# 4. IntExplorer.dll (depends on dmcr)  — optional, GameSpy dead

add_subdirectory("CommCore library")
add_subdirectory("Main executable")

# Optional DLL modules (GameSpy-dependent, not needed for LAN)
option(BUILD_ICHAT "Build IChat library (requires GameSpy servers)" OFF)
option(BUILD_INTEXPLORER "Build IntExplorer library" OFF)

if(BUILD_ICHAT)
    add_subdirectory("IChat library")
endif()
if(BUILD_INTEXPLORER)
    add_subdirectory("IntExplorer library")
endif()
