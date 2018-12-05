#include <Servo.h>

Servo myservo;

void setup() {
  myservo.attach(9);
  myservo.write(40);
}

void loop() {
  
  
  for(int i = 40; i < 160; ++i) {
    myservo.write(i);
    delay(15);
  }
  for(int i = 160; i > 40; --i) {
    myservo.write(i);
    delay(15);
  }

}
