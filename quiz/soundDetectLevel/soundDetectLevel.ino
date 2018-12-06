int sound_pin = A0;
int green_pin = 11;
int yellow_pin = 10;
int red_pin = 9;

int sound_count = 0;
int led_out_pin = green_pin;

void setup() {
  Serial.begin(9600);
  pinMode(green_pin, OUTPUT);
  pinMode(yellow_pin, OUTPUT);
  pinMode(red_pin, OUTPUT);
}

void loop() {
  int sound_value = analogRead(sound_pin);

  if(sound_value == 1023) {
    sound_count++;
  }

  if(sound_count >= 0 && sound_count < 10) {
    led_out_pin = green_pin;
  } else if(sound_count >= 10 && sound_count < 20) {
    led_out_pin = yellow_pin;
  } else if(sound_count >= 20 && sound_count < 30) {
    led_out_pin = red_pin;
  } else {
    
  }
  
  int light_value = map(sound_value, 0, 1023, 0, 255);
  analogWrite(led_out_pin, light_value);  
  
  Serial.print("sound value : ");
  Serial.println(sound_value);

  Serial.print("light value : ");
  Serial.println(light_value);

  delay(100);
}

