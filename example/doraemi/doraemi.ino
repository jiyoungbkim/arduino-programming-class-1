int melody[] = {262, 294, 330, 349, 392, 440, 494, 523};

void setup() {
  for(int i = 0; i < sizeof(melody); i++) {
    tone(8, melody[i], 250);
    delay(250);
  }
}

void loop() {}
