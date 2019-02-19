/* 
 * File:   PCF8583_write.h
 * Author: Phil Glazzard
 *
 * Created on 12 February 2019, 21:48
 */

#ifndef PCF8583_WRITE_H
#define	PCF8583_WRITE_H

#ifdef	__cplusplus
extern "C" {
#endif

void PCF8583_write(uchar slave_addr,uchar reg_addr, uchar data_byte);


#ifdef	__cplusplus
}
#endif

#endif	/* PCF8583_WRITE_H */

