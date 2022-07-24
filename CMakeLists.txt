cmake_minimum_required(VERSION 3.22)
project(27_3)

set(CMAKE_CXX_STANDARD 14)

add_executable(27_3 src/main.cpp include/person.h src/person.cpp include/director.h src/director.cpp include/manager.h src/manager.cpp include/employee.h src/employee.cpp)
target_include_directories(27_3 PUBLIC include)