void ultrasetup(){
  Serial.begin(9600);
}

void ultraloop(){
  Serial.println(mysensor.distanceRead());
  if(distanceRead <= 10)
  
  
}