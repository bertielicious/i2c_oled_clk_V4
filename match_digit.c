#include "config.h"
#include "stretch.h"
#include "set_columns.h"
#include "set_page_address.h"
#include "OLED_write.h"
void match_digit(uchar num, uchar low_col, uchar hi_col, uchar page_addr)
{
    uchar i,x;
    int z[8] = {0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000};
    uchar upper[8] = {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
    uchar lower[8] = {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
    switch (num)
            {
                case 0:
                    
                    for( i = 0; i < 8; i++)
                    {
                       z[i] =  stretch(zero[i]);
                       upper[i] = (z[i]& 0xFF00)>> 8;
                       lower[i] = z[i]& 0x00FF;
                    }
                    set_columns(0x21,low_col, hi_col);
                    set_page_address(0x78, 0x00, page_addr);
                    ptr = &lower[0];
                    for (i = 0; i < 8; i++)        
                    {
                        OLED_write(OLED_ADDR, 0x40,*ptr);
                        ptr++;
                    }
                    set_columns(0x21,low_col, hi_col);
                    set_page_address(0x78, 0x00, page_addr + 1);
                   
                    ptr = &upper[0];
                    for (i = 0; i < 8; i++)        
                    {
                        OLED_write(OLED_ADDR, 0x40,*ptr);
                        ptr++;
                    }
                    break;
                    
                case 1:
                    for( i = 0; i < 8; i++)
                    {
                       z[i] =  stretch(one[i]);
                       upper[i] = (z[i]& 0xFF00)>> 8;
                       lower[i] = z[i]& 0x00FF;
                    }
                  
                    set_columns(0x21,low_col, hi_col);
                    set_page_address(0x78, 0x00, page_addr);
                    ptr = &lower[0];
                    for (i = 0; i < 8; i++)        
                    {
                        OLED_write(OLED_ADDR, 0x40,*ptr);
                        ptr++;
                    }
                    set_columns(0x21,low_col, hi_col);
                    set_page_address(0x78, 0x00, page_addr + 1);
                    
                    ptr = &upper[0];
                    for (i = 0; i < 8; i++)        
                    {
                        OLED_write(OLED_ADDR, 0x40,*ptr);
                        ptr++;
                    }
                    break;
                    
                case 2:
                    for( i = 0; i < 8; i++)
                    {
                       z[i] =  stretch(two[i]);
                       upper[i] = (z[i]& 0xFF00)>> 8;
                       lower[i] = z[i]& 0x00FF;
                    }
                   
                    set_columns(0x21,low_col, hi_col);
                    set_page_address(0x78, 0x00, page_addr);
                    ptr = &lower[0];
                    for (i = 0; i < 8; i++)        
                    {
                        OLED_write(OLED_ADDR, 0x40,*ptr);
                        ptr++;
                    }
                    set_columns(0x21,low_col, hi_col);
                    set_page_address(0x78, 0x00, page_addr + 1);
                   
                    ptr = &upper[0];
                    for (i = 0; i < 8; i++)        
                    {
                        OLED_write(OLED_ADDR, 0x40,*ptr);
                        ptr++;
                    }
                    break;
                    
                case 3:
                    for( i = 0; i < 8; i++)
                    {
                       z[i] =  stretch(three[i]);
                       upper[i] = (z[i]& 0xFF00)>> 8;
                       lower[i] = z[i]& 0x00FF;
                    }
                    
                    set_columns(0x21,low_col, hi_col);
                    set_page_address(0x78, 0x00, page_addr);
                    ptr = &lower[0];
                    for (i = 0; i < 8; i++)        
                    {
                        OLED_write(OLED_ADDR, 0x40,*ptr);
                        ptr++;
                    }
                    set_columns(0x21,low_col, hi_col);
                    set_page_address(0x78, 0x00, page_addr + 1);
                    
                    ptr = &upper[0];
                    for (i = 0; i < 8; i++)        
                    {
                        OLED_write(OLED_ADDR, 0x40,*ptr);
                        ptr++;
                    }
                    break;
                    
                case 4:
                    for( i = 0; i < 8; i++)
                    {
                       z[i] =  stretch(four[i]);
                       upper[i] = (z[i]& 0xFF00)>> 8;
                       lower[i] = z[i]& 0x00FF;
                    }
                  
                    set_columns(0x21,low_col, hi_col);
                    set_page_address(0x78, 0x00, page_addr);
                    ptr = &lower[0];
                    for (i = 0; i < 8; i++)        
                    {
                        OLED_write(OLED_ADDR, 0x40,*ptr);
                        ptr++;
                    }
                    set_columns(0x21,low_col, hi_col);
                    set_page_address(0x78, 0x00, page_addr + 1);
                    
                    ptr = &upper[0];
                    for (i = 0; i < 8; i++)        
                    {
                        OLED_write(OLED_ADDR, 0x40,*ptr);
                        ptr++;
                    }
                    break;
                    
                case 5:
                    for( i = 0; i < 8; i++)
                    {
                       z[i] =  stretch(five[i]);
                       upper[i] = (z[i]& 0xFF00)>> 8;
                       lower[i] = z[i]& 0x00FF;
                    }
                    set_columns(0x21,low_col, hi_col);
                    set_page_address(0x78, 0x00, page_addr);
                    ptr = &lower[0];
                    for (i = 0; i < 8; i++)        
                    {
                        OLED_write(OLED_ADDR, 0x40,*ptr);
                        ptr++;
                    }
                    set_columns(0x21,low_col, hi_col);
                    set_page_address(0x78, 0x00, page_addr + 1);
                   
                    ptr = &upper[0];
                    for (i = 0; i < 8; i++)        
                    {
                        OLED_write(OLED_ADDR, 0x40,*ptr);
                        ptr++;
                    }
                    break;
                    
                    case 6:
                    for( i = 0; i < 8; i++)
                    {
                       z[i] =  stretch(six[i]);
                       upper[i] = (z[i]& 0xFF00)>> 8;
                       lower[i] = z[i]& 0x00FF;
                    }
                    set_columns(0x21,low_col, hi_col);
                    set_page_address(0x78, 0x00, page_addr);
                    ptr = &lower[0];
                    for (i = 0; i < 8; i++)        
                    {
                        OLED_write(OLED_ADDR, 0x40,*ptr);
                        ptr++;
                    }
                    set_columns(0x21,low_col, hi_col);
                    set_page_address(0x78, 0x00, page_addr + 1);
                    
                    ptr = &upper[0];
                    for (i = 0; i < 8; i++)        
                    {
                        OLED_write(OLED_ADDR, 0x40,*ptr);
                        ptr++;
                    }
                    break; 
                    
                    case 7:
                        for( i = 0; i < 8; i++)
                    {
                       z[i] =  stretch(seven[i]);
                       upper[i] = (z[i]& 0xFF00)>> 8;
                       lower[i] = z[i]& 0x00FF;
                    }
                    set_columns(0x21,low_col, hi_col);
                    set_page_address(0x78, 0x00, page_addr);
                    ptr = &lower[0];
                    for (i = 0; i < 8; i++)        
                    {
                        OLED_write(OLED_ADDR, 0x40,*ptr);
                        ptr++;
                    }
                    set_columns(0x21,low_col, hi_col);
                    set_page_address(0x78, 0x00, page_addr + 1);
                   
                    ptr = &upper[0];
                    for (i = 0; i < 8; i++)        
                    {
                        OLED_write(OLED_ADDR, 0x40,*ptr);
                        ptr++;
                    }
                    break;
            
                    case 8:
                    for( i = 0; i < 8; i++)
                    {
                       z[i] =  stretch(eight[i]);
                       upper[i] = (z[i]& 0xFF00)>> 8;
                       lower[i] = z[i]& 0x00FF;
                    }
                    set_columns(0x21,low_col, hi_col);
                    set_page_address(0x78, 0x00, page_addr);
                    ptr = &lower[0];
                    for (i = 0; i < 8; i++)        
                    {
                        OLED_write(OLED_ADDR, 0x40,*ptr);
                        ptr++;
                    }
                    set_columns(0x21,low_col, hi_col);
                    set_page_address(0x78, 0x00, page_addr + 1);
                   
                    ptr = &upper[0];
                    for (i = 0; i < 8; i++)        
                    {
                        OLED_write(OLED_ADDR, 0x40,*ptr);
                        ptr++;
                    }
                    break; 
                    
                    case 9:
                    for( i = 0; i < 8; i++)
                    {
                       z[i] =  stretch(nine[i]);
                       upper[i] = (z[i]& 0xFF00)>> 8;
                       lower[i] = z[i]& 0x00FF;
                    }
                    set_columns(0x21,low_col, hi_col);
                    set_page_address(0x78, 0x00, page_addr);
                    ptr = &lower[0];
                    for (i = 0; i < 8; i++)        
                    {
                        OLED_write(OLED_ADDR, 0x40,*ptr);
                        ptr++;
                    }
                    set_columns(0x21,low_col, hi_col);
                    set_page_address(0x78, 0x00, page_addr + 1);
                
                    ptr = &upper[0];
                    for (i = 0; i < 8; i++)        
                    {
                        OLED_write(OLED_ADDR, 0x40,*ptr);
                        ptr++;
                    }
                    break; 
                    
                    /*default:
                    seconds = 0;
                    break; */
                }
}
