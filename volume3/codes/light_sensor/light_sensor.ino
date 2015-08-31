int temperature = A4;
int val = 0;

void setup() {
  Serial.begin(9600);

}

void loop() {
  val = analogRead(temperature);
  Serial.print("light intensity: ");
  Serial.println(val);    
  delay(1000);  
}
