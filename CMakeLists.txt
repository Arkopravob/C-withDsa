cmake_minimum_required(VERSION 3.31)
project(c__learn)

set(CMAKE_CXX_STANDARD 20)

add_executable(c__learn main.cpp
        basics/Hello.cpp
        basics/Hello.h
        basics/Name.cpp
        basics/ifelseDemo.cpp
        basics/Operator.cpp
        basics/sum.cpp
        basics/avg.cpp
        basics/demo.cpp
)
