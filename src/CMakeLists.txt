cmake_minimum_required(VERSION 3.20)


add_executable(ex2_2 main.cpp ${MY_INCLUDE_DIR}/cpu.h cpu.cpp ${MY_INCLUDE_DIR}/ram.h ram.cpp ${MY_INCLUDE_DIR}/disk.h disk.cpp ${MY_INCLUDE_DIR}/gpu.h gpu.cpp ${MY_INCLUDE_DIR}/kbd.h kbd.cpp)
target_include_directories(ex2_2 PUBLIC ${MY_INCLUDE_DIR})