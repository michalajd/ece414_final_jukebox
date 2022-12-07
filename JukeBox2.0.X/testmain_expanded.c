///* 
// * File:   testmain.c
// * Author: fowlersp
// *
// * Created on September 29, 2022, 10:05 AM
// */
//
///* Clock configuration */
//#pragma config FNOSC = FRCPLL, POSCMOD = OFF
//#pragma config FPLLIDIV = DIV_2, FPLLMUL = MUL_20
//#pragma config FPBDIV = DIV_1, FPLLODIV = DIV_2
//#pragma config FWDTEN = OFF, JTAGEN = OFF, FSOSCEN = OFF
//
//#include <stdio.h>
//#include <stdlib.h>
//#include "ztimer.h"
//
//uint32_t loopcount = 1;
//uint32_t iterationVar = 1000000;
////#define NUM_ITERATIONS 100000
//#define NUM_REPS 10
//#define PERIOD_T 1000
//#define BAUDRATE 115200
///*
// * 
// */
//
//void test_uint8_mult()
//{
//    uint32_t i;
//    uint8_t i1, i2, i3;
//    i1 = 15;
//    i2 = 26;
//    for (i=0; i<iterationVar; i++){
//        i3 = i1*i2;
//        i3 = i1*i2;
//        i3 = i1*i2;
//        i3 = i1*i2;
//        i3 = i1*i2;
//        i3 = i1*i2;
//        i3 = i1*i2;
//        i3 = i1*i2;
//        i3 = i1*i2;
//        i3 = i1*i2;
//    }
//}
//void test_uint16_mult()
//{
//    uint32_t i;
//    uint16_t i1, i2, i3;
//    i1 = 15;
//    i2 = 26;
//    for (i=0; i<iterationVar; i++){
//        i3 = i1*i2;
//        i3 = i1*i2;
//        i3 = i1*i2;
//        i3 = i1*i2;
//        i3 = i1*i2;
//        i3 = i1*i2;
//        i3 = i1*i2;
//        i3 = i1*i2;
//        i3 = i1*i2;
//        i3 = i1*i2;
//    }
//}
//void test_uint32_mult()
//{
//    uint32_t i;
//    uint32_t i1, i2, i3;
//    i1 = 15;
//    i2 = 26;
//    for (i=0; i<iterationVar; i++){
//        i3 = i1*i2;
//        i3 = i1*i2;
//        i3 = i1*i2;
//        i3 = i1*i2;
//        i3 = i1*i2;
//        i3 = i1*i2;
//        i3 = i1*i2;
//        i3 = i1*i2;
//        i3 = i1*i2;
//        i3 = i1*i2;
//    }
//}
//void test_uint64_mult()
//{
//    uint32_t i;
//    uint64_t i1, i2, i3;
//    i1 = 15;
//    i2 = 26;
//    for (i=0; i<iterationVar; i++){
//        i3 = i1*i2;
//        i3 = i1*i2;
//        i3 = i1*i2;
//        i3 = i1*i2;
//        i3 = i1*i2;
//        i3 = i1*i2;
//        i3 = i1*i2;
//        i3 = i1*i2;
//        i3 = i1*i2;
//        i3 = i1*i2;
//    }
//}
//
//void test_uint8_div()
//{
//    uint32_t i;
//    uint8_t i1, i2, i3;
//    i1 = 15;
//    i2 = 26;
//    for (i=0; i<iterationVar; i++){
//        i3 = i1/i2;
//        i3 = i1/i2;
//        i3 = i1/i2;
//        i3 = i1/i2;
//        i3 = i1/i2;
//        i3 = i1/i2;
//        i3 = i1/i2;
//        i3 = i1/i2;
//        i3 = i1/i2;
//        i3 = i1/i2;
//    }
//}
//void test_uint16_div()
//{
//    uint32_t i;
//    uint16_t i1, i2, i3;
//    i1 = 15;
//    i2 = 26;
//    for (i=0; i<iterationVar; i++){
//        i3 = i1/i2;
//        i3 = i1/i2;
//        i3 = i1/i2;
//        i3 = i1/i2;
//        i3 = i1/i2;
//        i3 = i1/i2;
//        i3 = i1/i2;
//        i3 = i1/i2;
//        i3 = i1/i2;
//        i3 = i1/i2;
//    }
//}
//void test_uint32_div()
//{
//    uint32_t i;
//    uint32_t i1, i2, i3;
//    i1 = 15;
//    i2 = 26;
//    for (i=0; i<iterationVar; i++){
//        i3 = i1/i2;
//        i3 = i1/i2;
//        i3 = i1/i2;
//        i3 = i1/i2;
//        i3 = i1/i2;
//        i3 = i1/i2;
//        i3 = i1/i2;
//        i3 = i1/i2;
//        i3 = i1/i2;
//        i3 = i1/i2;
//    }
//}
//void test_uint64_div()
//{
//    uint32_t i;
//    uint64_t i1, i2, i3;
//    i1 = 15;
//    i2 = 26;
//    for (i=0; i<iterationVar; i++){
//        i3 = i1/i2;
//        i3 = i1/i2;
//        i3 = i1/i2;
//        i3 = i1/i2;
//        i3 = i1/i2;
//        i3 = i1/i2;
//        i3 = i1/i2;
//        i3 = i1/i2;
//        i3 = i1/i2;
//        i3 = i1/i2;
//    }
//}
//
//
//void test_uint8_subtract()
//{
//    uint32_t i;
//    uint8_t i1, i2, i3;
//    i1 = 15;
//    i2 = 26;
//    for (i=0; i<iterationVar; i++){
//        i3 = i1-i2;
//        i3 = i1-i2;
//        i3 = i1-i2;
//        i3 = i1-i2;
//        i3 = i1-i2;
//        i3 = i1-i2;
//        i3 = i1-i2;
//        i3 = i1-i2;
//        i3 = i1-i2;
//        i3 = i1-i2;
//    }
//}
//void test_uint16_subtract()
//{
//    uint32_t i;
//    uint16_t i1, i2, i3;
//    i1 = 15;
//    i2 = 26;
//    for (i=0; i<iterationVar; i++){
//        i3 = i1-i2;
//        i3 = i1-i2;
//        i3 = i1-i2;
//        i3 = i1-i2;
//        i3 = i1-i2;
//        i3 = i1-i2;
//        i3 = i1-i2;
//        i3 = i1-i2;
//        i3 = i1-i2;
//        i3 = i1-i2;
//    }
//}
//void test_uint32_subtract()
//{
//    uint32_t i;
//    uint32_t i1, i2, i3;
//    i1 = 15;
//    i2 = 26;
//    for (i=0; i<iterationVar; i++){
//        i3 = i1-i2;
//        i3 = i1-i2;
//        i3 = i1-i2;
//        i3 = i1-i2;
//        i3 = i1-i2;
//        i3 = i1-i2;
//        i3 = i1-i2;
//        i3 = i1-i2;
//        i3 = i1-i2;
//        i3 = i1-i2;
//    }
//}
//void test_uint64_subtract()
//{
//    uint32_t i;
//    uint64_t i1, i2, i3;
//    i1 = 15;
//    i2 = 26;
//    for (i=0; i<iterationVar; i++){
//        i3 = i1-i2;
//        i3 = i1-i2;
//        i3 = i1-i2;
//        i3 = i1-i2;
//        i3 = i1-i2;
//        i3 = i1-i2;
//        i3 = i1-i2;
//        i3 = i1-i2;
//        i3 = i1-i2;
//        i3 = i1-i2;
//    }
//}
//
//
//int main(int argc, char** argv) {    
//    while(1){
//    printf("/n");
//    printf("/n");
//    iterationVar = iterationVar*10;
//
//    uint32_t t1, t2;
//    zTimerSet(PERIOD_T);
//    uart1_init(BAUDRATE);
//    printf("Performance Summary: Time per operation statistics\r\n");
//    zTimerOn();
//    t1 = zTimerReadms();
//    test_uint8_mult();
//    t2 = zTimerReadms();
//    printf("UINT8 MULT: %.06f us per operation\r\n", ((double)(t2 - t1)) / ((double) iterationVar) / (double) NUM_REPS*1000.0);
//    zTimerSet(0);//why not
//    
//    t1 = zTimerReadms();
//    test_uint16_mult();
//    t2 = zTimerReadms();
//    printf("UINT16 MULT: %.06f us per operation\r\n", ((double)(t2 - t1)) / ((double) iterationVar) / (double) NUM_REPS*1000.0);
//    zTimerSet(0);//why not
//    
//    t1 = zTimerReadms();
//    test_uint32_mult();
//    t2 = zTimerReadms();
//    printf("UINT32 MULT: %.06f us per operation\r\n", ((double)(t2 - t1)) / ((double) iterationVar) / (double) NUM_REPS*1000.0);
//    zTimerSet(0);//why not
//       
//    t1 = zTimerReadms();
//    test_uint64_mult();
//    t2 = zTimerReadms();
//    printf("UINT64 MULT: %.06f us per operation\r\n", ((double)(t2 - t1)) / ((double) iterationVar) / (double) NUM_REPS*1000.0);
//    zTimerSet(0);//why not
//        
//    t1 = zTimerReadms();
//    test_uint8_div();
//    t2 = zTimerReadms();
//    printf("UINT8 DIVIDE: %.06f us per operation\r\n", ((double)(t2 - t1)) / ((double) iterationVar) / (double) NUM_REPS*1000.0);
//    zTimerSet(0);//why not
//    
//    t1 = zTimerReadms();
//    test_uint16_div();
//    t2 = zTimerReadms();
//    printf("UINT16 DIVIDE: %.06f us per operation\r\n", ((double)(t2 - t1)) / ((double) iterationVar) / (double) NUM_REPS*1000.0);
//    zTimerSet(0);//why not
//            
//    t1 = zTimerReadms();
//    test_uint32_div();
//    t2 = zTimerReadms();
//    printf("UINT32 DIVIDE: %.06f us per operation\r\n", ((double)(t2 - t1)) / ((double) iterationVar) / (double) NUM_REPS*1000.0);
//    zTimerSet(0);//why not
//            
//    t1 = zTimerReadms();
//    test_uint64_div();
//    t2 = zTimerReadms();
//    printf("UINT64 DIVIDE: %.06f us per operation\r\n", ((double)(t2 - t1)) / ((double) iterationVar) / (double) NUM_REPS*1000.0);
//    zTimerSet(0);//why not
//    
//    t1 = zTimerReadms();
//    test_uint8_subtract();
//    t2 = zTimerReadms();
//    printf("UINT8 SUBTRACT: %.06f us per operation\r\n", ((double)(t2 - t1)) / ((double) iterationVar) / (double) NUM_REPS*1000.0);
//    zTimerSet(0);//why not
//    
//    t1 = zTimerReadms();
//    test_uint16_subtract();
//    t2 = zTimerReadms();
//    printf("UINT16 SUBTRACT: %.06f us per operation\r\n", ((double)(t2 - t1)) / ((double) iterationVar) / (double) NUM_REPS*1000.0);
//    zTimerSet(0);//why not
//            
//    t1 = zTimerReadms();
//    test_uint32_subtract();
//    t2 = zTimerReadms();
//    printf("UINT32 SUBTRACT: %.06f us per operation\r\n", ((double)(t2 - t1)) / ((double) iterationVar) / (double) NUM_REPS*1000.0);
//    zTimerSet(0);//why not
//            
//    t1 = zTimerReadms();
//    test_uint64_subtract();
//    t2 = zTimerReadms();
//    printf("UINT64 SUBTRACT: %.06f us per operation\r\n", ((double)(t2 - t1)) / ((double) iterationVar) / (double) NUM_REPS*1000.0);
//    zTimerSet(0);//why not
//    
//    loopcount++;
//    printf(loopcount);
//    
//    }
//    return (EXIT_SUCCESS);
//}
//
