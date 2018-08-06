char myInput;
#include<Servo.h>

int myNumber;

Servo myServo;

void setup() {
myNumber = 0;
Serial.begin(9600);

  myServo.attach(9);
 pinMode(2, OUTPUT);
 
  // put your setup code here, to run once:
pinMode(3, OUTPUT);

pinMode(4, OUTPUT);
}
void loop() {
if (Serial.available()) {
myInput = Serial.read();
}
  Serial.println(myInput);
 myNumber = analogRead(0) + 1000;
 Serial.println(myNumber);

 delay(1000);
  myServo.writeMicroseconds(myNumber);

 digitalWrite(2, HIGH);
 delay(500);
 
 digitalWrite(3, HIGH);
 delay(500);
 
 digitalWrite(4, HIGH);
 delay(500);
 
// delay(500);
 
 
// delay(500);
 
 digitalWrite(2, LOW);
 
 digitalWrite(3, LOW);
 
 digitalWrite(4, LOW);

 //delay(2000);

 //delay(500);

// delay(500);
 
  // put your main code here, to run repeatedly:

}
