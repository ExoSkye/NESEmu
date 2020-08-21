//
// Created by protobit on 21/08/2020.
//

#ifndef NESEMU_NES_CPU_HPP
#define NESEMU_NES_CPU_HPP
#include <stdint.h>
#include "NES_Memory.hpp"
#include "NES_Stack.hpp"
class NES_CPU {
private:
    int16_t r_ProgramCounter;
    byte r_Accumulator;
    byte r_XReg;
    byte r_YReg;
    byte r_StatusRegister;
    byte r_StackPointer;
public:
    NES_CPU();
    NES_Memory* mem;
    NES_Stack stk;
};


#endif //NESEMU_NES_CPU_HPP
