int pinNumber = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinNumber, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(pinNumber, 0);
}
