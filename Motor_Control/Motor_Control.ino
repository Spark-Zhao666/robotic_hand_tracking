const int motorPin = 9;
void setup() {
  pinMode(motorPin, OUTPUT);
  digitalWrite(motorPin, LOW);
  delay(10000);
}

void loop() {
  analogWrite(motorPin, 64);
  delay(300);

  analogWrite(motorPin, 0);
  delay(5000);
}
