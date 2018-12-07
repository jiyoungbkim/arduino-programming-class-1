#include <Servo.h>

Servo myservo;
int btn_pin = 7;

void setup() {
  myservo.attach(9);
  pinMode(7, INPUT);
}

void loop() {
  if(digitalRead(btn_pin) == HIGH) {

    int val = analogRead(A0);
    
    int rad = map(val, 0, 1023, 0, 180);
    
    myservo.write(rad);
    delay(15);  
  
  }
}
