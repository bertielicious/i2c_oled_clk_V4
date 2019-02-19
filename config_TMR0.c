
#include <pic16f1459.h>

void config_TMR0(void)
{
    INTCONbits.GIE = 1;         // enable global interrupts
    OPTION_REGbits.TMR0CS = 0;  // Internal instruction cycle clock (FOSC/4) = 4MHz
    OPTION_REGbits.PSA = 0;     // Prescaler is assigned to the Timer0 module
    OPTION_REGbits.PS0 = 1;     // time to overflow = 0.25us * 256 * 256 = 16.384ms
    OPTION_REGbits.PS1 = 1;     // so we need TMR0 to overflow 123 times to get 2sec interrupt
    OPTION_REGbits.PS2 = 1;
    TMR0 = 0x00;                    // TMR0 overflows every 16.384ms
                                    // TMR0 needs to overflow at least 123 times to get a 2 sec update from the sensor
    INTCONbits.TMR0IE = 1;          // enable TMR0 interrupts
    INTCONbits.TMR0IF = 0;          // clear TMR0 interrupt flag to enable further interrupts
}
