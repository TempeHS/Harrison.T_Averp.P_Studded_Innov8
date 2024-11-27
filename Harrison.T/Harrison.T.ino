







#include <Servo.h>

Servo myservo;
Servo mysigma;

int buttonPin = 8; 
bool buttonState = false; 

bool button = false;

void setup()
{
 servosetup ();
}

void loop()
{ 
  servoloop ();
}