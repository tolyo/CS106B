cmake_minimum_required(VERSION 3.3)
project(0_Warmup)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    Warmup.cpp)

add_executable(0_Warmup ${SOURCE_FILES})