
#include <pic16f1459.h>

void setup_ports(void)
{
    ANSELA = 0x00;
    ANSELB = 0x00;
    ANSELC = 0x00;  
    TRISCbits.TRISC7 = 0;
    TRISCbits.TRISC5 = 1;
    TRISAbits.TRISA5 = 0;   // diag LED
    TRISAbits.TRISA4 = 1;
}
