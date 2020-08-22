//
// Created by protobit on 21/08/2020.
//

#ifndef NESEMU_NES_MEMORY_HPP
#define NESEMU_NES_MEMORY_HPP
#include <stdint.h>

typedef int8_t byte;

class NES_Memory {
private:
    byte m_Memory[65535];
public:
    NES_Memory();
    byte& operator[](uint16_t index);
    byte& at(uint16_t index);
    byte* range(uint16_t start, uint16_t end);
    void loadCartridge(byte* cartridgeData);
};


#endif //NESEMU_NES_MEMORY_HPP
