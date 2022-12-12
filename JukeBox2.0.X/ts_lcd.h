#ifndef TS_LCD_H
#define	TS_LCD_H

#include <inttypes.h>
#include "string.h"

//struct TSPoint p1;

uint32_t x_mult, y_mult;
char message[30];

void ts_lcd_init();
uint8_t get_ts_lcd(uint16_t *px, uint16_t *py);
void display();
uint32_t buttonCheck();
void clear();

#endif	
