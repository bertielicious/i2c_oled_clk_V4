#include "config.h"
#include "i2c_start.h"
#include "i2c_write.h"
#include "i2c_stop.h"
void OLED_write(uchar OLED_addr, uchar ctrl_byte, uchar data_byte)  // ctrl_byte = 0x40 data or 0x00 command
{
    i2c_start();
    i2c_write(OLED_addr);
    i2c_write(ctrl_byte);
    i2c_write(data_byte);
    i2c_stop();
}
