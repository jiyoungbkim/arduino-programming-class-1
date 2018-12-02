void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);  // red led
  pinMode(12, OUTPUT);  // yellow led
  pinMode(8, OUTPUT);   // green led
}

void loop() {
  // put your main code here, to run repeatedly:

  // turn on red, turn off yellow, green
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(8, LOW);
  delay(1000);

  // turn on yellow, turn off red, green
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(8, LOW);
  delay(1000);

  // turn on green, turn off red, yellow
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(8, HIGH);
    delay(1000);
}
