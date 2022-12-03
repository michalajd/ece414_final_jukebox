#include <xc.h>
#include <stdio.h>
#include <stdlib.h>
#include "timer1.h"
#include <inttypes.h>
#include <plib.h>
#include "uart1.h"

#pragma config FNOSC = FRCPLL, POSCMOD = OFF
#pragma config FPLLIDIV = DIV_2, FPLLMUL = MUL_20
#pragma config FPBDIV = DIV_1, FPLLODIV = DIV_2
#pragma config FWDTEN = OFF, JTAGEN = OFF, FSOSCEN = OFF

void main() {
    
    // I/O Port Stuff

    /*porta_in_init();
    portb_out_init();
    
   uint8_t activity;
   
    while(1){
        portb_out_write(1);
        
        delayms(300);
        
        activity = porta_in_read_ra0();
        
        if(activity != 0){
            LATB = 0x0000;
        }
        
    }*/
    
    uart1_init(9600);
    
    long num;
    
    while(1){
        if(uart1_rxrdy()){
            num = uart1_rxread();
            uart1_txwrite(num);
        }
    }
    
    
    
   
    
}

