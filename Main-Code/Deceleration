float getmotorPowerF(float finalDestinationF, float countF) // function to smooth forward movement
{
  float percentageJourneyF = ((countF/finalDestinationF)*100);
  float decelerationF = 100 - percentageJourneyF;
  float motorPowerF = 250;
  float smpF = decelerationF*motorPowerF;
  return smpF;
}

float getmotorPowerR(float backDistanceR, float countR) // function to smooth reverse movement
{
  float percentageJourneyR = ((-countR/backDistanceR)*100);
  float decelerationR = 100 - percentageJourneyR;
  float motorPowerR = 250;
  float smpR = decelerationR*motorPowerR;
  return smpR;
}
