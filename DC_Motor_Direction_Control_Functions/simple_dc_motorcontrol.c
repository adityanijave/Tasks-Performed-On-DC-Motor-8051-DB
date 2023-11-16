//inclding required lib's
#include"simple_dc_motorcontrol.h"

//function defination of user defined functions
void forword_motion()																	//function for forward rotation of motor
{
	I1 = 1;
	I2 = 0;
}

void reverse_motion()																	//function for reverse rotation of motor
{
	I1 = 0;
	I2 = 1;
}


void stop_motion()																	//function to stop rotation of motor
{
	I1 = 0;
	I2 = 0;
}