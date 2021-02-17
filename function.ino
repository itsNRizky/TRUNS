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
  switch(count){
    case 1:
      set(1,0,0);
      break;
    case 2:
      set(0,1,0);
      break;
    case 3:
      set(0,0,1);
      break;
    default:
      count = 0;
      break;
  }
  
}

void set(int r,int g,int y){
  digitalWrite(ledR,r);
  digitalWrite(ledG,g);
  digitalWrite(ledY,y);
  delay(500);
}
