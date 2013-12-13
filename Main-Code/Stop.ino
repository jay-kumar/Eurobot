void timeUp()
{
  stopAllMotors();
  MsTimer2::stop();
  //re-enable interrupts to get delay to work
  interrupts();
  while(1){
    //flash led to entertain the crowd - the program will never leave this section
    digitalWrite(endTimeLED, LOW); 
    delay(200);
    digitalWrite(endTimeLED, HIGH); 
    delay(200);
  }
}

void stopAllMotors()
{
  leftWheel.stopMotor();
  rightWheel.stopMotor();
}
