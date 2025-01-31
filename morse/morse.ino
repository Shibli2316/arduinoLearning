void setup() {
  // put your setup code here, to run once:
  char input[3] = "SOS";
  int answer[3] = {};
  for(int i = 0; i < 3; i++){
    answer[i] = (int)input[i];
    Serial.println(answer[i]);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
}
