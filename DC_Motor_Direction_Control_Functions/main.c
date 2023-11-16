//including required lib's
#include"simple_dc_motorcontrol.h"

//forward decleration of user defined function
void delay(unsigned int);																					//delay function with one parameter

void main()																												//main function
{
	EN1 = 1;																												//enable is high
	
	while(1)																												//forever loop (or we can use for(;;))
	{
		if(forword_motion_switch == 0)																//if forword_motion_switch is active low then, 
		{
			delay(30);																									//calling delay function with 30
			forword_motion();																						//calling forward_motion() function for clockwise rotation of motor
		}
		
		else if (reverse_motion_switch == 0)													//else if reverse_motion_switch is active low then, 
		{
			delay(30);																									//calling delay function with 30
			reverse_motion();																						//calling reverse_motion() function for anti-clockwise rotation of motor
		}
		else if (stop_motion_switch == 0)															//else if stop_motion_switch is active low then, 
		{
			delay(30);																									//calling delay function with 30
			stop_motion();																						  //calling stop_motion() function to stop rotation of motor
		}
	}
}

//function defination of user defined funcations
void delay(unsigned int time)																			//delay function with one parameter called time
{
	unsigned int i,j;																								//decleration of variables
	for(i = 0; i < time; i++)																				//for loop
	{
		for(j = 0; j < 1000; j++);																		//nested for loop
	}
}