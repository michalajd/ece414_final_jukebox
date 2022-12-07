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

int main(int argc, char** argv) {
    uart1_init(9600);
    ada_config();
    //uart1_txwrite_str("Hello World! Jason Sonkin, Sam Fowler, Allen Wu");
    
    char num = 0x00;
    
    char buffer[RX_BUFFER];
    uint8_t i = 0;
    while(1){
        
        
        
        if(uart1_rxrdy()){
            uart1_txwrite_str("q\n");
            
                char tmp = uart1_rxread();
                buffer[i] = tmp;
                i++;

            if (i>9) {
                i = 0;
                uart1_txwrite(buffer[5]);
            }
        }

        if(buffer[5] == 0x1A){
            //uart1_txwrite_str("q\n");
            uart1_txwrite_str("#0\n");
        }
        else if(buffer[5] == 0x2B){
            //uart1_txwrite_str("q\n");
            uart1_txwrite_str("#1\n");
        }
        
        
        
    } // end of while(1)
    
    return (EXIT_SUCCESS);
}