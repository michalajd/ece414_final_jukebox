#include "uart1.h"
#include <stdio.h>
#include <xc.h>
#include <inttypes.h>
#include <plib.h>
#include "timer1.h"
#define _SUPPRESS_PLIB_WARNING 1

// microcontroller pin = rb0 (pin 4))
void ada_config() {
    LATAINV = 0x4;
   
    TRISBbits.TRISB0 = 0;
    
    LATBbits.LATB0 = 0;
    
    uint16_t t1 = timer1_read();
    uint16_t t2 = timer1_read();
    if (timer1_ms_elapsed(t1, t2) > MS_10);
    
    LATBbits.LATB0 = 1;
    
    if (timer1_ms_elapsed(t1, t2) > MS_1000); // wait 1 s
    
    TRISBbits.TRISB7 = 1;
    TRISBbits.TRISB8 = 1;
    TRISBbits.TRISB9 = 1;
    
    
}
