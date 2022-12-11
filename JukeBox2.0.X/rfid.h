/* 
 * File:   rfid.h
 * Author: dennismj
 *
 * Created on December 7, 2022, 12:22 PM
 */

#define _SUPPRESS_PLIB_WARNING 1

#ifndef RFID_H
#define	RFID_H

#include <xc.h>
#include <plib.h>
#include <inttypes.h>
#include "fsm.h"
#include "adafruit.h"
#include "timer1.h"
#include "uart1.h"

// idk if these are how it is formatted but ideas for rfid functions we can use in FSM

int concat_int();

void readTag();

extern uint8_t tag_read_bool();

void tag(char temp_buff);

#endif	/* RFID_H */

