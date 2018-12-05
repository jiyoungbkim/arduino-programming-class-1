int trig_pin = 2;
int echo_pin = 3;
int btn_pin = 13;
int red_pin = 9;
int green_pin = 8;

void setup() {
  pinMode(trig_pin, OUTPUT);
  pinMode(echo_pin, INPUT);
  pinMode(btn_pin, INPUT);
  pinMode(red_pin, OUTPUT);
  pinMode(green_pin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trig_pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig_pin, LOW);

  long duration = pulseIn(echo_pin, HIGH);

  long distance = duration / 58.2;
  Serial.print("distance : ");
  Serial.println(distance);

  if(digitalRead(13) == HIGH) {
      if(distance >= 5 && distance < 10) {
        Serial.println("in"); 
        digitalWrite(red_pin, HIGH);
        digitalWrite(green_pin, LOW);
      } else {
        Serial.println("out"); 
        digitalWrite(red_pin, LOW);
        digitalWrite(green_pin, HIGH);
      }
  } else {
    Serial.println("unpushed");
    digitalWrite(red_pin, LOW);
    digitalWrite(green_pin, LOW);
  }

  delay(100);
}
