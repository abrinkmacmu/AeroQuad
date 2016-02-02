// Sweep
// by BARRAGAN <http://barraganstudio.com> 
// This example code is in the public domain.


 

void setup() 
{ 
  Serial.begin(9600);
  pinMode(9,HIGH);
  pinMode(10,HIGH);
  pinMode(11,HIGH);
} 
 
 int anal;
 int val;
void loop() 
{ 
    anal = analogRead(A0);
    val = map(anal,0,1024,1,4);
    switch(val){
        case 1:
          digitalWrite(9,LOW);
          digitalWrite(10,HIGH);
          digitalWrite(11,HIGH);
          break;
       case 2:  
          digitalWrite(9,HIGH);
          digitalWrite(10,LOW);
          digitalWrite(11,HIGH);
          break;
       case 3:
          digitalWrite(9,HIGH);
          digitalWrite(10,HIGH);
          digitalWrite(11,LOW);
          break;
    }
       
       
       delay(15); 
  
} 
