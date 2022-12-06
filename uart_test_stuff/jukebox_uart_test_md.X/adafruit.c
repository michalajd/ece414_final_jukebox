#include "uart1.h"
#include <stdio.h>
#include <xc.h>
#include <inttypes.h>
#include <plib.h>
#include "timer1.h"


// microcontroller pin = rb0 (pin 4))
void ada_config() {
   LATAINV = 0x4;
   // uart1_txwrite_str("inverse \n\r");
    TRISBbits.TRISB0 = 0;
    //delayms(10);
    TRISBbits.TRISB0 = 1;
    //delayms(1000);
    //uart1_txwrite_str("set output \n\r");
   // ANSELBbits.ANSB0 = 0;
   // uart1_txwrite_str("set digital \n\r");
}

void ada_config2() {
    uint16_t t1, t2;
    t1 = timer1_read();
    t2 = timer1_read();
    
    LATAINV = 0x4;
    uart1_txwrite_str("inverse \n\r");
    TRISBbits.TRISB0 = 0;
    uart1_txwrite_str("set to output\n\r");
    /*LATBbits.LATB0 = 0x0;
    uart1_txwrite_str("send signal to rst\n\r");*/
     if (timer1_ms_elapsed(t1, t2) > MS_10); // wait 10 ms
    uart1_txwrite_str("count test success \n\r");
    TRISBbits.TRISB0 = 1;
    uart1_txwrite_str("set input \n\r");
     if (timer1_ms_elapsed(t1, t2) > MS_1000); // wait 1 s
    uart1_txwrite_str("count to start \n\r"); 
}
// TRY PUTTING THE INPUT PART IN A NEW FUNCTION
