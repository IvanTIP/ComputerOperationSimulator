cmake_minimum_required(VERSION 3.20)

add_executable(ComputerOperationSimulator main.cpp ${MY_INCLUDE_DIR}/cpu.h ${MY_INCLUDE_DIR}/gpu.h ${MY_INCLUDE_DIR}/kbd.h ${MY_INCLUDE_DIR}/rum.h)

target_include_directories(ComputerOperationSimulator PUBLIC ${MY_INCLUDE_DIR})