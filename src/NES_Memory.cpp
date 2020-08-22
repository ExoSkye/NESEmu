//
// Created by protobit on 21/08/2020.
//

#include "NES_Memory.hpp"
#include <alloca.h>
#include <string.h>

NES_Memory::NES_Memory() {
    memset(m_Memory, 0, 65535*sizeof(byte));
}

byte &NES_Memory::operator[](uint16_t index) {
    return at(index);
}

byte *NES_Memory::range(uint16_t start, uint16_t end) {
    byte* range = (byte*)alloca(sizeof(byte) * end - start);
    memcpy(range, &m_Memory[start], sizeof(byte) * end - start);
    return range;
}

byte &NES_Memory::at(uint16_t index) {
    byte& zero = *(new byte);
    if (index <= 0x07FF) {
        return m_Memory[index];
    }
    else if (index <= 0x0FFF) {
        return m_Memory[index-0x07FF];
    }
    else if (index <= 0x17FF) {
        return m_Memory[index-0x0FFF];
    }
    else if (index <= 0x1FFF) {
        return m_Memory[index-0x17FF];
    }
    else if (index <= 0x2007) {
        return zero; //TODO: ADD PPU
    }
    else if (index <= 0x3FFF) {
        return zero; //TODO: ADD REPEATING PPU REGISTERS
    }
    else if (index <= 0x4017) {
        return zero; //TODO: ADD APU AND RESEARCH I/O REGISTERS
    }
    else if (index <= 0x401F) {
        return zero; //TODO: CPU TEST MODE
    }
    else if (index <= 0xFFFF) {
        return zero; //TODO: ADD CARTRIDGE FUNCTIONALITY
    }
    else {
        return zero;
    }
}
