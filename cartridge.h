#pragma once

#include <iostream>
#include <cstdint>
#include <fstream>

#include "cartridge.h"

class Cartridge
{
    public:

        Cartridge(std::string filename);
        void PrintHeader();

    private:
        uint8_t header[16] = {0};

        uint8_t PRG_ROM1[16384] = {0};
        uint8_t PRG_ROM2[16384] = {0};
};