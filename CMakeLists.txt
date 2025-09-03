
cmake_minimum_required(VERSION 3.29.5)
project("test_cmake" VERSION 1.0)


set(CMAKE_CXX_STANDARD 14 )

file(GLOB
            CPP_SOURCES "*src/*.cpp")

include_directories("${PROJECT_SOURCE_DIR}/include")

add_executable(${PROJECT_NAME} ${CPP_SOURCES})