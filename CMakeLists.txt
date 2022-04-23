cmake_minimum_required(VERSION 3.18)
project(Snake)

set(CMAKE_CXX_STANDARD 14)

add_executable(Snake main.cpp Board.cpp Board.h Cell.cpp Cell.h Snake.cpp Snake.h)
