cmake_minimum_required(VERSION 3.22)
project(modmover)

set(CMAKE_CXX_STANDARD 20)

add_executable(modmover src/main.cpp
        include/Parser.h
        include/Config.h
        src/Parser.cpp
        include/FileMover.h
        src/FileMover.cpp
)

install(TARGETS modmover DESTINATION /usr/local/bin)