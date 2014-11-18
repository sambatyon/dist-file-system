cmake_minimum_required(VERSION 2.8.5)

project(distributed-file-system)

set(BIN_OUTPUT_DIR ${distributed-file-system_BINARY_DIR}/bin)
set(LIB_OUTPUT_DIR ${distributed-file-system_BINARY_DIR}/lib)

SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${BIN_OUTPUT_DIR})
SET(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${BIN_OUTPUT_DIR})
SET(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${LIB_OUTPUT_DIR})

add_subdirectory(src)
add_subdirectory(tests)
