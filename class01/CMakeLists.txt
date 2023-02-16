cmake_minimum_required(VERSION 3.23)
project(class01)

set(CMAKE_CXX_STANDARD 14)

add_executable(Ex01 ex01.cpp ex01/Time.cpp ex01/Time.h)
add_executable(Ex02 ex02.cpp ex02/Figure.h ex02/Point.h ex02/Collection.h)
