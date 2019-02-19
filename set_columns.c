#include "config.h"
#include "OLED_write.h"
void set_columns (uchar column_mode, uchar lo_col_addr, uchar hi_col_addr)
{
    OLED_write(0x78, 0x00, column_mode);
    OLED_write(0x78, 0x00, lo_col_addr);
    OLED_write(0x78, 0x00, hi_col_addr);
}
