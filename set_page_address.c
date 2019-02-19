#include "config.h"
#include "OLED_write.h"

void set_page_address(uchar OLED_addr, uchar ctrl_byte, uchar data_byte)
{
    data_byte = 0xb0|data_byte;
    OLED_write(OLED_addr, ctrl_byte, data_byte);    
    
}
