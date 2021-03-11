cmake_minimum_required(VERSION 3.19)

project(hello VERSION 0.1 LANGUAGES CXX)

add_compile_options(-std=c++14 -Wall -Wextra -pedantic -Werror)

add_executable(hello main.cpp)
