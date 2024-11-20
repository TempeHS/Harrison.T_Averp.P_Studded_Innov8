#include <Servo.h>

Servo myservo;
Servo mysigma;

int buttonPin = 8; 
int buttonState = 0; 

void setup()
{
myservo.attach(7); 
mysigma.attach(6);
pinMode(buttonPin, INPUT); 
}

void loop()
{ buttonState = digitalRead(buttonPin);
if (buttonState == LOW)
{
myservo.write(0);
mysigma.write(0);
}
else
{
myservo.write(180);
mysigma.write(180);
delay(10);
}
}