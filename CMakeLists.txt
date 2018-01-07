cmake_minimum_required(VERSION 3.9)
project(CompositePattern)

set(CMAKE_CXX_STANDARD 11)

add_executable(CompositePattern main.cpp File.cpp File.h Entry.cpp Entry.h Directory.cpp Directory.h)