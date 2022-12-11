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
#include "string.h"

#define _SUPPRESS_PLIB_WARNING 1

int pause_playCount;

int concat_int(int a, int b){
    
    int c = (a << 8)|(b); // concats 2 hexadecimal numbers
    return c;
    
}

void readTag(){
    
    switch (num){
        case 0x5A12:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x01);
            uart1_txwrite(0xB4);
            break;
            
        case 0x1AE9:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x02);
            uart1_txwrite(0xB5);
            break;
            
        case 0x5853:
            uart1_txwrite(0xAA);
               uart1_txwrite(0x07);
               uart1_txwrite(0x02);
               uart1_txwrite(0x00);
               uart1_txwrite(0x03);
               uart1_txwrite(0xB6);
            break;
                
    }
    
}

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

