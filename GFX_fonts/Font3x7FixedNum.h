/**
** a thin 3 by 7 font just for numbers
*
* squarer number and rounder numbers used ascii code - 10
*
* Author Rob Jennings
*/


const uint8_t Font3x7FixedNumBitmaps[] PROGMEM = {

/* alternate squarer font */
  0xF6, 0xDB, 0x78, // 0
  0x59, 0x24, 0xB8, // 1 (no alternate)
  0xE4, 0xF9, 0x38, // 2
  0xE4, 0xF2, 0x78, // 3
  0xB6, 0xF2, 0x48, // 4
  0xF2, 0x72, 0x78, // 5
  0xF2, 0x7B, 0x78, // 6
  0xE4, 0x92, 0x48, // 7
  0xF6, 0xFB, 0x78, // 8
  0xF6, 0xF2, 0x78, // 9

/* rounder style font */
  0x76, 0xDB, 0x70, // 0
  0x59, 0x24, 0xB8, // 1
  0xC4, 0xA5, 0x38, // 2
  0xC4, 0xE2, 0x70, // 3
  0x92, 0xDE, 0x48, // 4
  0xF2, 0x62, 0x70, // 5
  0x72, 0x6B, 0x50, // 6
  0xE4, 0xA5, 0x20, // 7
  0x56, 0xAB, 0x50, // 8
  0x56, 0xB2, 0x70, // 9

  0x28,             // :
  0x6C,             // : (large dot maps to ; )
  0x44,             // : (small far space maps to < )
};


/* {offset, width, height, advance cursor, x offset, y offset} */
const GFXglyph Font3x7FixedNumGlyphs[] PROGMEM = {
   { 0, 3, 7, 4, 0, -7 },   /* 0x26 zero */
   { 3, 3, 7, 4, 0, -7 },   /* 0x27 one */
   { 6, 3, 7, 4, 0, -7 },   /* 0x28 two */
   { 9, 3, 7, 4, 0, -7 },   /* 0x29 three */
   { 12, 3, 7, 4, 0, -7 },  /* 0x2A four */
   { 15, 3, 7, 4, 0, -7 },  /* 0x2B five */
   { 18, 3, 7, 4, 0, -7 },  /* 0x2C six */
   { 21, 3, 7, 4, 0, -7 },  /* 0x2D seven */
   { 24, 3, 7, 4, 0, -7 },  /* 0x2E eight */
   { 27, 3, 7, 4, 0, -7 },  /* 0x2F nine */
   { 30, 3, 7, 4, 0, -7 },   /* 0x30 zero */
   { 33, 3, 7, 4, 0, -7 },   /* 0x31 one */
   { 36, 3, 7, 4, 0, -7 },   /* 0x32 two */
   { 39, 3, 7, 4, 0, -7 },   /* 0x33 three */
   { 42, 3, 7, 4, 0, -7 },  /* 0x34 four */
   { 45, 3, 7, 4, 0, -7 },  /* 0x35 five */
   { 48, 3, 7, 4, 0, -7 },  /* 0x36 six */
   { 51, 3, 7, 4, 0, -7 },  /* 0x37 seven */
   { 54, 3, 7, 4, 0, -7 },  /* 0x38 eight */
   { 57, 3, 7, 4, 0, -7 },  /* 0x39 nine */
   { 60, 1, 7, 2, 0, -7 },  /* 0x3A : */
   { 61, 1, 7, 2, 0, -7 },  /* 0x3B : */
   { 62, 1, 7, 2, 0, -7 },  /* 0x3C : */
};

const GFXfont Font3x7FixedNum PROGMEM = {
  (uint8_t  *)Font3x7FixedNumBitmaps,
  (GFXglyph *)Font3x7FixedNumGlyphs,
  0x26, 0x3C, 7};
