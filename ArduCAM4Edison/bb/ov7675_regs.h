#ifndef OV7675_REGS_H
#define OV7675_REGS_H
#include "BBBCAM.h"

const struct sensor_reg OV7675_QVGA[] PROGMEM =
{
	{0x11,0x80},
	{0x3a,0x4},
	{0x12,0x0},
	{0x17,0x13},
	{0x18,0x1},
	{0x32,0xb6},
	{0x19,63},
	{0x1a,0x7b},
	{0x03,0x01},	
	{0xc,0x0},
	{0x3e,0x0},
	{0x70,0x3a},
	{0x71,0x35},
	{0x72,0x11},
	{0x73,0xf0},
	{0xa2,0x2},
	{0x15,0x0},
	{0x7a,0x18},
	{0x7b,0x4},
	{0x7c,0x9},
	{0x7d,0x18},
	{0x7e,0x38},
	{0x7f,0x47},
	{0x80,0x56},
	{0x81,0x66},
	{0x82,0x74},
	{0x83,0x7f},
	{0x84,0x89},
	{0x85,0x9a},
	{0x86,0xa9},
	{0x87,0xc4},
	{0x88,0xdb},
	{0x89,0xee},
	{0x13,0xe0},
	{0x1,0x50},
	{0x2,0x68},
	{0x0,0x0},
	{0x10,0x0},
	{0xd,0x40},
	{0x14,0x48},
	{0x15,0x07},
	{0xab,0x8},
	{0x24,0x60},
	{0x25,0x50},
	{0x26,0xe3},
	{0x9f,0x78},
	{0xa0,0x68},
	{0xa1,0x3},
	{0xa6,0xd8},
	{0xa7,0xd8},
	{0xa8,0xf0},
	{0xa9,0x90},
	{0xaa,0x14},
	{0x13,0xe5},
	{0xe,0x61},
	{0xf,0x4b},
	{0x16,0x2},
	{0x1e,0x17},
	{0x21,0x2},
	{0x22,0x91},
	{0x29,0x07},
	{0x33,0xb},
	{0x35,0xb},
	{0x37,0x1d},
	{0x38,0x71},
	{0x39,0x2a},
	{0x3c,0x78},
	{0x4d,0x40},
	{0x4e,0x20},
	{0x69,0x0},
	{0x4e,0x20},
	{0x74,0x10},
	{0x8d,0x4f},
	{0x8e,0x0},
	{0x8f,0x0},
	{0x90,0x0},
	{0x91,0x0},
	{0x92,0x66},
	{0x96,0x0},
	{0x9a,0x80},
	{0xb0,0x84},
	{0xb1,0xc},
	{0xb2,0xe},
	{0xb3,0x82},
	{0xb8,0x0a},
	{0x43,0x14},
	{0x44,0xf0},
	{0x45,0x41},
	{0x46,0x66},
	{0x47,0x2a},
	{0x48,0x3e},
	{0x59,0x8d},
	{0x5a,0x8e},
	{0x5b,0x53},
	{0x5c,0x83},
	{0x5d,0x4f},
	{0x5e,0xe},
	{0x6c,0x0a},
	{0x6d,0x55},
	{0x6e,0x11},
	{0x6f,0x9e},
	{0x62,0x90},
	{0x63,0x30},
	{0x64,0x11},
	{0x65,0x0},
	{0x66,0x5},
	{0x94,0x11},
	{0x95,0x18},
	{0x6a,0x40},
	{0x1,0x40},
	{0x2,0x40},
	{0x13,0xe7},
	{0x4f,0x80},
	{0x50,0x80},
	{0x51,0x0},
	{0x52,0x22},
	{0x53,0x5e},
	{0x54,0x80},
	{0x58,0x9e},
	{0x41,0x8},
	{0x3f,0x0},
	{0x75,0x3},
	{0x76,0xe1},
	{0x4c,0x0},
	{0x77,0x0},
	{0x3d,0xc2},
	{0x4b,0x9},
	{0xc9,0x60},
	{0x41,0x38},
	{0x56,0x3a},
	{0x34,0x11},
	{0x3b,0x0a},
	{0xa4,0x88},
	{0x96,0x0},
	{0x97,0x30},
	{0x98,0x20},
	{0x99,0x30},
	{0x9a,0x84},
	{0x9b,0x29},
	{0x9c,0x3},
	{0x9d,0x98},
	{0x9e,0x3f},
	{0x78,0x4},
	{0x79,0x1},
	{0xc8,0xf0},
	{0x79,0xf},
	{0xc8,0x0},
	{0x79,0x10},
	{0xc8,0x7e},
	{0x79,0x0a},
	{0xc8,0x80},
	{0x79,0xb},
	{0xc8,0x1},
	{0x79,0xc},
	{0xc8,0xf},
	{0x79,0xd},
	{0xc8,0x20},
	{0x79,0x9},
	{0xc8,0x80},
	{0x79,0x2},
	{0xc8,0xc0},
	{0x79,0x3},
	{0xc8,0x40},
	{0x79,0x5},
	{0xc8,0x30},
	{0x79,0x26},
	{0x2d,0x0},
	{0x2e,0x0},
	{0x11,0x40},
	{0x6b,0x0a},
	{0x2a,0x0},
	{0x2b,0x0},
	{0x2d,0x0},
	{0x2e,0x0},
	{0xca,0x0},
	{0x92,0x66},
	{0x93,0x0},
	{0x3b,0x0a},
	{0xcf,0x8c},
	{0x9d,0x98},
	{0x9e,0x7f},
	{0xa5,0x2},
	{0xab,0x3},
	{0x15,0x2},
	{0x12,0x14},
	{0x8c,0x0},
	{0x4,0x0},
	{0x40,0x10},
	{0x14,0x48},
	{0x4f,0xb3},
	{0x50,0xb3},
	{0x51,0x0},
	{0x52,0x3d},
	{0x53,0xa7},
	{0x54,0xe4},
	{0x3d,0xc0},
	{0x15,0x2},
	{0xff, 0xff},
};        


#endif

