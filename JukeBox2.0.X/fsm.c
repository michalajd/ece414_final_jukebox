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
            tft_fillTriangle(130, 200, 130, 160, 150, 180, ILI9341_WHITE);
            name = "No Song Playing";
            art = "Please Scan A Tag";
 
            // behavior: wait and play nothing until a tag is scanned
            if (tag_flag != 0) Next = READ;
            else Next = IDLE;

            break;
        
        case READ:
                tft_fillTriangle(130, 200, 130, 160, 150, 180, ILI9341_BLACK);
                tft_setTextColor(ILI9341_BLACK);
                displaySong(name);    
                displayArtist(art);
                tft_fillTriangle(130, 200, 130, 160, 150, 180, ILI9341_BLACK);
                tft_fillRect(120, 160, 5, 40, ILI9341_BLACK);
                tft_fillRect(140, 160, 5, 40, ILI9341_BLACK);
                
                name = retName();
                art = artName();
                
                uart1_txwrite(0xAA);
                uart1_txwrite(0x02);
                uart1_txwrite(0x00);
                uart1_txwrite(0xAC);
                
                Next = PLAY;
                
            break;
      
        case PLAY:
            //tft_fillTriangle(130, 200, 130, 160, 150, 180, ILI9341_BLACK);
            tft_fillRect(120, 160, 5, 40, ILI9341_WHITE);
            tft_fillRect(140, 160, 5, 40, ILI9341_WHITE);
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
                tft_fillRect(120, 160, 5, 40, ILI9341_BLACK);
                tft_fillRect(140, 160, 5, 40, ILI9341_BLACK);
                Next = PAUSE;   
            }
            
           
            else if (tag_flag != 0) Next = READ;
            
            else Next = PLAY;
            
             
            break;
            
        case PAUSE:
            tft_fillTriangle(130, 200, 130, 160, 150, 180, ILI9341_WHITE);
            pause = 0;
            if (play == 1) {
                //pause = 0;
                uart1_txwrite(0xAA);
                uart1_txwrite(0x02);
                uart1_txwrite(0x00);
                uart1_txwrite(0xAC);
                tft_fillTriangle(130, 200, 130, 160, 150, 180, ILI9341_BLACK);
                
                //pause = 0;
                Next = PLAY;   
            } 

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