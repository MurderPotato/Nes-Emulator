#pragma once

#include <cstdint>
#include <array>

#include "bus.h"

class Cpu
{
    public:
        // Constructors
        Cpu(Bus &bus);

        // Member Functions
        void clock_cpu();
        // clears opcode, addresss, and cycle variable to reset state
        void clear_state();


    private:
        // PROGRAM VARIABLES
        // Latches
        uint8_t opcode;
        uint8_t value;
        uint16_t address;
        bool addressReady;
        // Cycle Counters
        int cyclesSincePower;
        int masterClock;
        int localClock;
        // SYSTEM VARIABLES
        // Registers
        uint8_t A;
        uint8_t X;
        uint8_t Y;
        // Program Counter
        uint16_t PC;
        // Stack Pointer
        uint8_t SP;
        // Status Register
        uint8_t P;
        // System Bus
        Bus &bus;
};