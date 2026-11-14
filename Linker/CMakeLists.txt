cmake_minimum_required(VERSION 3.10)
project(Linker LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Linker Linker.cpp Log.cpp)
