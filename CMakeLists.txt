cmake_minimum_required(VERSION 4.2)
project(CPP_BASICS)

set(CMAKE_CXX_STANDARD 20)

add_executable(CPP_BASICS

        hello_world.cpp
        Arrays.cpp)

configure_file(inputf.in inputf.in COPYONLY)
configure_file(outputf.in outputf.in COPYONLY)