int button = 2;
int button1 = 3;
int servo_button = 6;
#include <Servo.h>

Servo servo;
int pos = 0;

void setup() {
  servo.attach(servo_button);
  pinMode(button, INPUT_PULLUP);
  pinMode(button1, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(digitalRead(button));
  Serial.println(digitalRead(button1));
  if (digitalRead(button) == 0) {
    pos++;
    delay(5);
    servo.write(pos);
  }
  if (digitalRead(button1) == 0) {
    pos--;
    delay(5);
    servo.write(pos);
  }
}
