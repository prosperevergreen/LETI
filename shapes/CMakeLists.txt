cmake_minimum_required(VERSION 3.10)
project(shapes)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O0")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O0")

add_executable(shapes main.cpp shapes.h square.cpp square.h shapes.cpp list.h SquareT.cpp SquareT.h text.cpp text.h SquareS.cpp SquareS.h iterator.h listException.h listEmptyError.h listIteratorException.h)