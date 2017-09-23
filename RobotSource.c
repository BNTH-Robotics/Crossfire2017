
#pragma config(Motor,  port3,            leftwheels,   tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port9,            rightwheels,  tmotorServoContinuousRotation, openLoop)

task main()
{

	while(true)
	{
		//Port 3 is left and Port 9 is Right

		motor[port3] = vexRT[Ch3]; 
		motor[port9] = vexRT[Ch2]; 

	}
}
