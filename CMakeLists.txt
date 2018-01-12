if("${CMAKE_SOURCE_DIR}" STREQUAL "${CMAKE_BINARY_DIR}")
    message(FATAL_ERROR "
        Error:  In-source builds is not allowed.
                You should create a separate directory for build files.
        ")
endif()

cmake_minimum_required(VERSION 3.1 FATAL_ERROR)
set(CMAKE_CXX_STANDARD 11)

project(cppp5 VERSION 0.1.0 LANGUAGES CXX)

# include path
include_directories("${CMAKE_SOURCE_DIR}/src")


# output directory
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# uitl
include(${CMAKE_SOURCE_DIR}/cmake/util.cmake)

print_vars(
    CMAKE_BINARY_DIR
    CMAKE_ARCHIVE_OUTPUT_DIRECTORY
    CMAKE_LIBRARY_OUTPUT_DIRECTORY
    CMAKE_RUNTIME_OUTPUT_DIRECTORY
    )

# set(UTIL_SOURCES "")
# glob_util_srcs(UTIL_SOURCES)
# print_vars(UTIL_SOURCES)

add_subdirectory(cmake)