#include "uart1.h"
#include <stdio.h>
#include <xc.h>
#include <inttypes.h>
#include <plib.h>
#include "ztimer.h"

// microcontroller pin = rb0 (pin 4))
void ada_config() {
   // LATAINV = 0x4;
   // uart1_txwrite_str("inverse \n\r");
    TRISB = 0;
    uart1_txwrite_str("set output \n\r");
   // ANSELBbits.ANSB0 = 0;
   // uart1_txwrite_str("set digital \n\r");
    delayms(100);
    TRISBCLR = 0x0004;
    uart1_txwrite_str("set input \n\r");
    delayms(1000);
}

// TRY PUTTING THE INPUT PART IN A NEW FUNCTION
