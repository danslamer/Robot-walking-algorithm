#ifndef __KEY_H
#define __KEY_H	 
#include "sys.h"


 
 


#define KEY  GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_7)//��ȡ����1

 

#define KEY_PRES	1		//KEY0  


void KEY_Init(void);//IO��ʼ��
u8 KEY_Scan();  	//����ɨ�躯��					    
#endif
