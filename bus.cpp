
#include <cstdint>

#include "bus.h"

uint8_t Bus::read(uint16_t address)
{
    if (address < 0x2000) // Internal RAM
    {
        return ram[address % 0x800];
    }
    else if (address < 0x4000) // PPU Registers
    {
         
    }
    else if (address < 0x4018) // APU and IO Registers
    {

    }
    else if (address < 0x4020) // CPU Test Mode (placeholder)
    {

    }
    else // Unmapped memory. Functionality determined by mapper
    {

    }
    return 0;
}

uint8_t Bus::write(uint16_t address, uint8_t value)
{
    return 0;
}