
#include <Servo.h>
#define ENA 5
#define ENB 6
#define IN1 7
#define IN2 8
#define IN3 9
#define IN4 11

Servo arm;

int armAngle;

void setup() {
  // put your setup code here, to run once:
  pinMode(IN1,OUTPUT);//before useing io pin, pin mode must be set first 
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  pinMode(ENA,OUTPUT);
  pinMode(ENB,OUTPUT);
  arm.attach(9);
  angle = 0;
  arm.write(angle);
  delay(50);
}

void loop() {
  // put your main code here, to run repeatedly:
  angle = 45;
  arm.write(angle);
  delay(50);

  digitalWrite(ENA,HIGH);
  digitalWrite(ENB,HIGH);    
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(9, LOW);
  digitalWrite(11, HIGH);
  delay(1000);
  digitalWrite(ENA,HIGH);
  digitalWrite(ENB,HIGH);    
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(11, HIGH);

  angle = 0;
  arm.write(angle);
  delay(50);
}
