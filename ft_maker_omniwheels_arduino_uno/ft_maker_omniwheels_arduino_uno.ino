#include <AFMotor.h>

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);

const int d1 = 700;
const int d2 = 1000;
const int d3 = 2400;
const int d4 = 300;

void stop() 
{
	motor1.run(RELEASE);
	motor2.run(RELEASE);
	motor3.run(RELEASE);
	motor4.run(RELEASE);
}

void fwd() 
{
	motor1.run(FORWARD);
	motor2.run(FORWARD);
	motor3.run(FORWARD);
	motor4.run(FORWARD);
}

void bwd() 
{
	motor1.run(BACKWARD);
	motor2.run(BACKWARD);
	motor3.run(BACKWARD);
	motor4.run(BACKWARD);
}

void sideR() 
{
	motor1.run(FORWARD);
	motor2.run(BACKWARD);
	motor3.run(BACKWARD);
	motor4.run(FORWARD);
}

void sideL() 
{
	motor1.run(BACKWARD);
	motor2.run(FORWARD);
	motor3.run(FORWARD);
	motor4.run(BACKWARD);
}

void rotR() 
{
	motor1.run(BACKWARD);
	motor2.run(FORWARD);
	motor3.run(BACKWARD);
	motor4.run(FORWARD);
}

void rotL() 
{
	motor1.run(FORWARD);
	motor2.run(BACKWARD);
	motor3.run(FORWARD);
	motor4.run(BACKWARD);
}

void diagFR() 
{
	motor1.run(FORWARD);
	motor4.run(FORWARD);
}

void diagBR() 
{
	motor2.run(BACKWARD);
	motor3.run(BACKWARD);
}

void diagBL() 
{
	motor1.run(BACKWARD);
	motor4.run(BACKWARD);
}

void diagFL() 
{
	motor2.run(FORWARD);
	motor3.run(FORWARD);
}

void setup() 
{
	//Set initial speed of the motor & stop
	motor1.setSpeed(255);
	motor1.run(RELEASE);
	motor2.setSpeed(255);
	motor2.run(RELEASE);
	motor3.setSpeed(255);
	motor3.run(RELEASE);
	motor4.setSpeed(255);
	motor4.run(RELEASE);
}

void loop() 
{
  fwd(); 	delay(d1); stop(); delay(d4);
  bwd();  delay(d1); stop(); delay(d4);

  diagFR();  delay(d2); stop(); delay(d4);
  diagBL();  delay(d2); stop(); delay(d4);

  sideR();  delay(d2); stop(); delay(d4);
  sideL();  delay(d2); stop(); delay(d4);

  diagBR();  delay(d2); stop(); delay(d4);
  diagFL();  delay(d2); stop(); delay(d4);

  bwd();  delay(d1); stop(); delay(d4);
  fwd(); 	delay(d1); stop(); delay(d4);

  diagBL();  delay(d2); stop(); delay(d4);
  diagFR();  delay(d2); stop(); delay(d4);

  sideL();  delay(d2); stop(); delay(d4);
  sideR();  delay(d2); stop(); delay(d4);

  diagFL();  delay(d2); stop(); delay(d4);
  diagBR();  delay(d2); stop(); delay(d4);

  rotR();  delay(d3); stop(); delay(d4);
  rotL();  delay(d3); stop(); delay(d4);

  delay(d4);
}
