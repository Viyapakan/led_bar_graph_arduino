int pot_pin = A0;
const int led_count =9;
int ledPins[]={2,3,4,5,6,7,8,9,10};

void setup() {
  // put your setup code here, to run once:
  for (int thisled=0; thisled<led_count; thisled++){
   pinMode (ledPins[thisled],OUTPUT);
  }

}

void loop() {
  // put your main code here, to run repeatedly:
int pot_val=analogRead(pot_pin);
int led_level = map(pot_val,0,1023,0,led_count);
for (int thisled=0; thisled<led_count; thisled++){
  if (thisled<led_level){
    digitalWrite(ledPins[thisled],  HIGH);
  }
  else{
    digitalWrite(ledPins[thisled],  LOW);
  }
}

}
