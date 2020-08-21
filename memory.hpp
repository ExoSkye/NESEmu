//
// Created by protobit on 21/08/2020.
//

#ifndef NESEMU_MEMORY_HPP
#define NESEMU_MEMORY_HPP
#include <stdint.h>

typedef int8_t byte;

class memory {
private:
    byte m_Memory[65535];
public:
    memory();
    byte& operator[](uint16_t index);
    byte* range(uint16_t start, uint16_t end);
};


#endif //NESEMU_MEMORY_HPP
