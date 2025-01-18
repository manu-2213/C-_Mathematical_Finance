cmake_minimum_required(VERSION 3.28)
project(Mathematical_Finance)

set(CMAKE_CXX_STANDARD 17)

add_executable(C2 cpprecap/cpprecap_C2.cpp)
add_executable(C3 cpprecap/cpprecap_C3.cpp)
add_executable(EC2C3 exercises/C2&C3.cpp)
