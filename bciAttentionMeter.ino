#include <Servo.h>
Servo servo;

int attentionData;
int servoPin = 3;


void setup() {

Serial.begin(115200);
servo.attach(servoPin);

}

void loop() {

  while (Serial.available() > 0){
    attentionData = Serial.read();
  }
  // Multiply the attention data with 1.8 to convert it to 
  // motor's rotation degrees.
  servo.write(attentionData*1.8);
}
