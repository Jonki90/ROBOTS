#pragma config(Sensor, in3,    colorDetector,  sensorVexIQ_ColorHue)
#pragma config(Sensor, in4,    gyroSensor,     sensorVexIQ_Gyro)
#pragma config(Sensor, in7,    distanceMM,     sensorVexIQ_Distance)
#pragma config(Sensor, in8,    bumpSwitch,     sensorVexIQ_Touch)
#pragma config(Motor,  port1,           leftMotor,     tmotorVex393_HBridge, openLoop, driveLeft, encoderPort, None)
#pragma config(Motor,  port2,           TopWheel,      tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           rightMotor,    tmotorVex393_HBridge, openLoop, reversed, driveRight, encoderPort, None)
#pragma config(Motor,  port10,          armMotor,      tmotorVex393_HBridge, openLoop, encoderPort, None)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while(1 == 1)
  {
    //Arm Control
    if(vexRT[Btn8R] == 1)
    {
      motor[TopWheel] = 40;
    }
    else if(vexRT[Btn8L] == 1)
    {
      motor[TopWheel] = -40;
    }
    else
    {
      motor[TopWheel] = 0;
    }
  }
}
