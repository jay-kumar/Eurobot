void measureDistance()//function to measure total distance covered
{
  totalDistanceRight = totalDistanceRight + countRight;
  totalDistanceLeft = totalDistanceLeft + countLeft;
}

void printDistance()//function to print total distance
{
  Serial.print(totalDistanceRight);
  Serial.print("  ");
  Serial.print(totalDistanceLeft);
}

float distanceConverter(float newDistance)//function to convert distance into centimeters
{
  return (newDistance/distanceRatio)*10;
}
