#include "config.h"
void i2c_read(void)
{
    uchar bcd = 0;
    SSPCON2bits.RCEN = 1;   // receive the data byte from the PCF8583 slave
    while(SSPSTATbits.BF == 0);  //wait for all 8 bits to be received
    bcd = SSPBUF;         // save received data in temp_data 
    SSPCON2bits.ACKDT = 1;      // prepare to send NACK
    SSPCON2bits.ACKEN = 1;      // initiate NACK
    while(ACKEN == 1);
   // seconds = ((bcd>>4)*10) + (bcd & 0x0f); // convert BCD to binary
    clock = ((bcd>>4)*10) + (bcd & 0x0f); // convert BCD to binary
}
