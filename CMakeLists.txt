cmake_minimum_required(VERSION 3.29.5)


add_executable(test_cmake main.cpp   "src/kbd.cpp" "src/gpu.cpp" "src/disk.cpp" "src/ram.cpp" "src/cpu.cpp")

target_include_directories(test_cmake PUBLIC ${MY_INCLUDE_DIR})

