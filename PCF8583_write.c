#include "config.h"
#include "i2c_start.h"
#include "i2c_write.h"

#include "i2c_stop.h"
void PCF8583_write(uchar slave_addr, uchar reg_addr, uchar data_byte)
{
      i2c_start();                // initiate i2c start condition
      i2c_write(slave_addr);      //send PCF8583 address  R/W bit is cleared so that we can send the PCF8583 register address 0x02 (seconds)
      if(SSPCON2bits.ACKSTAT == 1)    // if ACK bit was not received
    {
        SSPCON2bits.PEN = 1;        // initiate Stop condition on SDA and SCL
        while(SSPCON2bits.PEN == 1);// wait for Stop condition to complete
        return;
    }
      i2c_write(reg_addr);      //send PCF8583 address  R/W bit is cleared so that we can send the PCF8583 register address 0x02 (seconds)
      if(SSPCON2bits.ACKSTAT == 1)    // if ACK bit was not received
    {
        SSPCON2bits.PEN = 1;        // initiate Stop condition on SDA and SCL
        while(SSPCON2bits.PEN == 1);// wait for Stop condition to complete
        return;
    }
      i2c_write(data_byte);      //send PCF8583 address  R/W bit is cleared so that we can send the PCF8583 register address 0x02 (seconds)
      if(SSPCON2bits.ACKSTAT == 1)    // if ACK bit was not received
    {
        SSPCON2bits.PEN = 1;        // initiate Stop condition on SDA and SCL
        while(SSPCON2bits.PEN == 1);// wait for Stop condition to complete
        return;
    }
      i2c_stop();
}
