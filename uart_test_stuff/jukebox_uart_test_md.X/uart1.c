#define _SUPPRESS_PLIB_WARNING 1
#include "uart1.h"
#include <xc.h>
#include <stdio.h>
#include <inttypes.h>
#include <plib.h>

uint32_t retBRGH (uint32_t br) {
	uint32_t brgh = 40000000 / ((16*br) - 1);
	return brgh;
}

void uart1_init(uint32_t baudrate){
    U1BRG = retBRGH(baudrate);
    ANSELA = 0x5;
    TRISA = 0x5;
    U1MODEbits.ON = 1;
    U1STAbits.URXEN =1;
    U1STAbits.UTXEN = 1;
    U1MODEbits.UEN = 0;
    U1MODEbits.BRGH = 0;
    U1MODEbits.PDSEL = 0;
    RPA0R = 0x1;
    U1RXR = 0x0;
    // green to pin 9, white to pin 2
    
    LATBbits.LATB0 = 1;
    
     __XC_UART = 1;
}

uint8_t uart1_txrdy(){
    if(BusyUART1()){
        return 0;
    }
    else return 1;
}

void uart1_txwrite(char c){
    U1TXREG = c;
    
}

void uart1_txwrite_str(char *cp) {
    while(!uart1_txrdy());
    putsUART1(cp);
}

uint8_t uart1_rxrdy(){
    if(DataRdyUART1()) return 1;
    else return 0;
}

uint8_t uart1_rxread(){
    return (uint8_t) ReadUART1();
}