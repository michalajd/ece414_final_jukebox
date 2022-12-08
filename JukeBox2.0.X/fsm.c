#define _SUPPRESS_PLIB_WARNING 1
#include <xc.h>
#include <plib.h>
#include <inttypes.h>
#include "fsm.h"
#include "adafruit.h"
#include "timer1.h"
#include "uart1.h"
#include "rfid.h"
#include "testmain.h"

enum States {IDLE, /*READ,*/ PLAY, PAUSE}
Next;

void FSM_init(){
    Next = IDLE;
}

void FSM_tick() {
    
    switch (Next) {
        case IDLE:
            
           //if(portb7_in_read() != 0) volumedown();
           //if(portb8_in_read() != 0) volumeup();
        
            
            // behavior: wait and play nothing until a tag is scanned
            if (tag_flag == 1) {
                
                Next = PLAY;
            }
            else Next = IDLE;
            
            break;
        
        /*case READ:
            // behavior: scan the tag (don't think we will need a variable to control when a song is found because it's quite fast)
            
            Next = PLAY;
            break; */
            
        case PLAY:
            if(portb9_in_read() != 0) Next = PAUSE;
            
            tag(temp_buff); // play song
            break;
            
        case PAUSE:
            
            break;
            
    }
}