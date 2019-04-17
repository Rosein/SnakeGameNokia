cmake_minimum_required(VERSION 3.10.0)

project(Todolist)

set(CMAKE_CXX_COMPILER "g++")
set(CMAKE_CXX_FLAGS "-std=c++17 ")

find_package(GTest REQUIRED)

#include_directories(${GTEST_INCLUDE_DIRS})
include_directories(include)

include_directories(googletest/googletest/include)
link_directories(googletest/googletest/lib)

include_directories(googletest/googlemock/include)
link_directories(googletest/googlemock/lib)

file(GLOB CLASSES "src/*.cpp")
file(GLOB TESTG "ut/*.cpp")

set(SOURCES ${CLASSES} ${TESTG})

add_executable(${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME}  gtest -lgmock -lgtest_main   -lgtest -lpthread )
