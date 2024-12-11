void ultrasetup(){
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
}

void ultraloop(){

  
  
  Serial.println(distance);

  if(distance <= 10 && buttonState == HIGH)
  {
   tone(buzzer, 85);
   delay(500);
   noTone(buzzer);
   delay(2000);
  }
  

  
  
}