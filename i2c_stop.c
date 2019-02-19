
#include <pic16f1459.h>

void i2c_stop(void)
{
    SSPCON2bits.PEN = 1;        // initiate Stop condition on SDA and SCL pins. Auto cleared in hardware
    while(SSPCON2bits.PEN == 1); // wait for Stop condition to complete
}
