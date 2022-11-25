#ifndef _pin_magic_
#define _pin_magic_

// Modified by Matthew Watkins for PIC32

// This header file serves two purposes:
//
// 1) Isolate non-portable MCU port- and pin-specific identifiers and
//    operations so the library code itself remains somewhat agnostic
//    (PORTs and pin numbers are always referenced through macros).
//
// 2) GCC doesn't always respect the "inline" keyword, so this is a
//    ham-fisted manner of forcing the issue to minimize function calls.
//    This sometimes makes the library a bit bigger than before, but fast++.
//    However, because they're macros, we need to be SUPER CAREFUL about
//    parameters -- for example, write8(x) may expand to multiple PORT
//    writes that all refer to x, so it needs to be a constant or fixed
//    variable and not something like *ptr++ (which, after macro
//    expansion, may increment the pointer repeatedly and run off into
//    la-la land).  Macros also give us fine-grained control over which
//    operations are inlined on which boards (balancing speed against
//    available program space).

// When using the TFT shield, control and data pins exist in set physical
// locations, but the ports and bitmasks corresponding to each vary among
// boards.  A separate set of pin definitions is given for each supported
// board type.
// When using the TFT breakout board, control pins are configurable but
// the data pins are still fixed -- making every data pin configurable
// would be much too slow.  The data pin layouts are not the same between
// the shield and breakout configurations -- for the latter, pins were
// chosen to keep the tutorial wiring manageable more than making optimal
// use of ports and bitmasks.  So there's a second set of pin definitions
// given for each supported board.


// Pixel read operations require a minimum 400 nS delay from RD_ACTIVE
// to polling the input pins.  At 40 MHz, one machine cycle is 25 nS.
// This code burns 16 cycles (400 nS) doing nothing; 
#define DELAY16        \
  asm volatile(       \
    "nop" "\n\t" \
    "nop" "\n\t" \
    "nop" "\n\t" \
    "nop" "\n\t" \
    "nop" "\n\t" \
    "nop" "\n\t" \
    "nop" "\n\t" \
    "nop" "\n\t" \
    "nop" "\n\t" \
    "nop" "\n\t" \
    "nop" "\n\t" \
    "nop" "\n\t" \
    "nop" "\n\t" \
    "nop" "\n\t" \
    "nop" "\n\t" \
    "nop" "\n\t" \
    ::);


  // LCD control lines:
  // RD (read), WR (write), CD (command/data), CS (chip select)
  //All assumed on PORTB
  #define RD_BIT BIT_9
  #define WR_BIT BIT_10
  #define CD_BIT BIT_11
  #define CS_BIT BIT_14
  //On PORTA
  #define RESET_BIT BIT_2

  // These are macros for I/O operations...

  // Write 8-bit value to LCD data lines
  #define write8inline(d) {                          \
    LATB = (PORTB & 0xFE40) | ((d) & 0x3F) | ( (d<<1) & 0x180); \
    WR_STROBE; } // STROBEs are defined later

  // Read 8-bit value from LCD data lines.  The signle argument
  // is a destination variable; this isn't a function and doesn't
  // return a value in the conventional sense.
  #define read8inline(result) {                       \
    RD_ACTIVE;                                        \
    DELAY16;                                           \
    result = (PORTB & 0x3F) | ((PORTB>>1) & 0xC0); \
    RD_IDLE; }

  // These set the PORT directions as required before the write and read
  // operations.  Because write operations are much more common than reads,
  // the data-reading functions in the library code set the PORT(s) to
  // input before a read, and restore them back to the write state before
  // returning.  This avoids having to set it for output inside every
  // drawing method.  The default state has them initialized for writes.
  #define setWriteDirInline() TRISBCLR = 0x1BF; //{ DDRD |=  B11010000; DDRB |=  B00101111; }
  #define setReadDirInline()  TRISBSET = 0x1BF; //{ DDRD &= ~B11010000; DDRB &= ~B00101111; }


  // As part of the inline control, macros reference other macros...if any
  // of these are left undefined, an equivalent function version (non-inline)
  // is declared later.  The Uno has a moderate amount of program space, so
  // only write8() is inlined -- that one provides the most performance
  // benefit, but unfortunately also generates the most bloat.  This is
  // why only certain cases are inlined for each board.
  #define write8 write8inline
  //Added by M. Watkins
  #define read8 read8inline
  #define setWriteDir setWriteDirInline
  #define setReadDir setReadDirInline

#define RD_ACTIVE mPORTBClearBits(RD_BIT)
#define RD_IDLE   mPORTBSetBits(RD_BIT)
#define WR_ACTIVE mPORTBClearBits(WR_BIT)
#define WR_IDLE   mPORTBSetBits(WR_BIT)
// nop added after changes to C/D line to allow enough time for change to register
// without nop operations where failing on PIC32MX250128B
#define CD_COMMAND mPORTBClearBits(CD_BIT); asm volatile("nop\n\r")
#define CD_DATA    mPORTBSetBits(CD_BIT); asm volatile("nop\n\r")
//#define CD_COMMAND mPORTBClearBits(CD_BIT); 
//#define CD_DATA    mPORTBSetBits(CD_BIT); 
#define CS_ACTIVE  mPORTBClearBits(CS_BIT)
#define CS_IDLE    mPORTBSetBits(CS_BIT)
#define RESET_LOW  mPORTAClearBits(RESET_BIT)
#define RESET_HIGH mPORTASetBits(RESET_BIT)

// Data write strobe, ~2 instructions and always inline
#define WR_STROBE { WR_ACTIVE; WR_IDLE; }

// These higher-level operations are usually functionalized,
// except on Mega where's there's gobs and gobs of program space.

// Set value of TFT register: 8-bit address, 8-bit value
#define writeRegister8inline(a, d) { \
  CD_COMMAND; write8(a); CD_DATA; write8(d); }

// Set value of TFT register: 16-bit address, 16-bit value
// See notes at top about macro expansion, hence hi & lo temp vars
#define writeRegister16inline(a, d) { \
  uint8_t hi, lo; \
  hi = (a) >> 8; lo = (a); CD_COMMAND; write8(hi); write8(lo); \
  hi = (d) >> 8; lo = (d); CD_DATA   ; write8(hi); write8(lo); }

// Set value of 2 TFT registers: Two 8-bit addresses (hi & lo), 16-bit value
#define writeRegisterPairInline(aH, aL, d) { \
  uint8_t hi = (d) >> 8, lo = (d); \
  CD_COMMAND; write8(aH); CD_DATA; write8(hi); \
  CD_COMMAND; write8(aL); CD_DATA; write8(lo); }

#define tft_writeRegister8 writeRegister8inline
#define tft_writeRegister16 writeRegister16inline
#define tft_writeRegisterPair writeRegisterPairInline

#endif // _pin_magic_
