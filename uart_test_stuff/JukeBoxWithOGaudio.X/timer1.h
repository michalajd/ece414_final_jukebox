#ifndef TIMER1_H
#define	TIMER1_H

#include <inttypes.h>

uint16_t MS_10 = 10;
uint16_t MS_1000 = 1000;

extern void timer1_init();

extern uint16_t timer1_read();

extern uint16_t timer1_ms_elapsed(uint16_t t1, uint16_t t2);

extern uint8_t timer1_rand_bit();

#endif	/* TIMER1_H */