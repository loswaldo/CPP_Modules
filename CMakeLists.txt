cmake_minimum_required(VERSION 3.19)
project(CPP00)

set(CMAKE_CXX_STANDARD 98)

add_executable(CPP00.ex00
        cpp00/ex00/megaphone.cpp
        )
add_executable(CPP00.ex01
        cpp00/ex01/main.cpp
        cpp00/ex01/getters.cpp
        cpp00/ex01/setters.cpp
        )
