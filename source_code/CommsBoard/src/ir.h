/*
 * ir.h
 *
 *  Created on: May 22, 2013
 *      Author: Scott
 */



#ifndef IR_RC5_RX_H
#define IR_RC5_RX_H

#include "stm32f4xx.h"

/** Status return codes.  */
typedef enum ir_rc5_rx_ret
{
    /** No data to read.  */
    IR_RC5_RX_NONE = 0,
    /** Timeout waiting for transition.  */
    IR_RC5_RX_TIMEOUT = -1
} ir_rc5_rx_ret_t;


/** Receive RC5 data packet over IR serial link.
    @return data or error status code
    @note No error checking is performed.  If there is no activity on the
    IR serial link, this function returns immediately.  Otherwise, this
    function blocks until the entire frame is received.  This must be called
    frequently to ensure that a start bit is seen.  */
int16_t ir_rc5_rx_read (void);


/** Initialise IR serial driver.  */
void ir_rc5_rx_init (void);
void delay_us(uint16_t us);


#endif

