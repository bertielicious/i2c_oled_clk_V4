#include "config.h"
#include "i2c_start.h"
#include "i2c_write.h"
#include "i2c_restart.h"
#include "i2c_read.h"
#include "i2c_stop.h"
void PCF8583_read(uchar slave_addr,uchar reg_addr)
{  
    i2c_start();                // initiate i2c start condition
    i2c_write(slave_addr);      //send PCF8583 address  R/W bit is cleared so that we can send the PCF8583 register address 0x02 (seconds))
    i2c_write(reg_addr);        // select the seconds or mins or hours register in the PCF8583
    i2c_restart();              // initiate re-start conditions
    i2c_write(slave_addr + 1);  //send PCF8583 address  R/W bit is set so that we can read seconds reg from the PCF8583 
    i2c_read();                 // read one byte of data from the slave
    if(reg_addr == 0x02)
    {
        seconds = clock;
    }
    else if (reg_addr == 0x03)
    {
        minutes = clock;
    }
    else if (reg_addr == 0x04)
    {
        hours = clock;
    }
    else if (reg_addr == 0x05)
    {
        year_date = clock;
    }
    else if(reg_addr == 0x06)
    {
        months = clock;
    }
    i2c_stop();                 // initiate stop condition
}
