//inclduing required lib's
#include<reg51.h>


//sbit declerations
sbit EN1 = P2^0;
sbit IN1 = P2^6;
sbit IN2 = P2^7;

//main function
void main()
{
	//initialization
	EN1 = 1;
	
	//forever loop (or we can use for(;;))
	while(1)
	{
		//for forward direction
		IN1 = 1;
		IN2 = 0;
	}
}