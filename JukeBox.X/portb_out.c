#include <xc.h>
#include <inttypes.h>
#include "portb_out.h"
void portb_out_init() {
 // low-level code to
 // initialize port
    
    ANSELB = 0;
    TRISB = 0;
    
    
}
void portb_out_write(uint16_t val)
{
 // low-level code to
 // write port
    
    if(val == 1){
        LATB = 0x0001;
    }
    else if(val == 2){
        LATB = 0x0002;
    }
    else if(val == 3){
        LATB = 0x0003;
    }
    else if(val == 4){
        LATB = 0x0004;
    }
    else if(val == 5){
        LATB = 0x0005;
    }
    else if(val == 6){
        LATB = 0x0006;
    }
    else LATB = 0x0001;
    
}
