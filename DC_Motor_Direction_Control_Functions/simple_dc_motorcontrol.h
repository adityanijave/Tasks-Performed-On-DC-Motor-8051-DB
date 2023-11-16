//inclding required lib's
#include<reg51.h>

//sbit decleration
sbit forword_motion_switch =  P1^0;
sbit reverse_motion_switch= P1^1;
sbit stop_motion_switch = P1^2;

sbit I1 = P2^0;
sbit I2 = P2^1;
sbit EN1 = P2^2;


//forward decleration of user defined functions
void forword_motion();
void reverse_motion();
void stop_motion();