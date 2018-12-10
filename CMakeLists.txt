cmake_minimum_required(VERSION 3.13)
project(c__)

set(CMAKE_CXX_STANDARD 14)

add_executable(
    c__
    main.cpp
    lessons/tip.cpp lessons/tip.h
    lessons/temperature.cpp lessons/temperature.h
    lessons/bmi.cpp lessons/bmi.h
)