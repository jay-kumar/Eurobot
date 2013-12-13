float forward(float distance)//function to move robot forward
{ countReset();
  float finalDestinationLeft = countLeft + distanceConverter(distance);
  float finalDestinationRight = countRight + distanceConverter(distance);
  while ((countLeft<finalDestinationLeft) || (countRight<finalDestinationRight))
  {
    leftWheel.setMotorPower(getmotorPowerF(finalDestinationLeft,countLeft));
    rightWheel.setMotorPower(-getmotorPowerF(finalDestinationRight,countRight));

}

  leftWheel.stopMotor();
  rightWheel.stopMotor();
  measureDistance();
}

float reverse(float backDistance)// function to move robot backwards
{
  countReset();
  float backDistanceLeft = -(countLeft - distanceConverter(backDistance));
  float backDistanceRight = -(countRight - distanceConverter(backDistance));
  while ((countLeft<backDistanceLeft) || (countRight<backDistanceRight))
  {
    leftWheel.setMotorPower(-getmotorPowerR(backDistanceLeft,countLeft));
    rightWheel.setMotorPower(getmotorPowerR(backDistanceRight,countRight));
  }
  leftWheel.stopMotor();
  rightWheel.stopMotor();
  measureDistance();
}
