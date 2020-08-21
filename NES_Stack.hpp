//
// Created by protobit on 21/08/2020.
//

#ifndef NESEMU_NES_STACK_HPP
#define NESEMU_NES_STACK_HPP
#include "NES_Memory.hpp"
#include <cstring>

class NES_Stack {
private:
    NES_Memory* m_MemoryPTR;
    int16_t m_stackPointer = 0x0100;
    void m_pushDown() {
        memcpy(&(m_MemoryPTR->at(0x100)),&(m_MemoryPTR->at(0x101)),sizeof(byte)*0xFE);
    };
public:
    explicit NES_Stack(NES_Memory* mem) {
        m_MemoryPTR = mem;
    }
    struct stackReturn {
        byte newStackPtr;
        byte returnValue;
    };
    stackReturn pop() {
        stackReturn ret{};
        if (m_stackPointer-1 != 0x00FF) {
            m_stackPointer--;
            byte &firstElement = m_MemoryPTR->at(0x0100);
            ret.returnValue = firstElement;
            firstElement = 0x0;
            m_pushDown();
        }
        else {
            ret.returnValue = 0x0;
        }
        ret.newStackPtr = m_stackPointer;
        return ret;
    }

    stackReturn push(byte toBePushed) {
        stackReturn ret{};
        m_stackPointer++;
        m_MemoryPTR->at(m_stackPointer) = toBePushed;
        ret.returnValue = toBePushed;
        ret.newStackPtr = m_stackPointer;
        return ret;
    }
};


#endif //NESEMU_NES_STACK_HPP
