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

/* Clock configuration */
#pragma config FNOSC = FRCPLL, POSCMOD = OFF
#pragma config FPLLIDIV = DIV_2, FPLLMUL = MUL_20
#pragma config FPBDIV = DIV_1, FPLLODIV = DIV_2
#pragma config FWDTEN = OFF, JTAGEN = OFF, FSOSCEN = OFF

#define RX_BUFFER 100

/*
 
 THIS IS THE MAIN FOR ORIGINAL AUDIO PLAYER
 
 
 */

int main(int argc, char** argv) {
    uart1_init(9600);
    ada_config();
    uart1_txwrite_str("01");
    uart1_txwrite_str("01");
    uart1_txwrite_str("07");
    
    
    
    char buffer[RX_BUFFER];
    uint8_t i = 0;
    while(1){
        
        while(uart1_rxrdy()){
            //uart1_txwrite_str("q\n");
            
            
                char tmp = uart1_rxread();
                buffer[i] = tmp;
                i++;

            if (i>9) {
               
                i = 0;
                //uart1_txwrite(buffer[5]);
            }
        }
/*
        if(buffer[5] == 0x5A){ // Blue tag with wire
            uart1_txwrite_str("#0\n"); // Rick Astley
        }
        else if(buffer[5] == 0x36){ // Green tag
            uart1_txwrite_str("#1\n"); // September
        } 
        else if(buffer[5] == 0x2B){ // Yellow tag
            uart1_txwrite_str("#2\n"); // The Beatles
        }
        else if(buffer[5] == 0x1A){ // Red tag
            uart1_txwrite_str("#3\n"); // Purple Rain
        }
        else if(buffer[5] == 0x59){ // Blue tag
            uart1_txwrite_str("#4\n"); // Snake Eater
        }
        else if(buffer[5] == 0x45){ // Black tag
            uart1_txwrite_str("#5\n"); // Professor Nestor's song
        }
        else if(buffer[5] == 0x4D){ // Black Tag with wire
            uart1_txwrite_str("q\n"); // Master quit tag s
        }
        else{
            uart1_txwrite_str("#0\n");
        }
       */ 
    } // end of while(1)
    
    return (EXIT_SUCCESS);
}