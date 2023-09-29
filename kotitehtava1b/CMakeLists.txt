cmake_minimum_required(VERSION 3.5)

project(kotitehtava1b LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(kotitehtava1b main.cpp)

install(TARGETS kotitehtava1b
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
