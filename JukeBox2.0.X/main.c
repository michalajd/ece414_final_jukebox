/* 
 * File:   main.c
 * Author: fowlersp
 *
 * Created on September 29, 2022, 8:48 AM
 */

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
    uart1_txwrite_str("Hello World! Jason Sonkin, Sam Fowler, Allen Wu");
    
    char buffer[RX_BUFFER];
    uint8_t i = 0;
    while(1){
        if(uart1_rxrdy()){
            char tmp = uart1_rxread();
            if(tmp >= 'a' && tmp <= 'z') buffer[i] = tmp - 32;
            else if(tmp >= 'A' && tmp <= 'Z') buffer[i] = tmp + 32;
            else buffer[i] = tmp;
            i++;
        }
        if(i > 0 && uart1_txrdy()){
            i--;
            uart1_txwrite(buffer[i]);
        }
    }
    
    return (EXIT_SUCCESS);
}

