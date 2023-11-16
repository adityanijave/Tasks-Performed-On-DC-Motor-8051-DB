
//including required lib's
#include <REGX51.H>

//sbit decleration
sbit sw = P1^0;
sbit motor_terminal_a = P1^6;
sbit motor_terminal_b = P1^7;

//forward decleration of user defined funcation
void delay(unsigned int);
void forward_direction();
void reverse_direction();
void stop();

//main funcation
void main()
{
	//decleration of variables (local variables)
	unsigned int flag;
	
	//forever loop
	while(1)																															//or we can use for(;;)
	{
		if(sw == 0 && flag == 0 )																					  //if sw is active low and flag is 0 then,
		{ 
			delay(1);																													//calling delay funcation with 1
			forward_direction();																							//calling forward_direction() funcation for clockwise rotation of motor
			flag = 1;																													//assign value 1 to flag variable
		}
		else if (sw == 0 && flag == 1)																			//else if sw is active low and flag is 1 then,
		{
			delay(1);																													//calling delay funcation with 1
			reverse_direction();																							//calling reverse_direction() funcation for anti-clockwise rotation of motor
			flag = 2;																													//assign value 2 to flag variable
		}
		else if (sw == 0 && flag == 2)																			//else if sw is active low and flag is 2 then,
		{
			delay(1);																													//calling delay funcation with 1
			stop();																												    //calling reverse_direction() funcation to stop rotation of motor
			flag = 0;																													//assign value 0 to flag variable to create a loop
		}
	}
}


//funcation defination of user defined funcations
void forward_direction()																								//funcation for clockwise rotation of motor
{
	motor_terminal_a = 1;
	motor_terminal_b = 0;
	
}

void reverse_direction()																								//funcation for anti-clockwise rotation of motor
{
	motor_terminal_a = 0;
	motor_terminal_b = 1;
}

void stop()																								              //funcation to stop rotation of motor
{
	motor_terminal_a = 0;
	motor_terminal_b = 0;
}

void delay(unsigned int time)																						//delay funcation with one parameter called time
{
	unsigned int i,j;																											//decleration of variables inside the funcation
	for(i = 0; i < time; i++)																							//for loop
	{
		for(j = 0; j < 1000; j++);																					//nested for loop
	}
}