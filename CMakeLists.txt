cmake_minimum_required(VERSION 3.24)
project(prog3)

set(CMAKE_CXX_STANDARD 23)
include_directories(${CMAKE_SOURCE_DIR}/headers)

file(GLOB SOURCES "src/*")
add_executable(prog3 ${SOURCES})
