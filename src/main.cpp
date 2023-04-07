#include <Arduino.h>
#define l1 13
#define l2 9
#define l3 3
#define l4 4
#define pwm 23
void setup() {
  pinMode(l1,OUTPUT);
  pinMode(l2,OUTPUT);
  pinMode(l3,OUTPUT);
  pinMode(l4,OUTPUT);
  pinMode(pwm,OUTPUT);
 
  Serial.begin(115200);
  
}

void loop() {
  if (Serial.available()>0) {
    int input=Serial.read();
    int pwmvalue=Serial.read();
   

  switch (input)
    {
    case 1:
        digitalWrite(l1,HIGH);
        digitalWrite(l2,HIGH);
        digitalWrite(l3,HIGH);
        digitalWrite(l4,HIGH);
        analogWrite(pwm,pwmvalue);
    
      break;
    case 2:
      digitalWrite(l1,LOW);
        digitalWrite(l2,LOW);
        digitalWrite(l3,LOW);
        digitalWrite(l4,LOW);
        analogWrite(pwm,pwmvalue);

      break;

      case 3:
      digitalWrite(l1,HIGH);
        digitalWrite(l2,LOW);
        analogWrite(pwm,pwmvalue);
        break;

        case 4:
        digitalWrite(l1,LOW);
        digitalWrite(l2,HIGH);
        analogWrite(pwm,pwmvalue);



       

    
      break;
    }
  
  }
  delay(20);
}
  
