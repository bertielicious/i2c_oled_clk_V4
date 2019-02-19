#include "config.h"
int stretch (int x)
{
    x = (x & 0xF0)<<4 | (x & 0x0F);
    x = (x<<2 | x) & 0x3333;
    x = (x<<1 | x) & 0x5555;
    return x | x<<1;
}
