#pragma once

#include <cstdint>
#include <array>

class Bus
{
    public:
        // Constructors
        Bus();
        // Member Functions
        // Reads and returns value from address determined by mapper (eventually)
        uint8_t read(uint16_t address);
        // Writes to address. Behaviour determined by mapper (also eventually)
        uint8_t write(uint16_t address, uint8_t value);

    private:
        uint8_t dataBus;
        uint16_t addressBus;
        std::array<uint8_t, 2048> ram;
};