#pragma config(Motor, port1, Sm1, tmotorServoContinuousRotation, openLoop)
#pragma config(Motor, port2, Sm2, tmotorServoContinuousRotation, openLoop)
#pragma config(Motor, port3, Lm1, tmotorServoContinuousRotation, openLoop)
#pragma config(Motor, port4, Lm2, tmotorServoContinuousRotation, openLoop)
#pragma config(Servo, port5, S1, tmotorServoContinuousRotation, openLoop)
#pragma config(Servo, port6, S2, tmotorServoContinuousRotation, openLoop)
#pragma config(Servo, port7, S3, tmotorServoContinuousRotation, openLoop)
#pragma config(Servo, port8, S4, tmotorServoContinuousRotation, openLoop)
task main()
{
	while(true)
	{
		float servoInitialize;
		int motorSpeed;

		servoInitialize = 0.0
		motorSpeed = 50

		if(vexRT[Btn7l])
		{
			motor[Sm1] = -motorSpeed;
			motor[Sm2] = -motorSpeed;
			motor[Lm1] = -motorSpeed;
			motor[Lm2] = -motorSpeed;
		}

		else if (VexRT[Btn7r])
		{
			motor[Sm1] = motorSpeed;
			motor[Sm2] = motorSpeed;
			motor[Lm1] = motorSpeed;
			motor[Lm2] = motorSpeed;
		}

		else
		{
			motor[Sm1] = 0;
			motor[Sm2] = 0;
			motor[Lm1] = 0;
			motor[Lm2] = 0;
		}

		if(vexRT[Btn8l])
		{
			servoInitialize -= 0.0001
			servo[s1] = servoInitialize;
			servo[s2] = servoInitialize;
			servo[s3] = servoInitialize;
			servo[s4] = servoInitialize;
		}

		else if(vexRt[Btn8r])
		{
			servoInitialize += 0.0001
			servo[s1] = servoInitialize;
			servo[s2] = servoInitialize;
			servo[s3] = servoInitialize;
			servo[s4] = servoInitialize;
		}


	}
}
