/*********************************************************/
/********** Author 		: Mahmoud Korayem ****************/
/********** Date        : 11 SEP 2020     ****************/
/********** version     : V 01			  ****************/
/********** Description : STK-private.h   ****************/


#ifndef STK_PRIVATE_H
#define STK_PRIVATE_H

/* Base Address For STK	0xE000E010*/

typedef struct
{
	volatile u32 CTRL ;
	volatile u32 LOAD ;
	volatile u32 VAL  ;
	
}MSTK_Type;

#define		MSTK	((MSTK_Type*)0xE000E010)


#define     MSTK_SRC_AHB           0
#define     MSTK_SRC_AHB_8         1

#define     MSTK_SINGLE_INTERVAL    0
#define     MSTK_PERIOD_INTERVAL    1

#endif
