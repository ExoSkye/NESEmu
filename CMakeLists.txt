cmake_minimum_required(VERSION 3.10 FATAL_ERROR)
project(NESEmu)
add_executable(NESEmu main.cpp NES_Memory.cpp NES_Memory.hpp NES_CPU.cpp NES_CPU.hpp NES_Stack.hpp)