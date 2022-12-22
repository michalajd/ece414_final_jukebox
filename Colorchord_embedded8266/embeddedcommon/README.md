ColorChord: Embedded
====================
ColorChord: Embedded is a version of the ColorChord software that is optimized to run on embedded devices with limited resources. It uses the same algorithms as ColorChord, but has fewer features and requires more configuration to be done at compile time. It is capable of running at a sample rate of 12ksps on a 80 MHz ESP8266 microcontroller at 140Hz loop time.

This software is part of the open source project by cnlohr and is available for use on Linux and ESP8266 devices. It includes an IIR filter to improve note detection and can output to WS2812 LEDs. The number of LEDs, octaves, bins per octave, and IIR coefficient can be modified using preprocessor macros. The sample rate can also be specified.

There are several adjustable parameters that can be controlled using preprocessor macros, including the number of LEDs, the number of octaves and bins per octave to be checked, and the IIR coefficient for the note finder. The project is currently missing some features and outputs that are available in the original ColorChord2.
