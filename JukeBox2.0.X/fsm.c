#define _SUPPRESS_PLIB_WARNING 1
#include <xc.h>
#include <plib.h>
#include <inttypes.h>
#include "fsm.h"
#include "adafruit.h"
#include "timer1.h"
#include "uart1.h"
#include "rfid.h"
#include "testmain.h"
#include "ts_lcd.h"
#include "tft_master.h"

char* name;
char* art;

char* oldName;
char* oldArt;

uint8_t rfid;

enum States {IDLE, READ, PLAY, PAUSE}
Next;

void FSM_init(){
    Next = IDLE;
}

void FSM_tick() {
    
    switch (Next) {
        case IDLE:
            name = "No Song Playing";
            art = "Please Scan A Tag";
 
            // behavior: wait and play nothing until a tag is scanned
            if (tag_flag != 0) Next = READ;
            else Next = IDLE;

            break;
        
        case READ:
           
                tft_setTextColor(ILI9341_BLACK);
                displaySong(name);    
                displayArtist(art);
                
                name = retName();
                art = artName();
                
                Next = PLAY;
                
            break;
      
        case PLAY:
            tft_setTextColor(ILI9341_WHITE);
            displaySong(name);    
            displayArtist(art);
            play = 0;
                
            if (pause == 1) {
                //pause = 0;
                uart1_txwrite(0xAA);
                uart1_txwrite(0x03);
                uart1_txwrite(0x00);
                uart1_txwrite(0xAD);
                //pause = 0;
                Next = PAUSE;   
            }
            /*else if (play == 1) {
                //play = 0;
                uart1_txwrite(0xAA);
                uart1_txwrite(0x02);
                uart1_txwrite(0x00);
                uart1_txwrite(0xAC);
                play = 0;
                Next = PLAY;
            } */
            
           
            else if (tag_flag != 0) Next = READ;
            
            else Next = PLAY;
            
             
            break;
            
        case PAUSE:
            pause = 0;
            if (play == 1) {
                //pause = 0;
                uart1_txwrite(0xAA);
                uart1_txwrite(0x02);
                uart1_txwrite(0x00);
                uart1_txwrite(0xAC);
                
                //pause = 0;
                Next = PLAY;   
            } 
            /*else if (pause == 1) {
               //play = 0;
                uart1_txwrite(0xAA);
                uart1_txwrite(0x03);
                uart1_txwrite(0x00);
                uart1_txwrite(0xAD);
                pause = 0;
                Next = PAUSE;
            } */
            
            
            else if (tag_flag != 0) {
                uart1_txwrite(0xAA);
                uart1_txwrite(0x04);
                uart1_txwrite(0x00);
                uart1_txwrite(0xAE);
                play = 0;
                pause = 0;
                Next = READ;
            }
            
            else Next = PAUSE;
           
            break;
            
    }
}