#include "Ultrasonic.h"
Ultrasonic mysensor(5);
//Pin 5 is for ultrasonic
int buttonPin = 8;





void setup() {
  ultrasetup (); 
}

void loop() {
  ultraloop ();
}
