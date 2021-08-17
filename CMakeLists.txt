cmake_minimum_required(VERSION 3.19)

project(hello VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_AUTOMOC ON)

find_package(Qt5 COMPONENTS Core REQUIRED)

add_compile_options(-Wall -Wextra -pedantic -Werror)

add_executable(hello main.cpp)

target_link_libraries(hello PRIVATE Qt5::Core)
