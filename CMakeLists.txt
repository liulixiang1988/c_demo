cmake_minimum_required(VERSION 3.3)
project(c_demo)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.c)
add_executable(c_demo ${SOURCE_FILES})