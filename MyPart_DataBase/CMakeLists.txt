cmake_minimum_required(VERSION 3.18.4)

project(HardCarry)

set(SOURCE_FILES
        ./src/dbhelper.cpp
   )

set(INCLUDE_DIR
        ./include
   )

add_library(dbhelper STATIC ${SOURCE_FILES})

set(CXX_PROPERTIES
        CXX_STANDARD 20
   )

target_include_directories(dbhelper PUBLIC ${INCLUDE_DIR})

set_target_properties(dbhelper PROPERTIES ${CXX_PROPERTIES})