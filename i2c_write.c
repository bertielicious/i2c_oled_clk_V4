#include "config.h"

void i2c_write(uchar byte)
{
    SSPBUF = byte;
    while(PIR1bits.SSP1IF == 0);    // wait for ACK - SSP1IF set on 9th clock cycle
    PIR1bits.SSP1IF = 0;
    __delay_us(5);
    if(SSPCON2bits.ACKSTAT == 1)    // ACK bit was not received
    {
        SSPCON2bits.PEN = 1;        // initiate Stop condition on SDA and SCL
        while(SSPCON2bits.PEN == 1);// wait for Stop condition to complete
        //return;
    }
}
