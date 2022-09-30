void setup() {

//set channel B
  pinMode(7, OUTPUT); //direction
  //pinMode(9, OUTPUT); //brake
  //set switch
  pinMode(8, INPUT); //switch 
  pinMode(6, OUTPUT); //speed

}

void loop() {
  int Switch = digitalRead(8);
  if (Switch == 1){
    //digitalWrite(9,LOW); //brake is off
    digitalWrite(7, LOW); //forward direction
    digitalWrite(6, 1); //spins motor at full speed (0-255)
    digitalWrite(13, HIGH); //turn on LED
    delay (500);
    digitalWrite(13, LOW);
    digitalWrite(6, 0);
    digitalWrite(9, LOW); //brake is on
    delay (500);
    digitalWrite(7, HIGH); //opposite direction
    digitalWrite(6, 1); 
    delay(500);

    
  }
  else{
    digitalWrite(13, LOW);
    digitalWrite(6, 0);
    //digitalWrite(9, HIGH); //brake is on
    delay (1000);
  }
}
