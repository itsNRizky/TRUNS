const int led = 13;
void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() {
  digitalWrite(led,HIGH);
}
