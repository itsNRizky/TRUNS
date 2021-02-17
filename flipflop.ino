int ledGanjil = 5, ledGenap = 6;

void setup() {
  pinMode(ledGanjil,OUTPUT);
  pinMode(ledGenap, OUTPUT);
}

void loop() {
  digitalWrite(ledGanjil,HIGH);
  digitalWrite(ledGenap, LOW);
  delay(1000);
  digitalWrite(ledGenap, HIGH);
  digitalWrite(ledGanjil, LOW);
  delay(1000);

}
