#include "config.h"
void split_time(void)
{ 
    /****time**********/
    secs_lsb = seconds%10;
    secs_msb = seconds/10;
    mins_lsb = minutes%10;
    mins_msb = minutes/10;
    hours_lsb = hours%10;
    hours_msb = hours/10;
    
    /*******year********/
    if((year_date & 0xc0)>>6 == 0)
        {
            this_year = 19;
        }
    else if((year_date & 0xc0)>>6 == 1)
        {
            this_year = 20;
        }
    else if((year_date & 0xc0)>>6 == 2)
        {
            this_year = 21;
        }
    else if((year_date & 0xc0)>>6 == 3)
        {
            this_year = 22;
        }  
    year_date_lsb = this_year%10;   
    year_date_msb = this_year/10;
    
    
    
    
    /****date_tens of day ( 0-3 )******/
   // date_tens = ((year_date & 0x30)>> 4);     // date tens 0-3
    /****day_units of day ( 0 - 9)*/
    //date_units = year_date & 0x0f;           // date 1-9
   // mth_date = date_tens + date_units;
   // mth_date =  ((year_date & 0x30) >> 4)*10    + (year_date & 0x0F);     
   // mth_date_lsb = mth_date%10;
   // mth_date_msb = mth_date/10;
    mth_date_lsb = year_date%10;    // day date of month
    mth_date_msb = year_date/10;
    
    months_lsb = months%10;         // month
    months_msb = months/10;
    
  
}
