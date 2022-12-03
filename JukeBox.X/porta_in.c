#include <xc.h>
#include <inttypes.h>
#include "porta_in.h"
void porta_in_init() {
 // low-level code to
 // initialize port
    
    ANSELA = 0;
    TRISA = 0x1F;
    CNPUA = 0x1F;
}
uint8_t porta_in_read() {
 // low-level code to
 // read port
    uint8_t data = PORTA & 0x1F; // added 0x1F
    
    return data;
}

uint8_t porta_in_read_ra0() {
 // low-level code to
 // read port
    uint8_t data = PORTA & 0x01; 
    
    return data;
}
