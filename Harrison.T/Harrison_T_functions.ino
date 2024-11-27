void servosetup(){
  myservo.attach(7); 
  mysigma.attach(6);
  pinMode(buttonPin, INPUT); 
}

void servoloop(){
  buttonState = digitalRead(buttonPin);
if (buttonState == HIGH && button == false)
{

  myservo.write(180);
  mysigma.write(180);

  button = true;

  delay(500);



} else if (buttonState == HIGH && button == true)
{

  myservo.write(0);
  mysigma.write(0);

  button = false;

  delay(500);



}
}