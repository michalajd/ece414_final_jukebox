/* 
 * File:   main.c
 * Author: arnolddj
 *
 * Created on September 29, 2022, 12:51 PM
 */
//#define _SUPPRESS_PLIB_WARNING 1
#pragma config FNOSC = FRCPLL, POSCMOD = OFF
#pragma config FPLLIDIV = DIV_2, FPLLMUL = MUL_20
#pragma config FPBDIV = DIV_1, FPLLODIV = DIV_2
#pragma config FWDTEN = OFF, JTAGEN = OFF, FSOSCEN = OFF

#include "uart1.h"
#include <stdio.h>
#include <xc.h>
#include <inttypes.h>
#include <plib.h>
#include "timer1.h"

void main() {
  /*  char letter;
    
    uart1_init(9600);
    uart1_txwrite_str("Welcome to the new AND improved UART lab from Michala and Devin!! \n\r");
    uart1_txwrite_str("-----Testing a 100 character string: ----- \n\r");
    uart1_txwrite_str("Good day world! Today is Friday, October 7. It is a sunny afternoon on the day before fall break!!!! \n\r");
    uart1_txwrite_str("-----Testing a 1 character string: ----- \n\r");
    uart1_txwrite_str("A \n\r");
    uart1_txwrite_str("-----Testing a 79 character string with emote: ----- \n\r");
    uart1_txwrite_str("It took two lab periods and two computers, but UART finally works! Yay ECE!! :)\n\r");
    uart1_txwrite_str("-----Type a letter and watch the system work its magic! ----- \n\r");
    
  
    while (1) {
        if(uart1_rxrdy()){
            letter = uart1_rxread();
        
            if((letter >= 65) && (letter <= 90)){
                letter = letter + 32; //0x20;
                uart1_txwrite(letter);
            }
            else if((letter >= 97) && (letter <= 122)){
                letter = letter - 32; //- 0x20;
                uart1_txwrite(letter);
            }
            else uart1_txwrite(letter); 
        }
        
    }
} */
    
    
    /*char num;
    uart1_init(115200);
    uart1_txwrite_str("uart configured success \n\r");
    ada_config2();
    uart1_txwrite_str("adafruit configured success \n\r");

    
     num = uart1_rxread();
    
    uart1_txwrite_str("Type a number and see if a song plays! \n\r");
    while (1) {
       if (uart1_rxrdy()) {
           num = uart1_rxread();
           
           if (num == 49) { // 1
               uart1_txwrite_str("#1\n");
           }
           else uart1_txwrite_str("void\n\r");
       } 
    } */
    
    char buffer[30];
    char c;
    
    uart1_init(9600);
    ada_config();
    /*LATBbits.LATB0 = 0;
    
    uint16_t t1 = timer1_read();
    uint16_t t2 = timer1_read();
    if (timer1_ms_elapsed(t1, t2) > MS_10); 
    
    LATBbits.LATB0 = 1 */
    
    //uart1_txwrite_str("#0\n");
    
    while(1){
        
        //char c = uart1_rxread();
        //uart1_txwrite(c);
        
        if(uart1_rxrdy()){
            c = uart1_rxread();
            uart1_txwrite_str("#0\n");
        }
        
        
    }
 


} 
