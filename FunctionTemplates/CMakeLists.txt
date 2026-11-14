cmake_minimum_required(VERSION 3.10)
project(FunctionTemplates LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(FunctionTemplates main.cpp add.h)
