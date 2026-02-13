
#include <cstdint>

#include "cpu.h"
#include "bus.h"
#include "opcodes.h"

void Cpu::fetch_opcode()
{
    opcode = bus.read(PC);
    PC++;
}

void Cpu::fetch_address()
{
    ops::pointerTable[opcode].fetchAddress(*this);
}

void Cpu::execute_instruction()
{
    ops::pointerTable[opcode].execute(*this);
}

void Cpu::clock_cpu()
{
    if (opcodeReady != true)
    {
        fetch_opcode();
    }
    else if (addressReady != true)
    {
        fetch_address();
    }
    else
    {
        execute_instruction();
    }
}

// Clears the state of the cpu to reset for the next loop
void Cpu::clear_state()
{
    opcode = 0;
    address = 0;
    localClock = 0;
    opcodeReady = false;
    addressReady = false;
}