cmake_minimum_required(VERSION 3.14)
project(ds)

set(CMAKE_CXX_STANDARD 14)

add_executable(ds main.cpp LinerList/SqList.h LinerList/LinerList.h LinerList/LinkList.h)