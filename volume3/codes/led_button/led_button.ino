int led = 6;
int button = 7;
int state = LOW;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);

}

void loop() {
  state = digitalRead(button);
  digitalWrite(led,state);
 
  delay(300);
}
