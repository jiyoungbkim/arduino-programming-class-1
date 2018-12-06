#include <Servo.h>

Servo myservo;

void setup() {
  Serial.begin(9600);
  myservo.attach(9);
}

void loop() {
  int val = analogRead(A0);
  Serial.println(val);
  
  int rad = map(val, 0, 1023, 0, 160);
  myservo.write(rad);
  delay(150);
}
