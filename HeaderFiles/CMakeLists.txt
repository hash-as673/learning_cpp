cmake_minimum_required(VERSION 3.10)
project(HeaderFiles LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(HeaderFiles Log.cpp Main.cpp Log.h)
