/* 
 * File:   main.c
 * Author: arnolddj
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
#include <string.h>

/* Clock configuration */
#pragma config FNOSC = FRCPLL, POSCMOD = OFF
#pragma config FPLLIDIV = DIV_2, FPLLMUL = MUL_20
#pragma config FPBDIV = DIV_1, FPLLODIV = DIV_2
#pragma config FWDTEN = OFF, JTAGEN = OFF, FSOSCEN = OFF

#define RX_BUFFER 100

int buffer[RX_BUFFER];
//int temp_buff;
uint8_t i = 0;
int num; // concatenated hex number

int main() {
    uart1_init(9600);
    
    while(1){
        
        while(uart1_rxrdy()){
            
                int tmp = uart1_rxread();
                buffer[i] = tmp;
                i++;

            if (i > 9) {
                i = 0;
                
                num = concat_int(buffer[5], buffer[6]); 
            
                readTag(num); // switch statement that checks each tag ID
              
            }
        }
                
        
    } //end of while(1)
        
        //tag(temp_buff);
        //FSM_tick();
        //tag_flag = 0; // sets tag flag to 0 when there's no input
    
    return (EXIT_SUCCESS);
}