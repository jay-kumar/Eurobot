#include <HUBeeBMDWheel.h>
#include <MsTimer2.h>

float angleRatio = 1.60; // This is the ratio I was talking about in the angle calculator function
float distanceRatio = 3.35;

const byte Time=90;
const byte endTimeLED=5;

int irPin = A0;
int irSensor;

int totalDistanceLeft = 0;
int totalDistanceRight = 0;

int input1=10;
int input2=9;
int pwm1=8;
int input3=13;
int input4=12;
int pwm2=11;

volatile int volCountL=0;
volatile int volCountR=0;

volatile int countRight=0;
int previousCountRight=-1;

volatile int countLeft=0;
int previousCountLeft=-1;

byte encA=2;
byte encB=4;
byte encC=3;
byte encD=5;


HUBeeBMDWheel leftWheel(input1 , input2, pwm1);
HUBeeBMDWheel rightWheel(input3, input4, pwm2);

void countReset() //function to reset count
{
  countLeft=0;
  countRight=0;
}

void setup() {
  pinMode(endTimeLED, OUTPUT);
  MsTimer2::set((Time*1000), timeUp);
  MsTimer2::start();
  
  pinMode(irPin, INPUT);
  pinMode(encA, INPUT);
  pinMode(encB, INPUT);
  pinMode(encC, INPUT);
  pinMode(encD, INPUT);
  
  leftWheel.setBrakeMode(1);
  rightWheel.setBrakeMode(1);
 
  attachInterrupt(0, checkEncoderLeft, CHANGE);
  attachInterrupt(1, checkEncoderRight, CHANGE);
  Serial.begin(9600);
  //printCount();
  path1();
  path2();
  path2();
  
}

void loop() {
 // printCount();
  avoidObstacle();
}
