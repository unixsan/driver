#ifndef _LCD_AT070NT_H_
#define _LCD_AT070NT_H_

/* Base */
#define SCREEN_TYPE		SCREEN_RGB
#define LVDS_FORMAT		LVDS_8BIT_1
#define OUT_FACE		OUT_P888  
#define DCLK			51000000//33300000//50000000
#define LCDC_ACLK       	500000000           //29 lcdc axi DMA ÆµÂÊ

/* Timing */
#define H_PW			20
#define H_BP			139
#define H_VD			1024
#define H_FP			140

#define V_PW			3
#define V_BP			20
#define V_VD			600
#define V_FP			12

#define LCD_WIDTH       	154
#define LCD_HEIGHT      	86
/* Other */
#define DCLK_POL               0
#define DEN_POL			0
#define VSYNC_POL		0
#define HSYNC_POL		0

#define SWAP_RB			0
#define SWAP_RG			0
#define SWAP_GB			0

#endif
