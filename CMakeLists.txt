cmake_minimum_required(VERSION 3.10 FATAL_ERROR)
project(NESEmu)
add_executable(NESEmu src/main.cpp src/NES_Memory.cpp src/NES_Memory.hpp src/NES_CPU.cpp src/NES_CPU.hpp src/NES_Stack.hpp src/utility.hpp src/NES_decodeImpl.cpp)