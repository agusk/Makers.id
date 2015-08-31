int relay = 4;

void setup() {
  pinMode(relay, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  Serial.println("RELAY: HIGH");  
  digitalWrite(relay,HIGH);
  delay(1000);
  Serial.println("RELAY: LOW");  
  digitalWrite(relay,LOW);
  delay(1000);
}
