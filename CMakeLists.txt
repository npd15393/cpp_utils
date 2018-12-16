cmake_minimum_required(VERSION 3.00)
project(utils)

set(CMAKE_CXX_STANDARD 14)

add_executable(utils main.cpp Heap.h tree_node.h list.h)