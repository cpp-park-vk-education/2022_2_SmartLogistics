cmake_minimum_required(VERSION 3.18.4)
project(SmartLogistics)

set(CMAKE_CXX_FLAGS "-Wall -Wpedantic -Werror")

file(GLOB SOURCE "./src/*.cpp")
file(GLOB INCLUDE_DIRS "include")

add_executable(${PROJECT_NAME} ${SOURCE})
target_include_directories(${PROJECT_NAME} PUBLIC ${INCLUDE_DIRS})

enable_testing()
add_subdirectory(test)