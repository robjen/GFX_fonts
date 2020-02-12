/**
** an ultra thin 2 by 5 font just for numbers
*
* needs to be mono spaced to be as readable as possible
*
* Author Rob Jennings
*/

const uint8_t Font2x5FixedMonoNumBitmaps[] PROGMEM = {
  0xFF, 0xF0, 0xF8, 0x00, 0xDE, 0xC0, 0xDD, 0xC0, 0xAD, 0x40, 0xED, 0xC0,
  0xAF, 0xC0, 0xD5, 0x40, 0xF3, 0xC0, 0xFD, 0x40, 0x50, 0x00
};

const GFXglyph Font2x5FixedMonoNumGlyphs[] PROGMEM = {
  {     0,   2,   5,   3,    0,   -5 }   // '0'
 ,{     2,   1,   5,   3,    1,   -5 }   // '1'
 ,{     4,   2,   5,   3,    0,   -5 }   // '2'
 ,{     6,   2,   5,   3,    0,   -5 }   // '3'
 ,{     8,   2,   5,   3,    0,   -5 }   // '4'
 ,{    10,   2,   5,   3,    0,   -5 }   // '5'
 ,{    12,   2,   5,   3,    0,   -5 }   // '6'
 ,{    14,   2,   5,   3,    0,   -5 }   // '7'
 ,{    16,   2,   5,   3,    0,   -5 }   // '8'
 ,{    18,   2,   5,   3,    0,   -5 }   // '9'
 ,{    20,   1,   5,   3,    1,   -5 }   // ':'
};

const GFXfont Font2x5FixedMonoNum PROGMEM = {
  (uint8_t  *)Font2x5FixedMonoNumBitmaps,
  (GFXglyph *)Font2x5FixedMonoNumGlyphs,
  0x30, 0x3A, 5};
