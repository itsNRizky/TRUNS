int ledR = 5, ledG = 6, ledY = 7;
int btn = 2;
int count = 0;
void setup() {
  pinMode(ledR,OUTPUT);
  pinMode(ledG,OUTPUT);
  pinMode(ledY,OUTPUT);
  pinMode(btn,INPUT);
}

void loop() {
  if (digitalRead(btn) == 1){
    count++;
  }
  if(count==1){
    digitalWrite(ledR,HIGH);
    digitalWrite(ledG,LOW);
    digitalWrite(ledY,LOW);
    delay(500);
  }else if(count==2){
    digitalWrite(ledR,LOW);
    digitalWrite(ledG,HIGH);
    digitalWrite(ledY,LOW);
    delay(500);
  }else if(count==3){
    digitalWrite(ledR,LOW);
    digitalWrite(ledG,LOW);
    digitalWrite(ledY,HIGH);
    delay(500);
  }else if(count==4){
    digitalWrite(ledR,HIGH);
    digitalWrite(ledG,HIGH);
    digitalWrite(ledY,HIGH);
    delay(500);
  }else{
    digitalWrite(ledR,LOW);
    digitalWrite(ledG,LOW);
    digitalWrite(ledY,LOW);
    delay(500);
    count = 0;
  }
}
