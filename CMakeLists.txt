cmake_minimum_required(VERSION 3.14)
project(DataStructure)

set(CMAKE_CXX_STANDARD 14)

include_directories(LinerList)

add_executable(DataStructure
        LinerList/LinerList.h
        LinerList/LinkList.h
        LinerList/SqList.h
        main.cpp)
