#include <Wire.h>                
#include <LiquidCrystal_I2C.h>  

LiquidCrystal_I2C lcd(0x3F, 16, 2); 
int trig_pin = 2;
int echo_pin = 3;
int light_pin = A0;
int btn1_pin = 12;
int btn2_pin = 13;              

void setup()
{
  pinMode(trig_pin, OUTPUT);
  pinMode(echo_pin, INPUT);
  pinMode(btn1_pin, INPUT);
  pinMode(btn2_pin, INPUT);
  
  Serial.begin(9600);

  lcd.begin();
  lcd.backlight();
}

void loop() {
  lcd.clear();
  lcd.home();
  if(digitalRead(btn1_pin) == HIGH) {
    lcd.print("Distance : ");
    lcd.setCursor(0,1);
    lcd.print(getDistance(trig_pin, echo_pin));
  } else if(digitalRead(btn2_pin) == HIGH) {
    lcd.print("Light :");
    lcd.setCursor(0,1);
    lcd.print(getLight(light_pin));
  } else {
    lcd.print("select button");
  }
  
  delay(1000);
}

int getLight(int aLight_pin) {
  return analogRead(aLight_pin);
}

int getDistance(int aTrig_pin, int aEcho_pin) {
  digitalWrite(aTrig_pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(aTrig_pin, LOW);
  long duration = pulseIn(aEcho_pin, HIGH); 
  long distance = duration / 58.2;
  Serial.println(distance);
  delay(100);

  return distance;
}
