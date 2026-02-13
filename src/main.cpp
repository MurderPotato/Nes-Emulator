#include <stdio.h>
#include "cartridge.h"

int main() 
{
    Cartridge cart("nestest.nes");
    cart.PrintHeader();
    return 0;

}