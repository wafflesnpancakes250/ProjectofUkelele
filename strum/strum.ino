const int limUpper = 120;
const int limLower = 70;

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  myservo.attach(9); 
}

void loop() {
  for (pos = limLower; pos <= limUpper; pos += 1) 
  { 
    // in steps of 1 degree
    myservo.write(pos); 
    delay(5);       
  }
  for (pos = limUpper; pos >= limLower; pos -= 1) 
  { 
    myservo.write(pos);
    delay(5); 
  }
}

