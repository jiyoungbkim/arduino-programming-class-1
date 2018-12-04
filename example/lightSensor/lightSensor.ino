void setup() {}

void loop() {
  int light = analogRead(A0);
  int ledLight = map(light, 0, 1023, 255, 0);
  analogWrite(9, ledLight);
  delay(500);
}
