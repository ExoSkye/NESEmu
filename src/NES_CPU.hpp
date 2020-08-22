//
// Created by protobit on 21/08/2020.
//

#ifndef NESEMU_NES_CPU_HPP
#define NESEMU_NES_CPU_HPP
#include <stdint.h>
#include <string>
#include <vector>
#include "NES_Memory.hpp"
#include "NES_Stack.hpp"
#include "utility.hpp"

class NES_CPU {
private:
    int16_t r_ProgramCounter;
    byte r_Accumulator;
    byte r_XReg;
    byte r_YReg;
    byte r_StatusRegister;
    byte r_StackPointer;
    // ALL 6502 Instructions
    enum m_Instruction { noInst, BRK, BPL, JSR, BMI, RTI, BVC, RTS, BVS, BCC, LDY, BCS, CPY, BNE, CPX, BEQ, ORA, AND, EOR, ADC, STA, LDA, CMP, SBC, LDX, BIT, STY, ASL, ROL, LSR, ROR, STX, DEC, INC, PHP, CLC, PLP, SEC, PHA, CLI, PLA, SEI, DEY, TYA, TAY, CLV, INY, CLD, INX, SED, TXA, TXS, TAX, TSX, DEX, NOP, JMP };
    enum m_AddressingMode { noAddress, A, absolute, absX, absY, imm, implied, ind, Xind, indY, rel, zpg, zpgX, zpgY };
    struct m_InstructionStruct {
        m_Instruction inst;
        m_AddressingMode addressingMode;
    };
    m_InstructionStruct getInstruction(uint8_t instructionOpCode);
public:
    NES_CPU();
    void executeInstruction(uint32_t instruction);
    NES_Memory* mem;
    NES_Stack* stk;
};


#endif //NESEMU_NES_CPU_HPP
