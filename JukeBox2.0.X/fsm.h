/* 
 * File:   fsm.h
 * Author: dennismj
 *
 * Created on December 7, 2022, 11:56 AM
 */
#define _SUPPRESS_PLIB_WARNING 1
#ifndef FSM_H
#define	FSM_H

#include <xc.h>
#include <plib.h>
#include <inttypes.h>
#include "fsm.h"
#include "adafruit.h"
#include "timer1.h"
#include "uart1.h"

extern void fsm_init();

extern void fsm_tick();

#endif	/* FSM_H */

