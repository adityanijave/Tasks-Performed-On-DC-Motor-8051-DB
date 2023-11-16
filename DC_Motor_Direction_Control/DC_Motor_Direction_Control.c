//including required lib's
#include<reg51.h>

//sbit declerations 
sbit forword_sw =  P1^0;																			//forward switch
sbit backword_sw = P1^1;																			//reverse switch
sbit stop_sw = P1^2;																			    //stop switch

sbit motor_a = P2^0;																					//IN1 terminal of motor
sbit motor_b = P2^1;																					//IN2 terminal of motor
sbit en = P2^2;																								//EN terminal of motor

//forward declertion of user defined function
void delay(unsigned int);																			//delay funcation with one parameter

//main function
void main()
{
	
	while(1)																										//forever loop (or we can for(;;))
	{
		if(forword_sw == 0)																				//if forword_sw is active low then,
		{
			delay(30);																							//calling delay funcation with 30
			en = 1;																									//EN is high 
			motor_a = 1;																						//IN1 terminal of motor is high
			motor_b = 0;																						//IN2 terminal of motor is low, so that clockwise rotation take place
		}
		 else if (backword_sw == 0)
		{
			delay(30);																							//calling delay funcation with 30
			en = 1;																									//EN is high 
			motor_a = 0;																						//IN1 terminal of motor is low
			motor_b = 1;																						//IN2 terminal of motor is high, so that anti-clockwise rotation take place
		}
		else if (stop_sw == 0)
		{
			delay(30);																							//calling delay funcation with 30
			en = 0;																									//EN is low (no matter IN1 and IN2 is 0 or 1)
		}
	}
}



//funcation defination of user defined functions
void delay(unsigned int time)																	//delay funcation with one parameter called time
{
	unsigned int i,j;																						//decleration of variables inside funcation
	for(i = 0; i < time; i++)																		//for loop
	{
		for(j = 0; j < 1000; j++);																//nested for loop
	}
}