#ifndef __KEY_H
#define __KEY_H	 
#include "sys.h"


 
 


#define KEY  GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_7)//读取按键1

 

#define KEY_PRES	1		//KEY0  


void KEY_Init(void);//IO初始化
u8 KEY_Scan();  	//按键扫描函数					    
#endif
