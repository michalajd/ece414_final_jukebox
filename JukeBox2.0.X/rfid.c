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

void readTag(int num){
    
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
            
        case 0x58AC:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x04);
            uart1_txwrite(0xB7);
            break;
            
        case 0x599C:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x05);
            uart1_txwrite(0xB8);
            break;
        
            case 0x57AA:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x06);
            uart1_txwrite(0xB9);
            break;
            
            case 0x47BB:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x07);
            uart1_txwrite(0xBA);
            break;
            
            case 0x4D47:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x08);
            uart1_txwrite(0xBB);
            break;
            
            case 0x7737:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x09);
            uart1_txwrite(0xBC);
            break;
            
            case 0x47CC: // 10
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x0A);
            uart1_txwrite(0xBD);
            break;
            
            case 0x3608:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x0B);
            uart1_txwrite(0xBE);
            break;
            
            case 0x5F68:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x0C);
            uart1_txwrite(0xBF);
            break;
            
            case 0x2B78:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x0D);
            uart1_txwrite(0xC0);
            break;
            
            case 0x5928:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x0E);
            uart1_txwrite(0xC1);
            break;
            
            case 0x59D0:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x0F);
            uart1_txwrite(0xC2);
            break;
            
            case 0x3426:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x10);
            uart1_txwrite(0xC3);
            break;
            
            case 0x2544:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x11);
            uart1_txwrite(0xC4);
            break;
            
            case 0x33BE:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x12);
            uart1_txwrite(0xC5);
            break;
            
            case 0x2276:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x13);
            uart1_txwrite(0xC6);
            break;
            
            case 0x5DBE: // 20
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x14);
            uart1_txwrite(0xC7);
            break;
            
            case 0x2B0A:
            
            break;
            
            case 0x8383:
            
            break;
            
            case 0x5ADB:
            
            break;
            
            case 0x25F0:
            
            break;
            
            case 0x5668:
            
            break;
            
            case 0x4E0B:
            
            break;
            
            case 0x255B:
            
            break;
            
            case 0x458F:
            
            break;
            
            case 0x83F2: 
            
            break;
            
            case 0x5B2F: // 30
            
            break;
            
            case 0x56D7:
            
            break;
            
            case 0x2A86:
            
            break;
            
            case 0x84B5:
            
            break;
            
            case 0x470F:
            
            break;
            
            case 0x28C6:
            
            break;
            
            case 0x225B:
            
            break;
            
            case 0x2236:
            
            break;
            
            case 0x5D91:
            
            break;
            
            case 0x5B24:
            
            break;
            
            case 0x8368: // 40
            
            break;
            
            case 0x773E:
            
            break;
            
            case 0x3650:
            
            break;
            
            case 0x4824:
            
            break;
            
            case 0x1BB7:
            
            break;
            
            case 0x59C3:
            
            break;
            
            case 0x57BF:
            
            break;
            
            case 0x57DA:
            
            break;
            
            case 0x5870:
            
            break;
            
            case 0x5732:
            
            break;
            
            case 0x2AC7: // 50
            
            break;
            
            case 0x2560:
            
            break;
            
            case 0x5ECB:
            
            break;
            
            case 0x4DD2:
            
            break;
            
            case 0x5CFE:
            
            break;
            
            case 0x5B05:
            
            break;
            
            case 0x36A9:
            
            break;
            
            case 0x2AD5:
            
            break;
            
            case 0x65EF:
            
            break;
            
            case 0x2886:
            
            break;
            
            case 0x2219: // 60
            
            break;
            
            case 0x44A7:
            
            break;
            
            case 0x47B2:
            
            break;
            
            case 0x58AF:
            
            break;
            
            case 0x32FE:
            
            break;
            
            case 0x5B91:
            
            break;
            
            case 0x2A67:
            
            break;
            
            case 0x218A:
            
            break;
            
            case 0x330E:
            
            break;
            
            case 0x2A9F:
            
            break;
            
            case 0x826A: // 70
            
            break;
            
            case 0x57E3:
            
            break;
            
            case 0x5AFE:
            
            break;
            
            case 0x462E:
            
            break;
            
            case 0x5B09:
            
            break;
            
            case 0x2ADD:
            
            break;
            
            case 0x2552:
            
            break;
            
            case 0x8365:
            
            break;
            
            case 0x7593:
            
            break;
            
            case 0x4E42: 
            
            break;
            
            case 0x4D80: // 80
            
            break;
            
            case 0x56F6:
            
            break;
            
            case 0x463A:
            
            break;
            
            case 0x6AFE:
            
            break;
            
            case 0x2617:
            
            break;
            
            case 0x4E5F:
            
            break;
            
            case 0x5ABA:
            
            break;
            
            case 0x2F9E:
            
            break;
            
            case 0x4B76:
            
            break;
            
            case 0x831C:
            
            break;
            
            case 0x4DF3:
            
            break;
            
            case 0x57F5:
            
            break;
            
            case 0x5CF8:
            
            break;
            
            case 0x5B8A:
            
            break;
            
            case 0xAE1B:
            
            break;
            
            case 0x4648:
            
            break;
            
        default:
            
            
            
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

