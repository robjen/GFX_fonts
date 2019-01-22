# GFX_fonts
A collection of fonts compatible with Adafruit GFX library mostly small, many fixed fixed size and monospaced

I got sick of searching for and tweaking fonts for various projects so I'm bringing together the ones I have drawn for things I have made (flip dot, VFD, OLED and other tiny or low resolution displays)

Also annoys me that 5x7 inbuilt font in Adafruit is not  as I would understand it i.e. it drops below the line, not useful when I only have a 7 row high flip dot display so needed to fix that !

naming convention example:
  * **FontXxYFixedMonoNum** 
  * **FontXxYFixedMonoNum** 
  * **FontXxYFixedMonoUpper**
  * **FontXxYFixedMono**
  * **FontXxY** 

1. Size of font in pixels is **X** (horizontal) by **Y** (vertical) this is ‘approximate’ if not fixed
2. Every font I describe as **Fixed** is bound within the dimensions I give e.g. 5x7 all available characters will fit in that space. If **Fixed** is omitted from name then the font will descend below line for lower case characters and possibly symbols 
3. If **Mono** is specified it is a monospace font with fixed width for all characters and space. If **Mono** is omitted then the character widths and cursor advance are variable
4. If **Num** is specified then the font contains only numbers and possibly some punctuation (typically the ':' and '.') read the font to check whats in there as I've include a few alternate number sets in some fonts, edit these out if space is tight
5. if **Upper** is specified then the font contains only the upper case A-Z to save space or possibly because lower case characters would be very poor

## Using Fonts with Adafruit GFX library

Take a copy of my GFX_Font library and drop it in your arduino libraries directory, include font in your project (path will find things in libraries directory) and ues the font by name in place of the system font

```C
#include "Font3x7FixedMonoNum.h"

...

  display.setFont(&Font3x7FixedMonoNum);  // choose font
  display.setTextSize(1);    
  display.setTextColor(1);
  display.setTextWrap(false);
  display.setCursor(0,7);   // as per Adafruit convention custom fonts draw up from line so move cursor
  display.println("123456789");

  display.setFont() // return to the system font

```



## Available GFX Fonts

so far I've added the following ...

  * **Font2x5FixedMonoNum** contains number only in tiny format and a ':' and '.'
  * **Font3x7FixedMonoNum** contains thin font 2 sets of numbers only in 'rounder' or 'square' and 3 types of ':' see file for details
  * **Font5x7FixedMono** truly continad in 5x7 monospaced
  * **Font3x7Fixed** proportion spacing for lower case and special characters but most 5x7 bitmap

more to follow soon ...
  
