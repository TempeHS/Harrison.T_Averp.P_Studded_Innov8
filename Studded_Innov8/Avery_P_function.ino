void ultrasetup(){
  Serial.begin(9600);
}

void ultraloop(){

  int distance = mysensor.distanceRead();
  
  Serial.println(distance);

  if(distance <= 10 ) {
    buttonState = true;
  }

  
  
}