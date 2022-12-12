#include <xc.h>
#include <plib.h>
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include "fsm.h"
#include "adafruit.h"
#include "timer1.h"
#include "uart1.h"
#include "rfid.h"
#include "string.h"

#define _SUPPRESS_PLIB_WARNING 1

int pause_playCount;
char* songName;
char* artist;

int concat_int(int a, int b){
    
    int c = (a << 8)|(b); // concats 2 hexadecimal numbers
    return c;
    
}

void readTag(int num){
    
    switch (num){
        case 0x5A12:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x01);
            uart1_txwrite(0xB4);
            
            songName = "September";
            artist = "Earth, Wind, and Fire";
            break;
            
        case 0x1AE9:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x02);
            uart1_txwrite(0xB5);
            
            songName = "Sleigh Ride";
            artist = "The Ronnettes";
            break;
            
        case 0x5853:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x03);
            uart1_txwrite(0xB6);
            
            songName = "Snake Eater";
            artist = "Cynthia Harrell";
            break;
            
        case 0x58AC:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x04);
            uart1_txwrite(0xB7);
            
            songName = "Hotel California";
            artist = "The Eagles";
            break;
            
        case 0x599C:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x05);
            uart1_txwrite(0xB8);
            
            songName = "Never Gonna Give You Up";
            artist = "Rick Astley";
            break;
        
            case 0x57AA:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x06);
            uart1_txwrite(0xB9);
            
            songName = "Things We Said Today";
            artist = "The Beatles";
            break;
            
            case 0x47BB:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x07);
            uart1_txwrite(0xBA);
            
            songName = "D.I.Y.";
            artist = "Peter Gabriel";
            break;
            
            case 0x4D47:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x08);
            uart1_txwrite(0xBB);
            
            songName = "Purple Rain (Live)";
            artist = "Cory Henry";
            break;
            
            case 0x7737:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x09);
            uart1_txwrite(0xBC);
            
            songName = "The Impression That I Get";
            artist = "The Mighty Mighty Bosstones";
            break;
            
            case 0x47CC: // 10
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x0A);
            uart1_txwrite(0xBD);
            
            songName = "Dreamline";
            artist = "Rush";
            break;
            
            case 0x3608:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x0B);
            uart1_txwrite(0xBE);
            
            songName = "Theme From New York, New York";
            artist = "Frank Sinatra";
            break;
            
            case 0x5F68:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x0C);
            uart1_txwrite(0xBF);
            
            songName = "Can't Stop";
            artist = "Red Hot Chili Peppers";
            break;
            
            case 0x2B78:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x0D);
            uart1_txwrite(0xC0);
            
            songName = "Waterloo";
            artist = "ABBA";
            break;
            
            case 0x5928:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x0E);
            uart1_txwrite(0xC1);
            
            songName = "Clint Eastwood";
            artist = "Gorillaz";
            break;
            
            case 0x59D0:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x0F);
            uart1_txwrite(0xC2);
            
            songName = "Losing You";
            artist = "boy pablo";
            break;
            
            case 0x3426:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x10);
            uart1_txwrite(0xC3);
            
            songName = "Cello Suite N.1 in G";
            artist = "J. S. Bach";
            break;
            
            case 0x2544:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x11);
            uart1_txwrite(0xC4);
            
            songName = "I'm a Believer";
            artist = "Smash Mouth";
            break;
            
            case 0x33BE:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x12);
            uart1_txwrite(0xC5);
            
            songName = "On Lafayette!";
            artist = "Anonymous";
            break;
            
            case 0x2276:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x13);
            uart1_txwrite(0xC6);
            
            songName = "Everybody (Backstreet's Back)";
            artist = "The Backstreet Boys";
            break;
            
            case 0x5DBE: // 20
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x14);
            uart1_txwrite(0xC7);
            
            songName = "Sir Duke";
            artist = "Stevie Wonder";
            break;
            
            case 0x2B0A:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x15);
            uart1_txwrite(0xC8);
            
            songName = "Don't Fear the Reaper";
            artist = "Blue Oyster Cult";
            break;
            
            case 0x8383:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x16);
            uart1_txwrite(0xC9);
            
            songName = "Read Your Notes";
            artist = "Ismail Jouny";
            break;
            
            case 0x5ADB:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x17);
            uart1_txwrite(0xCA);
            
            songName = "Everybody Wants To Rule the World";
            artist = "Tears for Fears";
            break;
            
            case 0x25F0:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x18);
            uart1_txwrite(0xCB);
            
            songName = "Borderline";
            artist = "Tame Impala";
            break;
            
            case 0x5668:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x19);
            uart1_txwrite(0xCC);
            
            songName = "The Home Depot Beat";
            artist = "The Home Depot";
            break;
            
            case 0x4E0B:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x1A);
            uart1_txwrite(0xCD);
            
            songName = "Resonance";
            artist = "Home";
            break;
            
            case 0x255B:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x1B);
            uart1_txwrite(0xCE);
            
            songName = "The Less I Know the Better";
            artist = "Tame Impala";
            break;
            
            case 0x458F:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x1C);
            uart1_txwrite(0xCF);
            
            songName = "Lady Hear Me Tonight";
            artist = "Modjo";
            break;
            
            case 0x83F2: 
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x1D);
            uart1_txwrite(0xD0);
            
            songName = "Drops in the Lake";
            artist = "Lord Huron";
            break;
            
            case 0x5B2F: // 30
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x1E);
            uart1_txwrite(0xD1);
            
            songName = "Levitating";
            artist = "Dua Lipa";
            break;
            
            case 0x56D7:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x1F);
            uart1_txwrite(0xD2);
            
            songName = "The Night We Met";
            artist = "Lord Huron";
            break;
            
            case 0x2A86:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x20);
            uart1_txwrite(0xD3);
            
            songName = "Doctor Doctor";
            artist = "UFO";
            break;
            
            case 0x84B5:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x21);
            uart1_txwrite(0xD4);
            
            songName = "Zanzibar";
            artist = "Billy Joel";
            break;
            
            case 0x470F:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x22);
            uart1_txwrite(0xD5);
            
            songName = "Roundabout";
            artist = "Yes";
            break;
            
            case 0x28C6:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x23);
            uart1_txwrite(0xD6);
            
            songName = "As It Was";
            artist = "Harry Styles";
            break;
            
            case 0x225B:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x24);
            uart1_txwrite(0xD7);
            
            songName = "SOS";
            artist = "Allie Sherlock";
            break;
            
            case 0x2236:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x25);
            uart1_txwrite(0xD8);
            
            songName = "Hideaway";
            artist = "Jacob Collier";
            break;
            
            case 0x5D91:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x26);
            uart1_txwrite(0xD9);
            
            songName = "Notion";
            artist = "The Rare Occasions";
            break;
            
            case 0x5B24:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x27);
            uart1_txwrite(0xDA);
            
            songName = "Watermelon Man";
            artist = "Herbie Hancock";
            break;
            
            case 0x8368: // 40
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x28);
            uart1_txwrite(0xDB);
            
            songName = "Another Day of Sun";
            artist = "La La Land Soundtrack";
            break;
            
            case 0x773E:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x29);
            uart1_txwrite(0xDC);
            
            songName = "Adventure of a Lifetime";
            artist = "Coldplay";
            break;
            
            case 0x3650:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x2A);
            uart1_txwrite(0xDD);
            
            songName = "Drops of Jupiter (Live)";
            artist = "Joshua Bassett";
            break;
            
            case 0x4824:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x2B);
            uart1_txwrite(0xDE);
            
            songName = "Everybody Talks";
            artist = "Neon Trees";
            break;
            
            case 0x1BB7:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x2C);
            uart1_txwrite(0xDF);
            
            songName = "O Amor, O Ceu u o Mar";
            artist = "Lisa Ono";
            break;
            
            case 0x59C3:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x2D);
            uart1_txwrite(0xE0);
            
            songName = "After Dark";
            artist = "Mr. Kitty";
            break;
            
            case 0x57BF:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x2E);
            uart1_txwrite(0xE1);
            
            songName = "Mr. Brightside";
            artist = "The Killers";
            break;
            
            case 0x57DA:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x2F);
            uart1_txwrite(0xE2);
            
            songName = "Social Cues";
            artist = "Cage the Elephant";
            break;
            
            case 0x5870:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x30);
            uart1_txwrite(0xE3);
            
            songName = "More Than a Woman";
            artist = "Bee Gees";
            break;
            
            case 0x5732:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x31);
            uart1_txwrite(0xE4);
            
            songName = "Dancing Queen";
            artist = "ABBA";
            break;
            
            case 0x2AC7: // 50
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x32);
            uart1_txwrite(0xE5);
            
            songName = "Hey Ya";
            artist = "Outkast";
            break;
            
            case 0x2560:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x33);
            uart1_txwrite(0xE6);
            
            songName = "Sweden";
            artist = "C418";
            break;
            
            case 0x5ECB:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x34);
            uart1_txwrite(0xE7);
            
            songName = "Coconut Mall";
            artist = "Mario Kart Soundtrack";
            break;
            
            case 0x4DD2:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x35);
            uart1_txwrite(0xE8);
            
            songName = "Otherside";
            artist = "Lena Reine";
            break;
            
            case 0x5CFE:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x36);
            uart1_txwrite(0xE9);
            
            songName = "Pigstep";
            artist = "Lena Reine";
            break;
            
            case 0x5B05:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x37);
            uart1_txwrite(0xEA);
            break;
            
            case 0x36A9:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x38);
            uart1_txwrite(0xEB);
            break;
            
            case 0x2AD5:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x39);
            uart1_txwrite(0xEC);
            break;
            
            case 0x65EF:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x3A);
            uart1_txwrite(0xED);
            break;
            
            case 0x2886:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x3B);
            uart1_txwrite(0xEE);
            break;
            
            case 0x2219: // 60
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x3C);
            uart1_txwrite(0xEF);
            break;
            
            case 0x44A7:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x3D);
            uart1_txwrite(0xF0);
            break;
            
            case 0x47B2:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x3E);
            uart1_txwrite(0xF1);
            break;
            
            case 0x58AF:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x3F);
            uart1_txwrite(0xF2);
            break;
            
            case 0x32FE:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x40);
            uart1_txwrite(0xF3);
            break;
            
            case 0x5B91:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x41);
            uart1_txwrite(0xF4);
            break;
            
            case 0x2A67:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x42);
            uart1_txwrite(0xF5);
            break;
            
            case 0x218A:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x43);
            uart1_txwrite(0xF6);
            break;
            
            case 0x330E:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x44);
            uart1_txwrite(0xF7);
            break;
            
            case 0x2A9F:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x45);
            uart1_txwrite(0xF8);
            break;
            
            case 0x826A: // 70
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x46);
            uart1_txwrite(0xF9);
            break;
            
            case 0x57E3:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x47);
            uart1_txwrite(0xFA);
            break;
            
            case 0x5AFE:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x48);
            uart1_txwrite(0xFB);
            break;
            
            case 0x462E:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x49);
            uart1_txwrite(0xFC);
            break;
            
            case 0x5B09:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x4A);
            uart1_txwrite(0xFD);
            break;
            
            case 0x2ADD:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x4B);
            uart1_txwrite(0xFE);
            break;
            
            case 0x2552:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x4C);
            uart1_txwrite(0xFF);
            break;
            
            case 0x8365: // 77
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x4D);
            uart1_txwrite(0x100);
            break;
            
            case 0x7593:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x4E);
            uart1_txwrite(0x101);
            break;
            
            case 0x4E42: 
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x4F);
            uart1_txwrite(0x102);
            break;
            
            case 0x4D80: // 80
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x50);
            uart1_txwrite(0x103);
            break;
            
            case 0x56F6:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x51);
            uart1_txwrite(0x104);
            break;
            
            case 0x463A:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x52);
            uart1_txwrite(0x105);
            break;
            
            case 0x6AFE:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x53);
            uart1_txwrite(0x106);
            break;
            
            case 0x2617:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x54);
            uart1_txwrite(0x107);
            break;
            
            case 0x4E5F:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x55);
            uart1_txwrite(0x108);
            break;
            
            case 0x5ABA:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x56);
            uart1_txwrite(0x109);
            break;
            
            case 0x2F9E:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x57);
            uart1_txwrite(0x10A);
            break;
            
            case 0x4B76:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x58);
            uart1_txwrite(0x10B);
            break;
            
            case 0x831C:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x59);
            uart1_txwrite(0x10C);
            break;
            
            case 0x4DF3: // 90
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x5A);
            uart1_txwrite(0x10D);
            break;
            
            case 0x57F5:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x5B);
            uart1_txwrite(0x10E);
            break;
            
            case 0x5CF8:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x5C);
            uart1_txwrite(0x10F);
            break;
            
            case 0x5B8A:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x5D);
            uart1_txwrite(0x110);
            break;
            
            case 0xAE1B:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x5E);
            uart1_txwrite(0x111);
            break;
            
            case 0x4648:
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x5F);
            uart1_txwrite(0x112);
            break;
            
        default:
            
            uart1_txwrite(0xAA);
            uart1_txwrite(0x07);
            uart1_txwrite(0x02);
            uart1_txwrite(0x00);
            uart1_txwrite(0x05);
            uart1_txwrite(0xB8);
            songName = "Never Gonna Give You Up";
            artist = "Rick Astley";
            
            
            break;
            
    }
    
}
const char* retName(){
    return songName;
}

const char* artName() {
    return artist;
}

uint8_t tag_read_bool() {
    return 1;
}

void tag(char temp_buff){

        if(temp_buff == 0x5A){ // Blue tag with wire
            uart1_txwrite_str("#0\n"); // Rick Astley
        }
        else if(temp_buff == 0x36){ // Green tag
            uart1_txwrite_str("#1\n"); // September
        } 
        else if(temp_buff == 0x2B){ // Yellow tag
            uart1_txwrite_str("#2\n"); // The Beatles
        }
        else if(temp_buff == 0x1A){ // Red tag
            uart1_txwrite_str("#3\n"); // Purple Rain
        }
        else if(temp_buff == 0x59){ // Blue tag
            uart1_txwrite_str("#4\n"); // Snake Eater
        }
        else if(temp_buff == 0x45){ // Black tag
            uart1_txwrite_str("#5\n"); // Professor Nestor's song
        }
        else if(temp_buff == 0x4D){ // Black Tag with wire
            uart1_txwrite_str("q\n"); // Master quit tag
        }
        else if (temp_buff == 0x47){
            
            //uart1_txwrite_str("-\n");
            
        }
        else if (temp_buff == 0x77){
            
            //uart1_txwrite_str("+\n");
            
        }
        else if (temp_buff == 0x58){
            pause_play();
        }
        else{
            uart1_txwrite_str("#0\n");
        }
}

void volumeup(){
    int i;
    for(i = 0; i < 5; i++){
        uart1_txwrite_str("+\n");
    }
}

void volumedown(){
    int j;
    for(j = 0; j < 5; j++){
        uart1_txwrite_str("-\n");
    }
}

void pause_play(){
    pause_playCount++;
    if((pause_playCount % 2) != 0){
        uart1_txwrite_str("=");
    }
    else {
        uart1_txwrite_str(">");
    }
    
}

uint8_t portb7_in_read(){
    uint8_t data = PORTB & 0x80;
    return data;
}

uint8_t portb8_in_read(){
    uint8_t data = PORTB & 0x100;
    return data;
}

uint8_t portb9_in_read(){
    uint8_t data = PORTB & 0x200;
    return data;
}

