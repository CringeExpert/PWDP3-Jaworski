cmake_minimum_required(VERSION 3.28)

project(CPP LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_executable(CPP main.cpp)
find_package(fmt REQUIRED)
target_link_libraries(CPP PUBLIC fmt::fmt)

