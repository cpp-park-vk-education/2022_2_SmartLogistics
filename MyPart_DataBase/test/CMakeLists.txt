cmake_minimum_required(VERSION 3.18.4)
project(testing)

set(CMAKE_EXE_LINKER_FLAGS "-coverage -lgcov")

file(GLOB SOURCE test.cpp)
file(GLOB INCLUDE_DIRS "../include")
find_package(GTest REQUIRED)

add_executable(${PROJECT_NAME} ${SOURCE})
target_include_directories(${PROJECT_NAME} PUBLIC ${INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} GTest::gtest_main)

add_test(
    NAME ${PROJECT_NAME}
     COMMAND ${PROJECT_NAME}
)