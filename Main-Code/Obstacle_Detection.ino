void avoidObstacle()// function to avoid obstacles
{
 irSensor = analogRead(irPin);
 measureDistance();
 if(irSensor > 300)
 {
   obstaclePath();
 }
}
