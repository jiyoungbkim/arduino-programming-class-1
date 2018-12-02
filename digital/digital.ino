int a;
int b;

void setup() {
  // put your setup code here, to run once:
  //pinMode(12, OUTPUT);

  Serial.begin(9600);
  
  pinMode(13, INPUT);
  pinMode(8, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //digitalWrite(13, HIGH);
  //digitalWrite(13, LOW);

  // pull up & pull down
  a = digitalRead(13);
  b = digitalRead(8);

  if(a == HIGH) {
    Serial.println("a is high");
  } else {
    Serial.println("a is low");
  }
  if(b == HIGH) {
    Serial.println("b is high");
  } else {
    Serial.println("b is low");
  }
  delay(500);
}
