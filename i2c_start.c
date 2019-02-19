
#include "config.h"
void i2c_start (void)
{
    SCL = 1;                    // i2c bus idle condition
    SDA = 1;
    SSPCON2bits.SEN = 1;        // initiate start condition
    while(SEN == 1);            // wait until start condition has completed (SEN is cleared by hardware))
    PIR1bits.SSP1IF = 0;        // SSPIF is cleared as it was previously set by hardware on completion of the start condition
}
