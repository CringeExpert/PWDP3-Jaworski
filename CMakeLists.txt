cmake_minimum_required(VERSION 3.28)

project(CPP LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# add_executable(temp temp.cpp)

add_executable(task3_1 src_list3/task1.cpp)
add_executable(task3_2 src_list3/task2.cpp)
add_executable(task3_4 src_list3/task4.cpp)
add_executable(task3_5 src_list3/task5.cpp)
add_executable(task3_6 src_list3/task6.cpp)

add_executable(task4_1 src_list4/task1.cpp)
add_executable(task4_2 src_list4/task2.cpp)
add_executable(task4_3a src_list4/task3a.cpp)
add_executable(task4_3b src_list4/task3b.cpp)

add_executable(task5_1 src_list5/task1.cpp)
add_executable(task5_2 src_list5/task2.cpp)
