cmake_minimum_required(VERSION 4.2)
project(AutoClicker)

set(CMAKE_CXX_STANDARD 20)

if(MINGW)
    set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -static-libgcc -static-libstdc++ -static")
endif()

add_executable(AutoClicker main.cpp
        src/auto_clicker/clicker_manager.cpp
        src/auto_clicker/clicker_manager.h
        src/loop/loop_manager.cpp
        src/loop/loop_manager.h
        src/app/app_manager.cpp
        src/app/app_manager.h
)