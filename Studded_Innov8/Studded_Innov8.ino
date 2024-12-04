#include <Servo.h>
#include "Ultrasonic.h"


Ultrasonic mysensor(5);
Servo myservo;
Servo mysigma;

int buttonPin = 8;
bool buttonState = false;
int distance;


bool button = false;

void setup(){
 ultrasetup ();
 servosetup ();
 Serial.println("Debug");
}

void loop() {

  distance = mysensor.distanceRead();
  
  ultraloop();
  servoloop();
}