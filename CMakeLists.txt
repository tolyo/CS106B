cmake_minimum_required(VERSION 2.8.4)
project(CS106B)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    lib/error.cpp
    lib/error.h
    lib/strlib.cpp
    lib/strlib.h
    lib/simpio.cpp
    lib/simpio.h
    lib/tokenscanner.h
    lib/tokenscanner.cpp
    lib/vector.h
    assignments/assignment1/countletters.cpp
)
include_directories(lib)

add_executable(CS106B ${SOURCE_FILES})