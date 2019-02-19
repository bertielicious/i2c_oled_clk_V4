#include "config.h"
void i2c_restart(void)
{
  SSPCON2bits.RSEN = 1; //initiate re-start condition  
  while(RSEN == 1);     // wait for repeated start to complete
  PIR1bits.SSP1IF = 0;  // clear interrupt flag
}
