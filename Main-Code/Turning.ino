float turnLeft(float angleLeft)//function to turn robot left
{  countReset();
   float finalAngleLeftWheelL = countLeft + angleCalculator(angleLeft);  
   float finalAngleRightWheelL = -(countRight - angleCalculator(angleLeft));
  while ((countRight <= finalAngleRightWheelL) || (countLeft<= finalAngleLeftWheelL))
  {
        rightWheel.setMotorPower(-150);
        leftWheel.setMotorPower(-150);
        printCount();
  }
  rightWheel.stopMotor();
  leftWheel.stopMotor();
}

float turnRight(float angleRight)//function to turn robot right
{
  countReset();
  float finalAngleLeftWheelR = -(countLeft - angleCalculator(angleRight)); 
  float finalAngleRightWheelR = countRight + angleCalculator(angleRight); 
 
  while ((countRight <= finalAngleRightWheelR) || (countLeft<= finalAngleLeftWheelR))
  {
        rightWheel.setMotorPower(150);
        leftWheel.setMotorPower(150);
        printCount();
  }
  rightWheel.stopMotor();
  leftWheel.stopMotor();
}

float angleCalculator(float newAngle)//function to calculate angle the robot is going to move
{
  return newAngle/angleRatio; // measure how much your robot moves when you give it a value of 1 and make a global variable called 
                              // angle ratio and put the value there , for me the value is 6, so I made a global variable called angleRatio=6
}
