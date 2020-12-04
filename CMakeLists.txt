cmake_minimum_required(VERSION 3.16)

project(ngs-cmake)



set(NGS_VERSION_MAJOR 1)
set(NGS_VERSION_MINOR 11)
set(NGS_VERSION_MICRO 0)
set(VERSION "${NGS_VERSION_MAJOR}.${NGS_VERSION_MINOR}.${NGS_VERSION_MICRO}")

project(ngs-cmake VERSION ${VERSION})

set(CMAKE_CXX_STANDARD 17)


include(CheckSymbolExists)
include(CheckCXXSymbolExists)
include(CheckLibraryExists)
include(CheckIncludeFile)
include(CheckIncludeFileCXX)
include(CheckFunctionExists)
include(CheckTypeSize)
include(GNUInstallDirs)


set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set(CMAKE_VISIBILITY_INLINES_HIDDEN ON)
set(CMAKE_VERBOSE_MAKEFILE ON)

# put all runtime targets (exe and dll) into bin
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/bin)

# put libraries into lib
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/lib)

# archives
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/lib)

if (MSVC)
    set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS}" "/NODEFAULTLIB")
endif ()


########################################################
#   options
#

option(BUILD_TESTS "build the tests" OFF)



########################################################
#   subdirectories
#

add_subdirectory(ngs-sdk)































