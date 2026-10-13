cmake_minimum_required(VERSION 3.16)
project(CPP VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(CPP main.cpp)

target_link_libraries(CPP PUBLIC fmt)
