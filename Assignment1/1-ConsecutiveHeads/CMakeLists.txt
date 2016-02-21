cmake_minimum_required(VERSION 3.3)
project(cs106b)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES ConsecutiveHeads.cpp)

add_executable(cs106b ${SOURCE_FILES})
