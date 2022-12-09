#include <xc.h>
#include <plib.h>
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include "fsm.h"
#include "adafruit.h"
#include "timer1.h"
#include "uart1.h"
#include "rfid.h"

#define _SUPPRESS_PLIB_WARNING 1

int pause_playCount;

uint8_t tag_read_bool() {
    return 1;
}

void tag(char temp_buff){

        if(temp_buff == 0x5A){ // Blue tag with wire
            uart1_txwrite_str("#0\n"); // Rick Astley
        }
        else if(temp_buff == 0x36){ // Green tag
            uart1_txwrite_str("#1\n"); // September
        } 
        else if(temp_buff == 0x2B){ // Yellow tag
            uart1_txwrite_str("#2\n"); // The Beatles
        }
        else if(temp_buff == 0x1A){ // Red tag
            uart1_txwrite_str("#3\n"); // Purple Rain
        }
        else if(temp_buff == 0x59){ // Blue tag
            uart1_txwrite_str("#4\n"); // Snake Eater
        }
        else if(temp_buff == 0x45){ // Black tag
            uart1_txwrite_str("#5\n"); // Professor Nestor's song
        }
        else if(temp_buff == 0x4D){ // Black Tag with wire
            uart1_txwrite_str("q\n"); // Master quit tag
        }
        else if (temp_buff == 0x47){
            
            //uart1_txwrite_str("-\n");
            
        }
        else if (temp_buff == 0x77){
            
            //uart1_txwrite_str("+\n");
            
        }
        else if (temp_buff == 0x58){
            pause_play();
        }
        else{
            uart1_txwrite_str("#0\n");
        }
}

void volumeup(){
    int i;
    for(i = 0; i < 5; i++){
        uart1_txwrite_str("+\n");
    }
}

void volumedown(){
    int j;
    for(j = 0; j < 5; j++){
        uart1_txwrite_str("-\n");
    }
}

void pause_play(){
    pause_playCount++;
    if((pause_playCount % 2) != 0){
        uart1_txwrite_str("=");
    }
    else {
        uart1_txwrite_str(">");
    }
    
}

uint8_t portb7_in_read(){
    uint8_t data = PORTB & 0x80;
    return data;
}

uint8_t portb8_in_read(){
    uint8_t data = PORTB & 0x100;
    return data;
}

uint8_t portb9_in_read(){
    uint8_t data = PORTB & 0x200;
    return data;
}

