#define EnA 10
#define EnB 11

#define IN1 8
#define IN2 12
#define IN3 9
#define IN4 13

#define delayTime 2


void setup()
{
 pinMode(EnA, OUTPUT);
 pinMode(EnB, OUTPUT);
 pinMode(IN1, OUTPUT);   
 pinMode(IN2, OUTPUT);   
 pinMode(IN3, OUTPUT);   
 pinMode(IN4, OUTPUT);  
 
}

void loop()
{
 digitalWrite(EnA,HIGH);
 digitalWrite(EnB,HIGH);
 
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  delay(delayTime);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  delay(delayTime);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  delay(delayTime);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  delay(delayTime);
 
}
