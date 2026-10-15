cmake_minimum_required(VERSION 3.16)

project(CPP LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(CPP main.cpp)
target_link_libraries(CPP PRIVATE fmt)

include(GNUInstallDirs)
install(TARGETS CPP
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
