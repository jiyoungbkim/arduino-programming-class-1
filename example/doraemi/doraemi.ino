int melody[] = {262, 294, 330, 349, 392, 440, 494, 523};

void setup() {
  
  
  
}

void loop() {
  for(int i = 0; i < sizeof(melody); i++) {
    tone(6, melody[i], 500);
    delay(250);
  }
}
