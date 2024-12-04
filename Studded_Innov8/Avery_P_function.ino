void ultrasetup(){
  Serial.begin(9600);
}

void ultraloop(){

  
  
  Serial.println(distance);

  if(distance <= 10) {
    myservo.write(0);
    mysigma.write(0);
  }
  

  
  
}