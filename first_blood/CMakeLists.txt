cmake_minimum_required(VERSION 3.10)
project(first_blood)

add_executable(first_blood source/main.cpp source/additional_algorithm_tests.cpp)
target_compile_features(first_blood PUBLIC cxx_std_14)
target_include_directories(first_blood
        PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
        PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include/third_party
        )
target_link_libraries(first_blood PRIVATE rambo)