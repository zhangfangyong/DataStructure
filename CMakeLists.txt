cmake_minimum_required(VERSION 3.14)
project(DataStructure)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(Unit_1)
add_subdirectory(Unit_2)

add_executable(Test Test.cpp)