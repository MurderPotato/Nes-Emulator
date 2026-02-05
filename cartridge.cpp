#include <iostream>
#include <cstdint>
#include <fstream>

#include "cartridge.h"

Cartridge::Cartridge(std::string filename)
{
    std::ifstream file(filename, std::ios::binary);
    // read file header
    file.read((char*)header, sizeof(header));
    // read trainer data
    if (header[6] &= 0x04)
    {
        // TODO
        // will eventually read trainer data
        // always 512 bytes long
    }
    // read PRG_ROM
    if (header[4] == 1)
    {
        file.read((char*)PRG_ROM1, sizeof(PRG_ROM1));
    }
    // read CHR_ROM
    if (header[5] == 1)
    {
        // TODO
    }
}

// DEBUGGING #################################################

void Cartridge::PrintHeader()
{
    for (int i = 0; i < 16; i++)
    { 
        std::cout << (int)header[i] << std::endl;
    }
}
