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
#include "ts_lcd.h"
#include "timer1.h"
#include "tft_master.h"
#include "ts_lcd.h"
#include "adc_intf.h"
#include "tft_gfx.h"
#include "testmain.h"

/* Clock configuration */
#pragma config FNOSC = FRCPLL, POSCMOD = OFF
#pragma config FPLLIDIV = DIV_2, FPLLMUL = MUL_20
#pragma config FPBDIV = DIV_1, FPLLODIV = DIV_2
#pragma config FWDTEN = OFF, JTAGEN = OFF, FSOSCEN = OFF

#define RX_BUFFER 100

int buffer[RX_BUFFER];
uint8_t i = 0;
uint8_t temp;


char* name;
char* art;

int main() {
    SYSTEMConfigPerformance(PBCLK);
    
    configureADC();
    uart1_init(9600);
    timer1_init();
    FSM_init();
    ts_lcd_init();
    porta_in_init();
    
    while(1){

        while(uart1_rxrdy()){
            
                int tmp = uart1_rxread();
                buffer[i] = tmp;
                i++;
                
            if (i > 9) {
                i = 0;
                num = concat_int(buffer[5], buffer[6]); 
         
                readTag(num); // switch statement that checks each tag ID
                tag_flag = 1;
              
            }
        }
        
        if((porta_in_read() == 0x01)){
            pause = 1;
            //uart1_txwrite_str("btn1");
        }
        else if((porta_in_read() == 0x02)){
            play = 1;
            //uart1_txwrite_str("btn2");
        } 
        
           FSM_tick();
           tag_flag = 0; 
        
    } //end of while(1)
    
    return (EXIT_SUCCESS);
}