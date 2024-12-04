#include <Servo.h>
#include "Ultrasonic.h"


Ultrasonic mysensor(5);
Servo myservo;
Servo mysigma;

int buttonPin = 8;
bool buttonState = false;

bool button = false;

void setup(){
 ultrasetup ();
 servosetup ();
}

void loop() {
  ultraloop ();
  servoloop ();
}