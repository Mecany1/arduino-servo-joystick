#include <Servo.h>

Servo servoInstance;

int axis_y_pin = 1;

void setup() {
  servoInstance.attach(3);
}

 void loop() {
  int position_y = analogRead(axis_y_pin);
  int ang = map(position_y, 0, 1023, 1,180);
  
  servoInstance.write(ang);
  
  delay(100);
 }
