cmake_minimum_required(VERSION 3.30)
project(Movie)

set(CMAKE_CXX_STANDARD 20)

add_executable(Movie main.cpp utils/creatMovie.cpp utils/operator.cpp)
