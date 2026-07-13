cmake_minimum_required(VERSION 4.2)
project(AutoClicker)

set(CMAKE_CXX_STANDARD 20)

add_executable(AutoClicker main.cpp
        src/auto_clicker/clicker_manager.cpp
        src/auto_clicker/clicker_manager.h
        src/program_while/while_manager.cpp
        src/program_while/while_manager.h)
