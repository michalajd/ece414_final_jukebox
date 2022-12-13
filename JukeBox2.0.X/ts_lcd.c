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
const int screenL = 250;


void displaySong(char* song){
    // note: doing this without LCD so spacing is approximate
    //tft_setTextColor(ILI9341_WHITE);

    // track title
    tft_setTextSize(2);
    int x = (screenL/2)- ((screenL/51.3)*strlen(song));
    tft_setCursor(x,108);
    tft_writeString(song);

}

void displayArtist(char* artist){
    
    
    // artist name
    tft_setTextSize(1);
    int x = (screenL/2) - ((screenL/90)*strlen(artist));
    tft_setCursor(x,138);
    tft_writeString(artist);

    // default = play button
    tft_fillTriangle(100, 200, 100, 160, 120, 180, ILI9341_WHITE);
}

void ts_lcd_init(){
    tft_init_hw();
    tft_begin();
    tft_setRotation(3); 
    tft_fillScreen(ILI9341_BLACK);  
    tft_setTextColor(ILI9341_WHITE);
    displaySong("No Song Playing");    
    displayArtist("Please Scan A Tag");
}

uint8_t reverse(uint8_t a) {
    if (a==0) return 1;
    else return 0;
}

void printingTest(uint8_t in) {
    if (in == 1) {
        tft_setTextSize(5);
        tft_setCursor(15, 20);
        tft_setTextColor(ILI9341_RED);
        tft_writeString("YES");
    }
    else {
        tft_setTextSize(5);
        tft_setCursor(15, 20);
        tft_setTextColor(ILI9341_GREEN);
        tft_writeString("NO");
    }
}