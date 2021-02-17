#include <Servo.h>
Servo sv;
void setup() {
  sv.attach(6);
}

void loop() {
  //90 degree
  sv.write(90);
  delay(500);
  //45 degree
  sv.write(45);
  delay(500);

}
