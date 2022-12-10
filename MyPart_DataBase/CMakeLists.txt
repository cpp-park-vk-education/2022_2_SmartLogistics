cmake_minimum_required(VERSION 3.18.4)
project(SmartLogistics)


set(CMAKE_LIBRARY_PATH "./lib")
include_directories("libmysql.lib")



set(CMAKE_CXX_FLAGS "-Wall -Wpedantic -Werror")

file(GLOB SOURCE "./src/logic.cpp")

file(GLOB INCLUDE_DIRS "include")




add_executable(${PROJECT_NAME} ${SOURCE})
target_link_libraries(${PROJECT_NAME} PUBLIC mysqlclient)

enable_testing()
add_subdirectory(test)