#include "Ultrasonic.h"
Ultrasonic mysensor(5);
//Pin 5 is for ultrasonic
int buttonPin = 8
int buttonState = 0
void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(mysensor.distanceRead());
}