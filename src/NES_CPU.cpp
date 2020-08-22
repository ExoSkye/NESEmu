//
// Created by protobit on 21/08/2020.
//

#include "NES_CPU.hpp"

NES_CPU::NES_CPU() {
    stk = new NES_Stack(mem);
}

void NES_CPU::executeInstruction(uint32_t instruction) {
    getInstruction(utils::getBits<uint32_t, uint8_t>(instruction,8,0));
    r_ProgramCounter++;
}

NES_CPU::m_InstructionStruct NES_CPU::getInstruction(uint8_t instructionOpCode) {
    switch (instructionOpCode) {

    }
}
