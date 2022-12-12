#define _SUPPRESS_PLIB_WARNING 1
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <plib.h>
#include "tft_master.h"
#include "tft_gfx.h"
#include "adc_intf.h"
#include "string.h" 

uint32_t x_mult, y_mult;
char message[30];
const int screenL = 320;



/*uint8_t get_ts_lcd(uint16_t *px, uint16_t *py){
    struct TSPoint p;
    
        p.x = 0;
        p.y = 0;
        p.z = 0;
        
        getPoint(&p);
        uint16_t x = p.x;
        uint16_t y = p.y;
        uint16_t z = p.z;
        
        
        uint16_t x1Prime = 0;
        uint16_t y1Prime = 0;
        uint16_t x2Prime = 319;
        uint16_t y2Prime = 239;
        
        // values from test program
        uint16_t x1 = 150; //130
        uint16_t y1 = 935; //910; //910 //x coord
        uint16_t x2 = 850; //890
        uint16_t y2 = 345 ; //350; //350
        
        x_mult = ((y-y1)*(x2Prime-x1Prime))/(y2-y1) + x1Prime;
        y_mult = ((x-x1)*(y2Prime-y1Prime))/(x2-x1) + y1Prime;
        
        /*The problem with the equations: x2prime is the max value. however ,the conversion is not 1:1 so it's kinda parabolic 
        
        //*px = x_mult;
        //*py = y_mult;
        
        if(z > 0){
            
            return 1;
        }
        else return 0; 
} */

void displaySong(char* song){
    // note: doing this without LCD so spacing is approximate
    tft_setTextColor(ILI9341_WHITE);

    // track title
    tft_setTextSize(2);
    tft_setCursor((screenL/2)-(strlen(song)/2),108);
    tft_writeString(song);

}

void displayArtist(char* artist){
    
    tft_setTextColor(ILI9341_WHITE);
    // artist name
    tft_setTextSize(1);
    tft_setCursor((screenL/2)-(strlen(artist)/2),138);
    tft_writeString(artist);

    // default = play button
    tft_fillTriangle(100, 200, 100, 160, 120, 180, ILI9341_WHITE);
}

void ts_lcd_init(){
    tft_init_hw();
    tft_begin();
    tft_setRotation(3); 
    tft_fillScreen(ILI9341_BLACK);  
    displaySong("September");    
    displayArtist("Devin Arnold");
}