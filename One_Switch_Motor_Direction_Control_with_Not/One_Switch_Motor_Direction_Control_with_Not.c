//including required lib's
#include <REGX51.H>

//sbit decleration
sbit sw1 = P1^0;
sbit sw2 = P1^1;
sbit motor_terminal_a = P1^6;
sbit motor_terminal_b = P1^7;

//forward decleration of user defined funcation
void delay(unsigned int);

//main funcation
void main()
{
	//initialization of motor terminals
	motor_terminal_a = 1;																											//motor_terminal_a = 1;
	motor_terminal_b = 0;																											//motor_terminal_b = 0;
	
	//forever loop
	while(1)																																	//or we can use for(;;)
	{
		if(sw1 == 0)																														//if sw1 is active low then,
		{
			motor_terminal_a = ~motor_terminal_a;																	//motor_terminal_a = 0 (for 1st itr.)
			motor_terminal_b = ~motor_terminal_b;																	//motor_terminal_b = 1 (for 1st itr.)
			delay(100);																														//calling delay funcation with 100
		}
		else if (sw2 == 0)																											//else if sw2 is active low then,
		{
			motor_terminal_a = 0;																									//motor_terminal_a = 0
			motor_terminal_b = 0;																									//motor_terminal_b = 0
		}
	}
}


//funcation defination of user defined funcation
void delay(unsigned int time)																								//delay funcation with one parameter called time
{
	unsigned int i,j;																													//delceration of variables inside the funcation
	for(i = 0; i < time; i++)																									//for loop
	{
		for(j =0; j < 1000; j++)																								//nested for loop
		{}
	}
}