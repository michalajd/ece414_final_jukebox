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

    
}

void ts_lcd_init(){
    tft_init_hw();
    tft_begin();
    tft_setRotation(3); 
    tft_fillScreen(ILI9341_BLACK);  
    
    // making tft pretty
    tft_fillCircle(30, 60, 7, ILI9341_MAGENTA);
    tft_fillCircle(60, 60, 7, ILI9341_MAGENTA);
    tft_fillRect(35, 30, 2, 30, ILI9341_MAGENTA);
    tft_fillRect(65, 30, 2, 30, ILI9341_MAGENTA);
    tft_drawLine(35, 30, 65, 30, ILI9341_MAGENTA);
    
    tft_setTextSize(3);
    tft_setTextColor(ILI9341_MAGENTA);
    tft_setCursor(100, 23);
    tft_writeString("MODERN");
    tft_setCursor(90, 50);
    tft_writeString("JUKEBOX");
    
    tft_fillCircle(240, 60, 7, ILI9341_MAGENTA);
    tft_fillCircle(270, 60, 7, ILI9341_MAGENTA);
    tft_fillRect(245, 30, 2, 30, ILI9341_MAGENTA);
    tft_fillRect(275, 30, 2, 30, ILI9341_MAGENTA);
    tft_drawLine(245, 30, 275, 30, ILI9341_MAGENTA);
    
    // default = play button
    //tft_fillTriangle(130, 200, 130, 160, 150, 180, ILI9341_WHITE);
    
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