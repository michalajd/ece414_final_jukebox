/* 
 * File:   main.c
 * Author: fowlersp
 *
 * Created on September 29, 2022, 8:48 AM
 */
#define _SUPPRESS_PLIB_WARNING 1
#include <stdio.h>
#include <stdlib.h>
#include "uart1.h"
#include <plib.h>
#include "rfid.h"
#include "fsm.h"


/* Clock configuration */
#pragma config FNOSC = FRCPLL, POSCMOD = OFF
#pragma config FPLLIDIV = DIV_2, FPLLMUL = MUL_20
#pragma config FPBDIV = DIV_1, FPLLODIV = DIV_2
#pragma config FWDTEN = OFF, JTAGEN = OFF, FSOSCEN = OFF

#define RX_BUFFER 100

char buffer[RX_BUFFER];
char temp_buff;
uint8_t i = 0;
uint8_t tag_flag;

int main(int argc, char** argv) {
    uart1_init(9600);
    ada_config();
    FSM_init();
    
    while(1){
        
        while(uart1_rxrdy()){
          //  uart1_txwrite_str("q\n");
                //if(portb7_in_read() != 0) volumedown();
                //if(portb8_in_read() != 0) volumeup();
            
                char tmp = uart1_rxread();
                buffer[i] = tmp;
                i++;

            if (i>9) {
                i = 0;
                temp_buff = buffer[5]; // temp char to store tag ID for tag())
                uart1_txwrite(buffer[5]); // uncomment this to see first two hex numbers of tag ID (also comment out all other uart writes)
                uart1_txwrite(buffer[6]);
            }
                
            if(i == 0){    
                if(buffer[5] == 0x1A){
            
               // uart1_txwrite(0xAA);
                //uart1_txwrite(0x07);
               // uart1_txwrite(0x02);
                //uart1_txwrite(0x00);
               /// uart1_txwrite(0x01);
               // uart1_txwrite(0xB4);
                }
            }
        }

        
        

                //tag_flag = tag_read_bool(); // sets tag flag to 1 while input is reading
        }

        
        tag(temp_buff);
        //FSM_tick();
        //tag_flag = 0; // sets tag flag to 0 when there's no input
        
    // end of while(1)
    
    return (EXIT_SUCCESS);
}