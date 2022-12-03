/*============================================================================
 * timer1.c
 *	Module for creating short reusable timer on PIC32.
 *
 * Note: Maximum delay that can be measured with this timer before overflow
 *       is 419 ms.
 *
 * Author: Jon Wallace modified by John Nestor
 *==========================================================================*/

#include <xc.h>
#include "timer1.h"


const uint32_t CLOCK_FREQ = 40000000;
const uint16_t PRESCALE = 256;

void timer1_init()
{
    T1CON = 0x8030;	// Enable Timer 1.  Prescaler = 256
    TMR1 = 0;		// Set timer count to zero
}

uint16_t timer1_read()
{
    return(TMR1);
}


uint16_t inline ticks_to_ms(uint16_t dt) {
    return ((uint32_t)dt * PRESCALE) / (CLOCK_FREQ/1000);
}

// returned the elapsed time between two values measured from timer1
// note that the cast to uint32_t is necessary to avoid 16-bit overflow
// when t2 < t1 assume that timer counter has rolled over once


uint16_t timer1_ms_elapsed(uint16_t t1, uint16_t t2)
{
    if (t2 >= t1)
    {
        return ticks_to_ms(t2-t1);
    }
    else
    {
        return ticks_to_ms((uint32_t)(65536 + t2 - t1));
    }
  
}

/*
 *  return a 1-bit pseudorandom value using LSB of timer1
 *  sample a middle bit so to avoid periodic sampling
 *  coming up with the same value
 */
extern uint8_t timer1_rand_bit() {
    return (timer1_read()>>3) & 0x01;
}

void delayms(int time){
    TMR1 = 00000000;
    int threshold = (time * 625);
    while(TMR1 < threshold);
}
