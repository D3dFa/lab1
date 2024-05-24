cmake_minimum_required(VERSION 3.22)
project(lab1)


add_executable(lab1
    src/main.cpp
    src/QuadraticEquation.cpp
)


target_include_directories(lab1 PRIVATE include)
