#include <Servo.h>
Servo sv;
void setup() {
  sv.attach(6);
}

void loop() {
  for (int i=1;i<=5;i++){
    sv.write(15*i);
    delay(500);
  }

}
