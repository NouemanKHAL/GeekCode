cmake_minimum_required(VERSION 3.5.1)

project(geek-code)

set(EXEC geekcode)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

file(GLOB SOURCES src/*.cpp)

add_executable(${EXEC} ${SOURCES})