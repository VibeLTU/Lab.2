cmake_minimum_required(VERSION 3.29.3)

set(This Main_CMakeLists)

project(Program)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

add_subdirectory(googletest)

set(Headers 
    Struktura.h
)

set(Source 
    main.cpp
    Funkcijos.cpp
)

add_library(${This} STATIC ${Source} ${Headers})

add_subdirectory(Unit_Tests)
add_executable(Program main.cpp Funkcijos.cpp)
