
#pragma config(Motor,  port3,            leftwheels,   tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port9,            rightwheels,  tmotorServoContinuousRotation, openLoop)

task main()
{

	while(true)
	{
		//Port 3 is left and Port 9 is Right

		motor[leftwheels] = vexRT[Ch3]; 
		motor[rightwheels] = vexRT[Ch2]; 

	}
}
