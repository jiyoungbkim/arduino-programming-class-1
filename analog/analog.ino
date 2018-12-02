int a;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(9, 0);
  delay(500);
  analogWrite(9, 63);
  delay(500);
  analogWrite(9, 127);
  delay(500);
  analogWrite(9, 255);
  delay(500);
  analogWrite(9, 127);
  delay(500);
  analogWrite(9, 63);
  delay(500);
  analogWrite(9, 0);
  delay(100);

  a = analogRead(A0);
  Serial.println(a);
}
