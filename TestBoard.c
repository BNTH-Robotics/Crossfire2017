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
motor[Sm1] = 50;
motor[Sm2] = 50;
motor[Lm1] = 50;
motor[Lm2] = 50;
servo[s1] = 50;
servo[s2] = 50;
servo[s3] = 50;
servo[s4] = 50;
}
