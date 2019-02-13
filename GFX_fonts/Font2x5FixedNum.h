/**
** a tiny 2 by 5 font just for numbers
*
* Rob Jennings
*/


const uint8_t Bitmaps2x5FixedNum[] PROGMEM = {
  0xFF, 0xF0, // 0
  0x55, 0x40, // 1
  0xDE, 0xC0, // 2
  0xDD, 0xC0, // 3
  0xAD, 0x40, // 4
  0xED, 0x40, // 5
  0xAB, 0xC0, // 6
  0xD5, 0x40, // 7
  0xF3, 0xC0, // 8
  0xFD, 0x40, // 9
  0x50        // :
};


/* {offset, width, height, advance cursor, x offset, y offset} */
const GFXglyph Glyphs2x5FixedNum[] PROGMEM = {
   { 0, 2, 5, 3, 0, -5 },   /* 0x30 zero */
   { 2, 2, 5, 3, 0, -5 },   /* 0x31 one */
   { 4, 2, 5, 3, 0, -5 },   /* 0x32 two */
   { 6, 2, 5, 3, 0, -5 },   /* 0x33 three */
   { 8, 2, 5, 3, 0, -5 },   /* 0x34 four */
   { 10, 2, 5, 3, 0, -5 },  /* 0x35 five */
   { 12, 2, 5, 3, 0, -5 },  /* 0x36 six */
   { 14, 2, 5, 3, 0, -5 },  /* 0x37 seven */
   { 16, 2, 5, 3, 0, -5 },  /* 0x38 eight */
   { 18, 2, 5, 3, 0, -5 },  /* 0x39 nine */
   { 20, 1, 5, 2, 0, -5 },  /* 0x40 : */
};

const GFXfont Font2x5FixedNum PROGMEM = {
  (uint8_t  *)Bitmaps2x5FixedNum,
  (GFXglyph *)Glyphs2x5FixedNum,
  0x30, 0x40, 5};
