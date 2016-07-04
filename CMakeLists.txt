cmake_minimum_required(VERSION 3.3)
project(Solution)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Divide.cpp leastDoubleBasePalindrom.cpp permutation_my.cpp opermutation_standard.cpp STL_nextPermutation.cpp subset.cpp)
add_executable(Solution ${SOURCE_FILES})