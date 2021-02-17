int pin = analogRead(A0);
float volt;
void setup() {
  Serial.begin(9600);
}

void loop() {
  volt = pin * (5 / 4095); //12 bit
  Serial.print("Analog: ");
  Serial.println(pin);
  Serial.print("Voltase: ");
  Serial.println(volt);

}
