void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(8, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i < 2; i++){
    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(13, LOW);
    delay(500);
  }
  for(int i = 0; i < 4; i++){
    digitalWrite(11, HIGH);
    delay(500);
    digitalWrite(11, LOW);
    delay(500);
  }
  for(int i = 0; i < 6; i++){
    digitalWrite(8, HIGH);
    delay(500);
    digitalWrite(8, LOW);
    delay(500);
  }
}
