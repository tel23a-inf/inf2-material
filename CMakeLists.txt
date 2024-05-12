cmake_minimum_required(VERSION 3.10)

project("Informatik 2 - TEL23A")

include(tools/cmakehelpers.cmake)

Include(FetchContent)

FetchContent_Declare(
        Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG        v3.5.4 # or a later release
        FIND_PACKAGE_ARGS
)

FetchContent_MakeAvailable(Catch2)

include(CTest)
include(Catch)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_COMPILE_WARNING_AS_ERROR ON)
set(CMAKE_CXX_STANDARD 20)

add_subdirectory(src)

cmake_path(SET GITIGNORE_FILE NORMALIZE "${CMAKE_BINARY_DIR}/.gitignore")
file(WRITE ${GITIGNORE_FILE} "*")
