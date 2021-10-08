#include "ugui.h"

#ifdef USE_FONT_8X14
UG_FONT FONT_8X14[]={
  // BPP, Width, Height, Chars, Offsets, Bytes per char, Widths presence bit
  0x00,0x08,0x0E,0x00,0xFF,0x00,0x02,0x00,0x0E,0x00,
  // Offsets
  0x80,0x00,0x00,0x7F,
  // Bitmap data
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,   // 0x00
  0x00,0x00,0x00,0x00,0x3C,0x42,0xA5,0x81,0xBD,0x42,0x3C,0x00,0x00,0x00,   // 0x01
  0x00,0x00,0x00,0x00,0x3C,0x7E,0xDB,0xFF,0xDB,0x42,0x3C,0x00,0x00,0x00,   // 0x02
  0x00,0x66,0xFF,0xFF,0xFF,0xFF,0x7E,0x7E,0x3C,0x3C,0x18,0x00,0x00,0x00,   // 0x03
  0x00,0x10,0x18,0x3C,0x7E,0xFF,0x7E,0x3C,0x38,0x10,0x10,0x00,0x00,0x00,   // 0x04
  0x00,0x18,0x3C,0x3C,0x7E,0xFF,0xFF,0x6E,0x18,0x18,0x18,0x00,0x00,0x00,   // 0x05
  0x00,0x10,0x18,0x38,0x7C,0xFE,0xFF,0xFF,0x6E,0x18,0x18,0x00,0x00,0x00,   // 0x06
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,   // 0x07
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,   // 0x08
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,   // 0x09
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,   // 0x0A
  0x00,0x60,0xD0,0xA0,0x3C,0x22,0x41,0x41,0x41,0x22,0x1C,0x00,0x00,0x00,   // 0x0B
  0x00,0x1C,0x22,0x41,0x41,0x41,0x22,0x1C,0x08,0x3E,0x08,0x00,0x00,0x00,   // 0x0C
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,   // 0x0D
  0x00,0x40,0x70,0x58,0x48,0x48,0x48,0x48,0x48,0x78,0x3E,0x0F,0x07,0x00,   // 0x0E
  0x00,0x00,0x00,0x08,0x7E,0x46,0xC3,0x46,0x7E,0x08,0x00,0x00,0x00,0x00,   // 0x0F
  0x00,0x00,0x00,0x01,0x07,0x3F,0xFF,0x3F,0x0F,0x07,0x01,0x00,0x00,0x00,   // 0x10
  0x00,0x00,0x00,0x80,0xE0,0xFC,0xFF,0xFC,0xF0,0xE0,0x80,0x00,0x00,0x00,   // 0x11
  0x00,0x10,0x38,0x54,0x10,0x10,0x10,0x10,0x10,0x10,0x54,0x38,0x10,0x00,   // 0x12
  0x00,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x00,0x24,0x24,0x00,0x00,0x00,   // 0x13
  0x00,0x7E,0x4F,0x4F,0x4F,0x4E,0x48,0x48,0x48,0x48,0x48,0x48,0x48,0x00,   // 0x14
  0x00,0x78,0x04,0x04,0x1C,0x34,0x44,0x4C,0x38,0x60,0x40,0x44,0x3C,0x00,   // 0x15
  0x00,0x00,0x00,0x00,0x00,0x7E,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,   // 0x16
  0x10,0x38,0x54,0x10,0x10,0x10,0x10,0x10,0x10,0x54,0x38,0x10,0x00,0x7C,   // 0x17
  0x00,0x10,0x38,0x54,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x00,   // 0x18
  0x00,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x54,0x38,0x10,0x00,   // 0x19
  0x00,0x00,0x00,0x00,0x10,0x20,0x7E,0x20,0x10,0x00,0x00,0x00,0x00,0x00,   // 0x1A
  0x00,0x00,0x00,0x00,0x08,0x04,0x7E,0x04,0x08,0x00,0x00,0x00,0x00,0x00,   // 0x1B
  0x00,0x00,0x00,0x00,0x02,0x02,0x02,0x02,0x02,0x02,0x7E,0x00,0x00,0x00,   // 0x1C
  0x00,0x00,0x00,0x00,0x00,0x24,0x7E,0x24,0x00,0x00,0x00,0x00,0x00,0x00,   // 0x1D
  0x00,0x00,0x00,0x10,0x10,0x38,0x38,0x3C,0x7E,0x7E,0xFF,0x00,0x00,0x00,   // 0x1E
  0x00,0x00,0x00,0xFF,0x7E,0x7E,0x3C,0x38,0x38,0x10,0x10,0x00,0x00,0x00,   // 0x1F
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,   // 0x20
  0x00,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x00,0x08,0x08,0x00,0x00,0x00,   // 0x21
  0x24,0x24,0x24,0x24,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,   // 0x22
  0x00,0x90,0x90,0x48,0xFE,0x48,0x24,0xFF,0x24,0x12,0x12,0x00,0x00,0x00,   // 0x23
  0x08,0x3C,0x0A,0x0A,0x0A,0x0C,0x18,0x28,0x28,0x28,0x1E,0x08,0x00,0x00,   // 0x24
  0x00,0x86,0x49,0x29,0x29,0x16,0x68,0x94,0x94,0x92,0x61,0x00,0x00,0x00,   // 0x25
  0x00,0x18,0x24,0x24,0x14,0x0C,0x8B,0x91,0x71,0x63,0xFE,0x00,0x00,0x00,   // 0x26
  0x08,0x08,0x08,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,   // 0x27
  0x60,0x30,0x08,0x08,0x04,0x04,0x04,0x04,0x04,0x08,0x08,0x30,0x60,0x00,   // 0x28
  0x06,0x0C,0x10,0x10,0x20,0x20,0x20,0x20,0x20,0x10,0x10,0x0C,0x06,0x00,   // 0x29
  0x00,0x08,0x08,0x66,0x14,0x2C,0x24,0x00,0x00,0x00,0x00,0x00,0x00,0x00,   // 0x2A
  0x00,0x00,0x00,0x00,0x08,0x08,0x08,0x7F,0x08,0x08,0x08,0x00,0x00,0x00,   // 0x2B
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x10,0x08,0x00,   // 0x2C
  0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,   // 0x2D
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,   // 0x2E
  0x40,0x20,0x20,0x20,0x10,0x10,0x18,0x08,0x08,0x04,0x04,0x04,0x02,0x00,   // 0x2F
  0x00,0x18,0x24,0x42,0x42,0x42,0x42,0x42,0x42,0x24,0x18,0x00,0x00,0x00,   // 0x30
  0x00,0x10,0x1E,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0xFE,0x00,0x00,0x00,   // 0x31
  0x00,0x1E,0x20,0x20,0x20,0x10,0x10,0x08,0x04,0x02,0x3E,0x00,0x00,0x00,   // 0x32
  0x00,0x3C,0x40,0x40,0x40,0x38,0x40,0x40,0x40,0x40,0x3C,0x00,0x00,0x00,   // 0x33
  0x00,0x20,0x30,0x28,0x28,0x24,0x22,0x7E,0x20,0x20,0x20,0x00,0x00,0x00,   // 0x34
  0x00,0x7C,0x04,0x04,0x04,0x1C,0x60,0x40,0x40,0x40,0x3C,0x00,0x00,0x00,   // 0x35
  0x00,0x38,0x04,0x02,0x02,0x3A,0x46,0x42,0x42,0x44,0x38,0x00,0x00,0x00,   // 0x36
  0x00,0x7E,0x40,0x20,0x20,0x10,0x08,0x08,0x08,0x04,0x04,0x00,0x00,0x00,   // 0x37
  0x00,0x3C,0x42,0x42,0x22,0x1C,0x24,0x42,0x42,0x42,0x3C,0x00,0x00,0x00,   // 0x38
  0x00,0x1C,0x22,0x42,0x42,0x62,0x5C,0x40,0x40,0x20,0x1C,0x00,0x00,0x00,   // 0x39
  0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,   // 0x3A
  0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x18,0x18,0x10,0x08,0x00,   // 0x3B
  0x00,0x00,0x00,0x00,0x40,0x30,0x08,0x06,0x08,0x30,0x40,0x00,0x00,0x00,   // 0x3C
  0x00,0x00,0x00,0x00,0x00,0x7E,0x00,0x00,0x7E,0x00,0x00,0x00,0x00,0x00,   // 0x3D
  0x00,0x00,0x00,0x00,0x02,0x0C,0x10,0x60,0x10,0x0C,0x02,0x00,0x00,0x00,   // 0x3E
  0x00,0x3E,0x42,0x40,0x20,0x10,0x08,0x08,0x00,0x08,0x08,0x00,0x00,0x00,   // 0x3F
  0x00,0x3C,0x46,0x72,0x49,0x49,0x49,0x69,0xDB,0x22,0x3C,0x00,0x00,0x00,   // 0x40
  0x00,0x00,0x10,0x18,0x28,0x24,0x24,0x42,0x7E,0x42,0x81,0x00,0x00,0x00,   // 0x41
  0x00,0x00,0x3E,0x42,0x42,0x22,0x1E,0x22,0x42,0x42,0x3E,0x00,0x00,0x00,   // 0x42
  0x00,0x00,0x7C,0x02,0x01,0x01,0x01,0x01,0x01,0x02,0x7C,0x00,0x00,0x00,   // 0x43
  0x00,0x00,0x1F,0x21,0x41,0x41,0x41,0x41,0x41,0x21,0x1F,0x00,0x00,0x00,   // 0x44
  0x00,0x00,0x7E,0x02,0x02,0x02,0x3E,0x02,0x02,0x02,0x7E,0x00,0x00,0x00,   // 0x45
  0x00,0x00,0x7E,0x02,0x02,0x02,0x3E,0x02,0x02,0x02,0x02,0x00,0x00,0x00,   // 0x46
  0x00,0x00,0x7C,0x02,0x01,0x01,0x01,0x71,0x41,0x42,0x7C,0x00,0x00,0x00,   // 0x47
  0x00,0x00,0x42,0x42,0x42,0x42,0x7E,0x42,0x42,0x42,0x42,0x00,0x00,0x00,   // 0x48
  0x00,0x00,0x3E,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x3E,0x00,0x00,0x00,   // 0x49
  0x00,0x00,0x3C,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x1E,0x00,0x00,0x00,   // 0x4A
  0x00,0x00,0x42,0x22,0x12,0x0A,0x06,0x0A,0x12,0x22,0x42,0x00,0x00,0x00,   // 0x4B
  0x00,0x00,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x7E,0x00,0x00,0x00,   // 0x4C
  0x00,0x00,0x63,0x63,0x63,0x55,0x55,0x55,0x49,0x41,0x41,0x00,0x00,0x00,   // 0x4D
  0x00,0x00,0x42,0x46,0x46,0x4A,0x4A,0x52,0x52,0x62,0x42,0x00,0x00,0x00,   // 0x4E
  0x00,0x00,0x1C,0x22,0x41,0x41,0x41,0x41,0x41,0x22,0x1C,0x00,0x00,0x00,   // 0x4F
  0x00,0x00,0x3E,0x42,0x42,0x42,0x62,0x1E,0x02,0x02,0x02,0x00,0x00,0x00,   // 0x50
  0x00,0x00,0x1C,0x22,0x41,0x41,0x41,0x41,0x41,0x22,0x1C,0x60,0xC0,0x00,   // 0x51
  0x00,0x00,0x1E,0x22,0x22,0x22,0x1E,0x12,0x32,0x22,0x42,0x00,0x00,0x00,   // 0x52
  0x00,0x00,0x7C,0x02,0x02,0x06,0x18,0x60,0x40,0x40,0x3E,0x00,0x00,0x00,   // 0x53
  0x00,0x00,0x7F,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x00,0x00,0x00,   // 0x54
  0x00,0x00,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x3C,0x00,0x00,0x00,   // 0x55
  0x00,0x00,0x81,0x42,0x42,0x22,0x24,0x14,0x14,0x08,0x08,0x00,0x00,0x00,   // 0x56
  0x00,0x00,0x81,0x81,0xC9,0x59,0x5A,0x5A,0x66,0x66,0x24,0x00,0x00,0x00,   // 0x57
  0x00,0x00,0x81,0x42,0x24,0x18,0x18,0x18,0x24,0x42,0x81,0x00,0x00,0x00,   // 0x58
  0x00,0x00,0x81,0x42,0x22,0x14,0x18,0x08,0x08,0x08,0x08,0x00,0x00,0x00,   // 0x59
  0x00,0x00,0x7F,0x40,0x20,0x10,0x08,0x04,0x02,0x01,0x7F,0x00,0x00,0x00,   // 0x5A
  0x78,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x78,0x00,   // 0x5B
  0x02,0x04,0x04,0x04,0x08,0x08,0x18,0x10,0x10,0x20,0x20,0x20,0x40,0x00,   // 0x5C
  0x1E,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x1E,0x00,   // 0x5D
  0x00,0x10,0x10,0x18,0x28,0x28,0x24,0x44,0x42,0x00,0x00,0x00,0x00,0x00,   // 0x5E
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,   // 0x5F
  0x10,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,   // 0x60
  0x00,0x00,0x00,0x00,0x3C,0x40,0x40,0x7C,0x42,0x42,0xFC,0x00,0x00,0x00,   // 0x61
  0x02,0x02,0x02,0x02,0x3A,0x46,0x42,0x42,0x42,0x46,0x3A,0x00,0x00,0x00,   // 0x62
  0x00,0x00,0x00,0x00,0x78,0x04,0x02,0x02,0x02,0x04,0x78,0x00,0x00,0x00,   // 0x63
  0x40,0x40,0x40,0x40,0x5C,0x62,0x42,0x42,0x42,0x62,0x5C,0x00,0x00,0x00,   // 0x64
  0x00,0x00,0x00,0x00,0x3C,0x44,0x42,0x7E,0x02,0x02,0x7C,0x00,0x00,0x00,   // 0x65
  0x70,0x08,0x08,0x08,0x7E,0x08,0x08,0x08,0x08,0x08,0x08,0x00,0x00,0x00,   // 0x66
  0x00,0x00,0x00,0x00,0x7C,0x62,0x42,0x42,0x42,0x62,0x5C,0x40,0x40,0x3C,   // 0x67
  0x02,0x02,0x02,0x02,0x3A,0x46,0x42,0x42,0x42,0x42,0x42,0x00,0x00,0x00,   // 0x68
  0x18,0x18,0x00,0x00,0x1E,0x10,0x10,0x10,0x10,0x10,0x10,0x00,0x00,0x00,   // 0x69
  0x30,0x30,0x00,0x00,0x3C,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x1E,   // 0x6A
  0x02,0x02,0x02,0x02,0x22,0x12,0x0A,0x06,0x1A,0x22,0x42,0x00,0x00,0x00,   // 0x6B
  0x1E,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x00,0x00,0x00,   // 0x6C
  0x00,0x00,0x00,0x00,0x6D,0x5B,0x49,0x49,0x49,0x49,0x49,0x00,0x00,0x00,   // 0x6D
  0x00,0x00,0x00,0x00,0x3A,0x46,0x42,0x42,0x42,0x42,0x42,0x00,0x00,0x00,   // 0x6E
  0x00,0x00,0x00,0x00,0x1C,0x22,0x41,0x41,0x41,0x22,0x1C,0x00,0x00,0x00,   // 0x6F
  0x00,0x00,0x00,0x00,0x3A,0x46,0x42,0x42,0x42,0x46,0x3A,0x02,0x02,0x02,   // 0x70
  0x00,0x00,0x00,0x00,0x5C,0x62,0x42,0x42,0x42,0x62,0x5C,0x40,0x40,0x40,   // 0x71
  0x00,0x00,0x00,0x00,0x3A,0x26,0x02,0x02,0x02,0x02,0x02,0x00,0x00,0x00,   // 0x72
  0x00,0x00,0x00,0x00,0x3C,0x02,0x06,0x18,0x20,0x20,0x1E,0x00,0x00,0x00,   // 0x73
  0x00,0x00,0x04,0x04,0x7F,0x04,0x04,0x04,0x04,0x04,0x78,0x00,0x00,0x00,   // 0x74
  0x00,0x00,0x00,0x00,0x42,0x42,0x42,0x42,0x42,0x62,0x5C,0x00,0x00,0x00,   // 0x75
  0x00,0x00,0x00,0x00,0x81,0x42,0x42,0x22,0x14,0x14,0x08,0x00,0x00,0x00,   // 0x76
  0x00,0x00,0x00,0x00,0x81,0x91,0x5A,0x5A,0x66,0x24,0x24,0x00,0x00,0x00,   // 0x77
  0x00,0x00,0x00,0x00,0x42,0x24,0x18,0x18,0x18,0x24,0x42,0x00,0x00,0x00,   // 0x78
  0x00,0x00,0x00,0x00,0x81,0x42,0x42,0x24,0x24,0x18,0x18,0x08,0x0C,0x07,   // 0x79
  0x00,0x00,0x00,0x00,0x7F,0x20,0x10,0x08,0x04,0x02,0x7F,0x00,0x00,0x00,   // 0x7A
  0x70,0x08,0x08,0x08,0x08,0x08,0x06,0x08,0x08,0x08,0x08,0x08,0x70,0x00,   // 0x7B
  0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x00,   // 0x7C
  0x0E,0x10,0x10,0x10,0x10,0x10,0x60,0x10,0x10,0x10,0x10,0x10,0x0E,0x00,   // 0x7D
  0x00,0x00,0x00,0x00,0x00,0x86,0x99,0x61,0x00,0x00,0x00,0x00,0x00,0x00,   // 0x7E
  0x00,0x00,0x00,0x08,0x1C,0x22,0x41,0x41,0x41,0x41,0x7F,0x00,0x00,0x00,   // 0x7F
  0x00,0x00,0x7C,0x02,0x01,0x01,0x01,0x01,0x01,0x02,0x7C,0x10,0x20,0x30,   // 0x80
  0x00,0x24,0x00,0x00,0x42,0x42,0x42,0x42,0x42,0x62,0x5C,0x00,0x00,0x00,   // 0x81
  0x20,0x10,0x00,0x00,0x3C,0x44,0x42,0x7E,0x02,0x02,0x7C,0x00,0x00,0x00,   // 0x82
  0x18,0x24,0x00,0x00,0x3C,0x40,0x40,0x7C,0x42,0x42,0xFC,0x00,0x00,0x00,   // 0x83
  0x00,0x24,0x00,0x00,0x3C,0x40,0x40,0x7C,0x42,0x42,0xFC,0x00,0x00,0x00,   // 0x84
  0x08,0x10,0x00,0x00,0x3C,0x40,0x40,0x7C,0x42,0x42,0xFC,0x00,0x00,0x00,   // 0x85
  0x10,0x28,0x10,0x00,0x3C,0x40,0x40,0x7C,0x42,0x42,0xFC,0x00,0x00,0x00,   // 0x86
  0x00,0x00,0x00,0x00,0x78,0x04,0x02,0x02,0x02,0x04,0x78,0x08,0x10,0x18,   // 0x87
  0x18,0x24,0x00,0x00,0x3C,0x44,0x42,0x7E,0x02,0x02,0x7C,0x00,0x00,0x00,   // 0x88
  0x00,0x48,0x00,0x00,0x3C,0x44,0x42,0x7E,0x02,0x02,0x7C,0x00,0x00,0x00,   // 0x89
  0x08,0x10,0x00,0x00,0x3C,0x44,0x42,0x7E,0x02,0x02,0x7C,0x00,0x00,0x00,   // 0x8A
  0x00,0x24,0x00,0x00,0x1E,0x10,0x10,0x10,0x10,0x10,0x10,0x00,0x00,0x00,   // 0x8B
  0x18,0x24,0x00,0x00,0x1E,0x10,0x10,0x10,0x10,0x10,0x10,0x00,0x00,0x00,   // 0x8C
  0x08,0x10,0x00,0x00,0x1E,0x10,0x10,0x10,0x10,0x10,0x10,0x00,0x00,0x00,   // 0x8D
  0x24,0x00,0x10,0x18,0x28,0x24,0x24,0x42,0x7E,0x42,0x81,0x00,0x00,0x00,   // 0x8E
  0x08,0x14,0x08,0x1C,0x14,0x34,0x22,0x22,0x7E,0x43,0x81,0x00,0x00,0x00,   // 0x8F
  0x20,0x10,0x7E,0x02,0x02,0x02,0x3E,0x02,0x02,0x02,0x7E,0x00,0x00,0x00,   // 0x90
  0x00,0x00,0x00,0x00,0x77,0x88,0x88,0xFE,0x09,0x09,0xF6,0x00,0x00,0x00,   // 0x91
  0x00,0x00,0xF0,0x18,0x18,0x14,0x74,0x12,0x1E,0x12,0xF1,0x00,0x00,0x00,   // 0x92
  0x18,0x24,0x00,0x00,0x1C,0x22,0x41,0x41,0x41,0x22,0x1C,0x00,0x00,0x00,   // 0x93
  0x00,0x24,0x00,0x00,0x1C,0x22,0x41,0x41,0x41,0x22,0x1C,0x00,0x00,0x00,   // 0x94
  0x04,0x08,0x00,0x00,0x1C,0x22,0x41,0x41,0x41,0x22,0x1C,0x00,0x00,0x00,   // 0x95
  0x18,0x24,0x00,0x00,0x42,0x42,0x42,0x42,0x42,0x62,0x5C,0x00,0x00,0x00,   // 0x96
  0x04,0x08,0x00,0x00,0x42,0x42,0x42,0x42,0x42,0x62,0x5C,0x00,0x00,0x00,   // 0x97
  0x00,0x24,0x00,0x00,0x81,0x42,0x42,0x24,0x24,0x18,0x18,0x08,0x0C,0x07,   // 0x98
  0x24,0x00,0x1C,0x22,0x41,0x41,0x41,0x41,0x41,0x22,0x1C,0x00,0x00,0x00,   // 0x99
  0x24,0x00,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x3C,0x00,0x00,0x00,   // 0x9A
  0x00,0x00,0x00,0x00,0x7E,0x63,0x51,0x49,0x45,0x22,0x1F,0x00,0x00,0x00,   // 0x9B
  0x00,0x70,0x08,0x08,0x08,0x1C,0x08,0x08,0x08,0x04,0x7C,0x00,0x00,0x00,   // 0x9C
  0x00,0x00,0x5C,0x22,0x61,0x51,0x49,0x45,0x43,0x22,0x1D,0x00,0x00,0x00,   // 0x9D
  0x00,0x00,0x00,0x00,0x41,0x22,0x14,0x08,0x14,0x22,0x41,0x00,0x00,0x00,   // 0x9E
  0x70,0x08,0x08,0x08,0x3C,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x07,   // 0x9F
  0x20,0x10,0x00,0x00,0x3C,0x40,0x40,0x7C,0x42,0x42,0xFC,0x00,0x00,0x00,   // 0xA0
  0x20,0x10,0x00,0x00,0x1E,0x10,0x10,0x10,0x10,0x10,0x10,0x00,0x00,0x00,   // 0xA1
  0x20,0x10,0x00,0x00,0x1C,0x22,0x41,0x41,0x41,0x22,0x1C,0x00,0x00,0x00,   // 0xA2
  0x20,0x10,0x00,0x00,0x42,0x42,0x42,0x42,0x42,0x62,0x5C,0x00,0x00,0x00,   // 0xA3
  0x48,0x34,0x00,0x00,0x3A,0x46,0x42,0x42,0x42,0x42,0x42,0x00,0x00,0x00,   // 0xA4
  0x58,0x34,0x42,0x46,0x46,0x4A,0x4A,0x52,0x52,0x62,0x42,0x00,0x00,0x00,   // 0xA5
  0x00,0x3C,0x20,0x38,0x24,0x7C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,   // 0xA6
  0x00,0x1C,0x22,0x22,0x22,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,   // 0xA7
  0x00,0x00,0x00,0x00,0x10,0x10,0x00,0x10,0x10,0x08,0x04,0x02,0x42,0x7C,   // 0xA8
  0x00,0x3C,0x42,0x5A,0x5A,0x42,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,   // 0xA9
  0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x40,0x40,0x00,0x00,0x00,0x00,0x00,   // 0xAA
  0x00,0x43,0x22,0x32,0x12,0x0A,0xF8,0x84,0x46,0x32,0xF1,0x00,0x00,0x00,   // 0xAB
  0x00,0x43,0x22,0x12,0x12,0x0A,0x68,0x54,0x4A,0xFA,0x41,0x00,0x00,0x00,   // 0xAC
  0x00,0x00,0x00,0x00,0x08,0x08,0x00,0x08,0x08,0x08,0x08,0x08,0x08,0x08,   // 0xAD
  0x00,0x00,0x00,0x00,0x48,0x24,0x12,0x12,0x24,0x48,0x00,0x00,0x00,0x00,   // 0xAE
  0x00,0x00,0x00,0x00,0x12,0x24,0x48,0x48,0x24,0x12,0x00,0x00,0x00,0x00,   // 0xAF
  0x49,0x00,0x00,0x49,0x00,0x00,0x49,0x00,0x49,0x00,0x00,0x49,0x00,0x00,   // 0xB0
  0x92,0x49,0x00,0x92,0x49,0x00,0x92,0x49,0x92,0x00,0x49,0x92,0x00,0x49,   // 0xB1
  0xFF,0x49,0x49,0xFF,0x49,0x49,0xFF,0x49,0xFF,0x49,0x49,0xFF,0x49,0x49,   // 0xB2
  0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,   // 0xB3
  0x10,0x10,0x10,0x10,0x10,0x10,0x1F,0x10,0x10,0x10,0x10,0x10,0x10,0x10,   // 0xB4
  0x10,0x08,0x10,0x18,0x28,0x24,0x24,0x42,0x7E,0x42,0x81,0x00,0x00,0x00,   // 0xB5
  0x18,0x24,0x10,0x18,0x28,0x24,0x24,0x42,0x7E,0x42,0x81,0x00,0x00,0x00,   // 0xB6
  0x08,0x10,0x10,0x18,0x28,0x24,0x24,0x42,0x7E,0x42,0x81,0x00,0x00,0x00,   // 0xB7
  0x00,0x3C,0x42,0xB9,0x85,0x85,0x85,0x85,0xB9,0x42,0x3C,0x00,0x00,0x00,   // 0xB8
  0x28,0x28,0x28,0x28,0x28,0x2F,0x20,0x2F,0x28,0x28,0x28,0x28,0x28,0x28,   // 0xB9
  0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,   // 0xBA
  0x00,0x00,0x00,0x00,0x00,0x3F,0x20,0x2F,0x28,0x28,0x28,0x28,0x28,0x28,   // 0xBB
  0x28,0x28,0x28,0x28,0x28,0x2F,0x20,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,   // 0xBC
  0x00,0x10,0x78,0x14,0x12,0x12,0x12,0x12,0x14,0x78,0x10,0x00,0x00,0x00,   // 0xBD
  0x00,0x81,0x42,0x24,0x14,0x08,0x3E,0x08,0x3E,0x08,0x08,0x00,0x00,0x00,   // 0xBE
  0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x10,0x10,0x10,0x10,0x10,0x10,0x10,   // 0xBF
  0x10,0x10,0x10,0x10,0x10,0x10,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,   // 0xC0
  0x10,0x10,0x10,0x10,0x10,0x10,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,   // 0xC1
  0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x10,0x10,0x10,0x10,0x10,0x10,0x10,   // 0xC2
  0x10,0x10,0x10,0x10,0x10,0x10,0xF0,0x10,0x10,0x10,0x10,0x10,0x10,0x10,   // 0xC3
  0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,   // 0xC4
  0x10,0x10,0x10,0x10,0x10,0x10,0xFF,0x10,0x10,0x10,0x10,0x10,0x10,0x10,   // 0xC5
  0x48,0x34,0x00,0x00,0x3C,0x40,0x40,0x7C,0x42,0x42,0xFC,0x00,0x00,0x00,   // 0xC6
  0x58,0x34,0x10,0x18,0x28,0x24,0x24,0x42,0x7E,0x42,0x81,0x00,0x00,0x00,   // 0xC7
  0x28,0x28,0x28,0x28,0x28,0xE8,0x08,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,   // 0xC8
  0x00,0x00,0x00,0x00,0x00,0xF8,0x08,0xE8,0x28,0x28,0x28,0x28,0x28,0x28,   // 0xC9
  0x28,0x28,0x28,0x28,0x28,0xEF,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,   // 0xCA
  0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0xEF,0x28,0x28,0x28,0x28,0x28,0x28,   // 0xCB
  0x28,0x28,0x28,0x28,0x28,0xE8,0x08,0xE8,0x28,0x28,0x28,0x28,0x28,0x28,   // 0xCC
  0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,   // 0xCD
  0x28,0x28,0x28,0x28,0x28,0xEF,0x00,0xEF,0x28,0x28,0x28,0x28,0x28,0x28,   // 0xCE
  0x00,0x00,0x41,0x3E,0x22,0x22,0x22,0x22,0x3E,0x41,0x00,0x00,0x00,0x00,   // 0xCF
  0x17,0x0C,0x16,0x20,0x3C,0x62,0x41,0x41,0x41,0x22,0x1C,0x00,0x00,0x00,   // 0xD0
  0x00,0x00,0x3E,0x42,0x82,0x82,0x8F,0x82,0x82,0x42,0x3E,0x00,0x00,0x00,   // 0xD1
  0x18,0x24,0x7E,0x02,0x02,0x02,0x3E,0x02,0x02,0x02,0x7E,0x00,0x00,0x00,   // 0xD2
  0x24,0x00,0x7E,0x02,0x02,0x02,0x3E,0x02,0x02,0x02,0x7E,0x00,0x00,0x00,   // 0xD3
  0x10,0x20,0x7E,0x02,0x02,0x02,0x3E,0x02,0x02,0x02,0x7E,0x00,0x00,0x00,   // 0xD4
  0x00,0x00,0x00,0x00,0x1E,0x10,0x10,0x10,0x10,0x10,0x10,0x00,0x00,0x00,   // 0xD5
  0x20,0x10,0x3E,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x3E,0x00,0x00,0x00,   // 0xD6
  0x18,0x24,0x3E,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x3E,0x00,0x00,0x00,   // 0xD7
  0x24,0x00,0x3E,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x3E,0x00,0x00,0x00,   // 0xD8
  0x10,0x10,0x10,0x10,0x10,0x10,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,   // 0xD9
  0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x10,0x10,0x10,0x10,0x10,0x10,0x10,   // 0xDA
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,   // 0xDB
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,   // 0xDC
  0x10,0x10,0x10,0x10,0x10,0x00,0x00,0x00,0x10,0x10,0x10,0x10,0x10,0x00,   // 0xDD
  0x08,0x10,0x3E,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x3E,0x00,0x00,0x00,   // 0xDE
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,   // 0xDF
  0x20,0x10,0x1C,0x22,0x41,0x41,0x41,0x41,0x41,0x22,0x1C,0x00,0x00,0x00,   // 0xE0
  0x1C,0x22,0x22,0x22,0x12,0x12,0x22,0x42,0x82,0x82,0x72,0x00,0x00,0x00,   // 0xE1
  0x18,0x24,0x1C,0x22,0x41,0x41,0x41,0x41,0x41,0x22,0x1C,0x00,0x00,0x00,   // 0xE2
  0x08,0x10,0x1C,0x22,0x41,0x41,0x41,0x41,0x41,0x22,0x1C,0x00,0x00,0x00,   // 0xE3
  0x48,0x34,0x00,0x00,0x1C,0x22,0x41,0x41,0x41,0x22,0x1C,0x00,0x00,0x00,   // 0xE4
  0x58,0x34,0x1C,0x22,0x41,0x41,0x41,0x41,0x41,0x22,0x1C,0x00,0x00,0x00,   // 0xE5
  0x00,0x00,0x00,0x00,0x42,0x42,0x42,0x42,0x42,0x66,0x5A,0x02,0x02,0x02,   // 0xE6
  0x02,0x02,0x02,0x02,0x3A,0x46,0x42,0x42,0x42,0x46,0x3A,0x02,0x02,0x02,   // 0xE7
  0x00,0x00,0x02,0x02,0x3E,0x42,0x42,0x42,0x3E,0x02,0x02,0x00,0x00,0x00,   // 0xE8
  0x20,0x10,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x3C,0x00,0x00,0x00,   // 0xE9
  0x18,0x24,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x3C,0x00,0x00,0x00,   // 0xEA
  0x10,0x20,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x3C,0x00,0x00,0x00,   // 0xEB
  0x20,0x10,0x00,0x00,0x81,0x42,0x42,0x24,0x24,0x18,0x18,0x08,0x0C,0x07,   // 0xEC
  0x20,0x10,0x81,0x42,0x22,0x14,0x18,0x08,0x08,0x08,0x08,0x00,0x00,0x00,   // 0xED
  0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,   // 0xEE
  0x10,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,   // 0xEF
  0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,   // 0xF0
  0x00,0x00,0x00,0x00,0x08,0x08,0x7F,0x08,0x08,0x00,0x7F,0x00,0x00,0x00,   // 0xF1
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0xFF,   // 0xF2
  0x00,0x87,0x44,0x23,0x24,0x17,0x68,0x54,0x4C,0xFA,0x41,0x00,0x00,0x00,   // 0xF3
  0x00,0x7E,0x4F,0x4F,0x4F,0x4E,0x48,0x48,0x48,0x48,0x48,0x48,0x48,0x00,   // 0xF4
  0x00,0x78,0x04,0x04,0x1C,0x34,0x44,0x4C,0x38,0x60,0x40,0x44,0x3C,0x00,   // 0xF5
  0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x7F,0x00,0x18,0x18,0x00,0x00,0x00,   // 0xF6
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x10,0x18,   // 0xF7
  0x00,0x08,0x14,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,   // 0xF8
  0x24,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,   // 0xF9
  0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x00,0x00,0x00,   // 0xFA
  0x00,0x18,0x10,0x10,0x10,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,   // 0xFB
  0x00,0x3C,0x20,0x18,0x20,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,   // 0xFC
  0x00,0x3C,0x20,0x10,0x08,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,   // 0xFD
  0x00,0x00,0x00,0x00,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,0x00,0x00,0x00,   // 0xFE
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,   // 0xFF
};
#endif
