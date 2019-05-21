cmake_minimum_required(VERSION 3.10)
project(rambo)

add_library(rambo INTERFACE )
target_include_directories(rambo INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)


