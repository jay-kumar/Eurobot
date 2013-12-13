void path1()
{
  forward(120);
  turnLeft(90);
  forward(9);
  turnLeft(90);
  forward(120);
  reverse(30);
  turnRight(360);
}
void path2()
{
  forward(90);
  turnLeft(90);
  forward(9);
  turnLeft(90);
  forward(120);
  reverse(30);
  turnRight(360);
}

void obstaclePath()//function with pre determined obstacle avoidance path
{
  reverse(42);
  turnLeft(90);
  forward(21);
  turnRight(90);
  forward(42);
  turnRight(90);
  forward(21);
  turnLeft(90);
}
