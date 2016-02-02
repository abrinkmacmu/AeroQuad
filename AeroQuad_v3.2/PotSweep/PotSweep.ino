// Sweep
// by BARRAGAN <http://barraganstudio.com> 
// This example code is in the public domain.


#include <Servo.h> 
#include <Serial.h>
Servo myservo;
Servo myservo2;
Servo myservo3;// create servo object to control a servo 
                // a maximum of eight servo objects can be created 
 
int pos = 0;    // variable to store the servo position
int anal = 0;
int pos2 = 0;
int throttleval = 0;
int throttle = 0;
void setup() 
{ 
  Serial.begin(9600);
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  myservo2.attach(10);
  myservo3.attach(11); 
} 
 
 
void loop() 
{ 
    throttleval = analogRead(A1);
    anal = analogRead(A0);
    pos = (float)anal/1024.0*180.0;
    throttle = (float)throttleval/1024.0*180.0;
    pos2 = 180.0 - (float)anal/1024.0*180.0;
    Serial.print("\nanalog measured: ");
    Serial.print(anal);
    Serial.print("analog measured: ");
    Serial.print(pos);
    myservo.write(pos);
    myservo2.write(90);
    myservo3.write(throttle);    // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  
} 
