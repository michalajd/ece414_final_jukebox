#define _SUPPRESS_PLIB_WARNING 1
#include "uart1.h"
#include <inttypes.h>
#include <plib.h>
#define FPB 40000000


void uart1_init(uint32_t baudrate){
    __XC_UART = 1;
    PPSOutput(1, RPA0, U1TX);
    PPSInput(3, U1RX, RPA2);
    OpenUART1(UART_EN | UART_NO_PAR_8BIT | UART_1STOPBIT | UART_BRGH_SIXTEEN, UART_TX_ENABLE | UART_RX_ENABLE, setBaudRate(baudrate));
}

uint32_t setBaudRate(uint32_t baudrate){
	return (FPB/(baudrate*16))-1;
}

uint8_t uart1_txrdy(){
    if(BusyUART1()){
        return 0;
    }else{
        return 1;
    }
}

void uart1_txwrite(int c){
    WriteUART1(c);
}
void uart1_txwrite_str(char *cp){
    while(!uart1_txrdy()){       
    }
    putsUART1(cp);
}

uint8_t uart1_rxrdy(){
    if(DataRdyUART1()){
        return 1;
    }else{
        return 0;
    }
}
uint8_t uart1_rxread(){
    return (uint8_t) ReadUART1();
}
