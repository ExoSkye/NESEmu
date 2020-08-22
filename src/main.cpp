//
// Created by protobit on 21/08/2020.
//
#include "NES_CPU.hpp"

int main() {
    //TODO: ADD MAIN EMULATOR CODE HERE
    NES_CPU* cpu = new NES_CPU();
    byte* cartData = (byte*)malloc(sizeof(byte)*0xBFDF);
    cartData[0xBFDC] = 64;
    cartData[0xBFDD] = 64;
    cpu->mem->loadCartridge(cartData);
    cpu->startExec();
    cpu->executeInstruction(511);
}