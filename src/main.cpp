//
// Created by protobit on 21/08/2020.
//
#include "NES_CPU.hpp"

int main() {
    //TODO: ADD MAIN EMULATOR CODE HERE
    NES_CPU* cpu = new NES_CPU();
    cpu->executeInstruction(511);
}