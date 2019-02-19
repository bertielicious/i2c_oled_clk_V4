#include "config.h"
#include "set_page_address.h"
#include "OLED_write.h"

void clear_OLED(void)
{
    uchar row, seg;
   
     for (row = 0x00; row <0x08; row++)
    {
        set_page_address(0x78, 0x00, row);
        for (seg = 0; seg <0x80; seg++)
        {
            OLED_write(0x78, 0x40, 0x00);
        }
    }
}
