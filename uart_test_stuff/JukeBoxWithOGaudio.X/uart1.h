/* 
 * File:   uart1.h
 * Author: fowlersp
 *
 * Created on September 29, 2022, 7:57 AM
 */

#include <inttypes.h>

void uart1_init(uint32_t baudrate);

uint32_t setBaudRate(uint32_t baudrate);

uint8_t uart1_txrdy();
void uart1_txwrite(char c);
void uart1_txwrite_str(char *cp);

uint8_t uart1_rxrdy();
uint8_t uart1_rxread();

