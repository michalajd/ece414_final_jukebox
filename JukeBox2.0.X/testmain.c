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

int main(int argc, char** argv) {
    uart1_init(9600);
    
    while(1){
        
        while(uart1_rxrdy()){
            
                int tmp = uart1_rxread();
                buffer[i] = tmp;
                i++;

            if (i>9) {
                i = 0;
                //temp_buff = buffer[5]; // temp char to store tag ID for tag())
                //uart1_txwrite(buffer[5]); // uncomment this to see first two hex numbers of tag ID (also comment out all other uart writes)
                //uart1_txwrite(buffer[6]);
                
                num = concat_int(buffer[5], buffer[6]); 
            
                readTag();
            
                
             
               else if(num == 0x1AE9){
               uart1_txwrite(0xAA);
               uart1_txwrite(0x07);
               uart1_txwrite(0x02);
               uart1_txwrite(0x00);
               uart1_txwrite(0x02);
               uart1_txwrite(0xB5);
                }
                else if(buffer[5] == 0x58 && buffer[6] == 0x53){
               uart1_txwrite(0xAA);
               uart1_txwrite(0x07);
               uart1_txwrite(0x02);
               uart1_txwrite(0x00);
               uart1_txwrite(0x03);
               uart1_txwrite(0xB6);
                }
                else if(buffer[5] == 0x58 && buffer[6] == 0xAC){
              /* uart1_txwrite(0xAA);
               uart1_txwrite(0x07);
               uart1_txwrite(0x02);
               uart1_txwrite(0x00);
               uart1_txwrite(0x04);
               uart1_txwrite(0xB7);*/
               uart1_txwrite(0xAA);
               uart1_txwrite(0x06);
               uart1_txwrite(0x00);
               uart1_txwrite(0xB0);
                }
                else if(buffer[5] == 0x59 && buffer[6] == 0x9C){
               uart1_txwrite(0xAA);
               uart1_txwrite(0x07);
               uart1_txwrite(0x02);
               uart1_txwrite(0x00);
               uart1_txwrite(0x05);
               uart1_txwrite(0xB8);
                }
            }
        }

                //tag_flag = tag_read_bool(); // sets tag flag to 1 while input is reading
        
        } //end of while(1)

        
        //tag(temp_buff);
        //FSM_tick();
        //tag_flag = 0; // sets tag flag to 0 when there's no input
    
    return (EXIT_SUCCESS);
}