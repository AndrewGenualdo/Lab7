cmake_minimum_required(VERSION 3.27)
project(Lab7)

set(CMAKE_CXX_STANDARD 17)

add_executable(Lab7 lab7.cpp
        encryption.cpp
        encryption.h
        method1.cpp
        method1.h
        method2.cpp
        method2.h)
