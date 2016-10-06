#ifndef OV3640_REGS_H
#define OV3640_REGS_H
#include "BBBCAM.h"
const struct sensor_reg OV3640_QVGA[] PROGMEM =
{
	{0x3012, 0x80}, 
	{0x304d, 0x45}, 
	{0x30a7, 0x5e}, 
	{0x3087, 0x16}, 
	{0x309c, 0x1a}, 
	{0x30a2, 0xe4}, 
	{0x30aa, 0x42}, 
	{0x30b0, 0xff}, 
	{0x30b1, 0xff}, 
	{0x30b2, 0x10}, 
	{0x300e, 0x32}, 
	{0x300f, 0x21}, 
	{0x3010, 0x20}, 
	{0x3011, 0x4}, 
	{0x304c, 0x81}, 
	{0x30d7, 0x10}, 
	{0x30d9, 0xd}, 
	{0x30db, 0x8}, 
	{0x3016, 0x82}, 
	{0x3018, 0x38}, 
	{0x3019, 0x30}, 
	{0x301a, 0x61}, 
	{0x307d, 0x0}, 
	{0x3087, 0x2}, 
	{0x3082, 0x20}, 
	{0x3015, 0x12}, 
	{0x3014, 0x4}, 
	{0x3013, 0xf7}, 
	{0x303c, 0x8}, 
	{0x303d, 0x18}, 

	{0x303e, 0x6}, 
	{0x303f, 0xc}, 
	{0x3030, 0x62}, 
	{0x3031, 0x26}, 
	{0x3032, 0xe6}, 
	{0x3033, 0x6e}, 
	{0x3034, 0xea}, 
	{0x3035, 0xae}, 
	{0x3036, 0xa6}, 
	{0x3037, 0x6a}, 
	{0x3104, 0x2}, 
	{0x3105, 0xfd}, 
	{0x3106, 0x0}, 
	{0x3107, 0xff}, 
	{0x3300, 0x12}, 
	{0x3301, 0xde}, 
	{0x3302, 0xef}, 
	{0x3316, 0xff}, 
	{0x3317, 0x0}, 
	{0x3312, 0x26}, 
	{0x3314, 0x42}, 
	{0x3313, 0x2b}, 
	{0x3315, 0x42}, 
	{0x3310, 0xd0}, 
	{0x3311, 0xbd}, 
	{0x330c, 0x18}, 
	{0x330d, 0x18}, 
	{0x330e, 0x56}, 
	{0x330f, 0x5c}, 
	{0x330b, 0x1c}, 
	{0x3306, 0x5c}, 
	{0x3307, 0x11}, 
	{0x336a, 0x52}, 
	{0x3370, 0x46}, 
	{0x3376, 0x38}, 
	{0x3300, 0x13}, 
	{0x30b8, 0x20}, 
	{0x30b9, 0x17}, 
	{0x30ba, 0x4}, 
	{0x30bb, 0x8}, 

	{0x3507, 0x6}, 
	{0x350a, 0x4f}, 
	{0x3100, 0x2}, 
	{0x3301, 0xde}, 
	{0x3304, 0x0}, 
	{0x3400, 0x1}, 
	{0x3404, 0x11}, 
	{0x335f, 0x68}, 
	{0x3360, 0x18}, 
	{0x3361, 0xc}, 
	{0x3362, 0x12}, 
	{0x3363, 0x88}, 
	{0x3364, 0xe4}, 
	{0x3403, 0x42}, 
	{0x3088, 0x2}, 
	{0x3089, 0x80}, 
	{0x308a, 0x1}, 
	{0x308b, 0xe0}, 
	{0x308d, 0x4}, 
	{0x3086, 0x3}, 
	{0x3086, 0x0}, 
	{0x3011, 0x0}, 
	{0x304c, 0x85}, 
	{0x3600, 0xd0}, 
	{0x335f, 0x68}, 
	{0x3360, 0x18}, 
	{0x3361, 0xc}, 
	{0x3362, 0x1}, 
	{0x3363, 0x48}, 
	{0x3364, 0xf4}, 
	{0x3403, 0x42}, 
	{0x3088, 0x1}, 
	{0x3089, 0x40}, 
	{0x308a, 0x0}, 
	{0x308b, 0xf0}, 
	
	{0x307c, 0x12},
	{0x3090, 0xc8},
	
	//{0x3080, 0x02},
	//{0x307D, 0x80},
	//{0x306C, 0x10},
	
	{0x3600, 0xc4},
	{0xffff,0xff},
};        


#endif

