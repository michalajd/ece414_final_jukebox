/*============================================================================
 * timer1.h
 *	Module for creating short reusable timer on PIC32.
 *
 * Note: Maximum delay that can be measured with this timer before overflow
 *       is 419 ms.
 *
 * Author: Jon Wallace modified by John Nestor
 *==========================================================================*/

#ifndef TIMER1_H
#define	TIMER1_H
//#include <stdint.h>
#include <inttypes.h>



extern void timer1_init();

extern uint16_t inline ticks_to_ms(uint16_t dt);

extern uint16_t timer1_read();

extern uint16_t timer1_ms_elapsed(uint16_t t1, uint16_t t2);

extern uint8_t timer1_rand_bit();

extern void delayms(int time);

#endif	/* TIMER1_H */