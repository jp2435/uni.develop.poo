cmake_minimum_required(VERSION 3.23)
project(class05)

set(CMAKE_CXX_STANDARD 14)

add_executable(Ex01 ex01.cpp)
add_executable(Ex02 ex02.cpp ex02/Person.cpp ex02/Person.h ex02/Date.h ex02/Date.cpp ex02/Student.h ex02/Student.cpp ex02/Fellow.h ex02/Fellow.cpp)