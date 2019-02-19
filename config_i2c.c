#include <xc.h>
void config_i2c (void)
{
    TRISBbits.TRISB4 = 1;       // RB4 is an input pin SDA
    TRISBbits.TRISB6 = 1;       // RB6 is an input pin SCL
    
    /*Enable i2c master mode, SCL = FOSC/(4 * (SPPADD + 1))*/
    SSPCON1bits.SSP1M3 = 1;
    SSPCON1bits.SSP1M2 = 0;
    SSPCON1bits.SSP1M1 = 0;
    SSPCON1bits.SSP1M0 = 0;
    
    SSPCON1bits.SSPEN = 1;       // enables i2c SDA and SCL pins
    
    SSPADD = 0x09;              // SCL = 100kHz, Fosc = 4MHz
                                // SSPADD = (Fosc/(4 * SCL)) - 1
}
