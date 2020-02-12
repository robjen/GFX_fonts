/**
*  tiny font just for numbers 3x7
*  2 styles 'square ascii-10' and 'round ascii'
*  : ; and . (ascii <)
*
* Author Rob Jennings
*/


const uint8_t Font3x5FixedNumBitmaps[] PROGMEM = {
  0xF6, 0xDE, 0x00, 0x49, 0x24, 0x00, 0xE7, 0xCE, 0x00, 0xE7, 0x9E, 0x00,
  0xB7, 0x92, 0x00, 0xF3, 0x9E, 0x00, 0xF3, 0xDE, 0x00, 0xE4, 0x92, 0x00,
  0xF7, 0xDE, 0x00, 0xF7, 0x9E, 0x00, 0x76, 0xDC, 0x00, 0x59, 0x2E, 0x00,
  0xC5, 0x4E, 0x00, 0xC5, 0x1C, 0x00, 0x97, 0x92, 0x00, 0xF3, 0x1C, 0x00,
  0x73, 0x54, 0x00, 0xE5, 0x48, 0x00, 0x55, 0x54, 0x00, 0x55, 0x9C, 0x00,
  0xA0, 0xB0, 0x80
};

const GFXglyph Font3x5FixedNumGlyphs[] PROGMEM = {
  {     0,   3,   5,   4,    0,   -5 }   // '0 square'
 ,{     3,   3,   5,   4,    0,   -5 }   // '1'
 ,{     6,   3,   5,   4,    0,   -5 }   // '2'
 ,{     9,   3,   5,   4,    0,   -5 }   // '3'
 ,{    12,   3,   5,   4,    0,   -5 }   // '4'
 ,{    15,   3,   5,   4,    0,   -5 }   // '5'
 ,{    18,   3,   5,   4,    0,   -5 }   // '6'
 ,{    21,   3,   5,   4,    0,   -5 }   // '7'
 ,{    24,   3,   5,   4,    0,   -5 }   // '8'
 ,{    27,   3,   5,   4,    0,   -5 }   // '9'
 ,{    30,   3,   5,   4,    0,   -5 }   // '0 round'
 ,{    33,   3,   5,   4,    0,   -5 }   // '1'
 ,{    36,   3,   5,   4,    0,   -5 }   // '2'
 ,{    39,   3,   5,   4,    0,   -5 }   // '3'
 ,{    42,   3,   5,   4,    0,   -5 }   // '4'
 ,{    45,   3,   5,   4,    0,   -5 }   // '5'
 ,{    48,   3,   5,   4,    0,   -5 }   // '6'
 ,{    51,   3,   5,   4,    0,   -5 }   // '7'
 ,{    54,   3,   5,   4,    0,   -5 }   // '8'
 ,{    57,   3,   5,   4,    0,   -5 }   // '9'
 ,{    60,   1,   3,   2,    0,   -4 }   // ':'
 ,{    61,   1,   4,   2,    0,   -4 }   // ';'
 ,{    62,   1,   1,   2,    0,   -1 }   // '.'
};

const GFXfont Font3x5FixedNum PROGMEM = {
  (uint8_t  *)Font3x5FixedNumBitmaps,
  (GFXglyph *)Font3x5FixedNumGlyphs,
  0x26, 0x3C, 5};