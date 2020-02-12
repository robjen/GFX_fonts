# GFX_fonts
A collection of fonts compatible with Adafruit GFX library mostly small many fixed fixed size (will not not exceed the given dimensions) and some monospaced (each character are all same size)

I got sick of searching for and tweaking fonts for various projects so I'm bringing together the ones I have drawn for things I have made (flip dot, VFD, OLED and other tiny or low resolution displays)

Also annoys me that 5x7 inbuilt font in Adafruit is **not** 5x7 as I would understand it i.e. it drops below the line, not useful when I only have a 7 row high flip dot display so I needed to fix that !

naming convention example:
  * **FontXxYFixedNum**  - only continas numbers (possible special characters, read the file to check) max size X by Y
  * **FontXxYFixedMono**  - mono spaced all characters including space are same width X by Y
  * **FontXxYFixedMonoUpper**  - mono spaced but only upper case characters available
  * **FontXxY**  - not a fixed size may decend below the line common size is X by Y

  * **FontXxY[Fixed:Mono:Num:Upper:Thin:Bold]**

1. Size in pixels is **X** (horizontal) by **Y** (vertical) this is ‘approximate’ if not fixed
2. **Fixed** is bound within the maximum dimensions given e.g. 5x7 all available characters will fit in that space. If **Fixed** is omitted from name then the font will descend below line for lower case characters and possibly symbols.
3. **Mono** is a monospace font with fixed width for all characters and space. If **Mono** is omitted then the character widths and cursor advance are variable/proportional as required.
4. If **Num** is specified then the font contains only numbers and possibly some punctuation (typically the ':' and '.') read the font file to check whats in there as I may have include a few alternate number sets in some fonts.
5. if **Upper** is specified then the font contains only the upper case A-Z to save space or possibly because lower case characters would be very poorly rendered in the space
6. if **Thin** is specified then the font is as narrow as pratical
7. if **Bold** is specified then the font is roughly double stroke width

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

  * **Font2x5FixedNum** contains numbers only in 2x5 and a ':' and '.'
  * **Font3x7FixedNum** contains numbers only in 'rounder' or 'squarer' types and few variation of ':' see file for details
  * **Font3x5FixedNum** contains 2 sets of numbers only in 'rounder' or 'squarer' ':' '.' see file for details
  * **Font4x7Fixed** proportional spacing none bigger than 4x7, most in 3x7
  * **Font4x5Fixed** proportional spacing none bigger than 4x5, most in 3x5
  * **Font5x5Fixed** proportional spacing none bigger than 5x5, most in 4x5
  * **Font5x7FixedMono** truly contained in 5x7 monospaced all characters and symbols including space
  * **Font5x7Fixed** proportional spacing for lower case and special characters none bigger than 5x7


more to follow soon ...
  
