cmake_minimum_required(VERSION 4.0)
project(modmover)

set(CMAKE_CXX_STANDARD 20)

add_executable(modmover src/main.cpp
        include/Parser.h
        include/Config.h
        src/Parser.cpp
        include/FileMover.h
        src/FileMover.cpp
)
