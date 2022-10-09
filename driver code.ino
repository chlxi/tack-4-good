void setup() {

//set channel B
  pinMode(7, OUTPUT); //direction
  pinMode(8, INPUT); //switch (red button)
  pinMode(6, OUTPUT); //speed

}

void loop() {
  int Switch = digitalRead(8);
  if (Switch == 1){
    digitalWrite(7, 0); //forward direction
    digitalWrite(6, 1); //spins motor at full speed 
    delay (500);
    digitalWrite(6, 0);
    delay (500);
    digitalWrite(7, 1); //opposite direction
    digitalWrite(6, 1); 
    delay(500);

    
  }
  else{
    digitalWrite(6, 0);
    delay (1000);
  }
}
