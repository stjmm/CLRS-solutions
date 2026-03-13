cmake_minimum_version(VERSION 3.20)

projects(CLRS_Solutions CXX)

set(CMAKE_SET_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wpedantic")

include_directories(include)

file(GLOB_RESOURCE "src/*.cpp")

foreach(SOURCE_FILE ${SOURCES})
    get_filename_component(TARGET_NAME ${SOURCE_FILE} NAME_WE)
    
    add_executable(${TARGET_NAME} ${SOURCE_FILE})
endforeach()
