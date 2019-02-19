#include "config.h"
#include "OLED_write.h"
void config_OLED(void)
{
    /*CS = 0;             // select OLED chip (active LOW)
    RST = 0;
   __delay_ms(10);
   RST = 1;
   __delay_ms(10);*/
   OLED_write(0x78,0x00,SSD1306_DISPLAYOFF);             //0xAE  Set OLED Display Off
   OLED_write(0x78,0x00,SSD1306_SETDISPLAYCLOCKDIV);     //0xD5  Set Display Clock Divide Ratio/Oscillator Frequency
   OLED_write(0x78,0x00,0x80);                           // sets SSD1306 internal oscillator to it's value as if RESET
   OLED_write(0x78,0x00,SSD1306_SETMULTIPLEX);           //0xA8  Set Multiplex Ratio
   OLED_write(0x78,0x00,0x3f);                           //lines COM0 to COM63 for 128 x 64 display. 63 = 0x3f
   OLED_write(0x78,0x00,SSD1306_SETDISPLAYOFFSET);       //0xD3  Set Display Offset
   OLED_write(0x78,0x00,0x00);                           //affects the line characters are displayed
   OLED_write(0x78,0x00,SSD1306_SETSTARTLINE);           //0x40  Set Display Start Line
 
   OLED_write(0x78,0x00,SSD1306_CHARGEPUMP);             //0x8D  Set Charge Pump
   OLED_write(0x78,0x00,0x14);                           //0x14  Enable Charge Pump
   OLED_write(0x78,0x00,SSD1306_COMSCANDEC);             //0xC8  Set COM Output Scan Direction
   OLED_write(0x78,0x00,SSD1306_SETCOMPINS);             //0xDA  Set COM Pins Hardware Configuration
   OLED_write(0x78,0x00,0x12);
   OLED_write(0x78,0x00,SSD1306_SETCONTRAST);            //0x81   Set Contrast Control
   OLED_write(0x78,0x00,0xAF);
   OLED_write(0x78,0x00,SSD1306_SETPRECHARGE);           //0xD9   Set Pre-Charge Period
   OLED_write(0x78,0x00,0x25);
   OLED_write(0x78,0x00,SSD1306_SETVCOMDETECT);          //0xDB   Set VCOMH Deselect Level
   OLED_write(0x78,0x00,0x20);
   OLED_write(0x78,0x00,SSD1306_DISPLAYALLON_RESUME);    //0xA4   Set Entire Display On/Off
   OLED_write(0x78,0x00,SSD1306_NORMALDISPLAY);          //0xA6   Set Normal/Inverse Display
 
   OLED_write(0x78,0x00,0xA1);                                         // mirror image of normal display selected
   //write_command(SSD1306_SET_COM_OUTPUT_SCAN_DIRECTION);
   OLED_write(0x78,0x00,SSD1306_DISPLAYON);              //0xAF   Set OLED Display On  
}
