#ifndef UART1_H
#define UART1_H

#include <xc.h>
#include <inttypes.h>

uint32_t retBRGH (uint32_t br);

void uart1_init(uint32_t baudrate);

uint8_t uart1_txrdy();
    

void uart1_txwrite(char c);
    

void uart1_txwrite_str(char *cp);
    

uint8_t uart1_rxrdy();
    

uint8_t uart1_rxread();
    

#endif