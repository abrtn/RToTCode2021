#define ENA 5
#define ENB 6
#define IN1 7
#define IN2 8
#define IN3 9
#define IN4 11

void setup(){
  //pinMode(IN1,OUTPUT);  
  //pinMode(IN2,OUTPUT);
 // pinMode(IN3,OUTPUT);
 // pinMode(IN4,OUTPUT);
  //pinMode(ENA,OUTPUT);
 // pinMode(ENB,OUTPUT);
 // digitalWrite(ENA,HIGH);
 // digitalWrite(ENB,HIGH);
  pinMode(IN1,OUTPUT);//before useing io pin, pin mode must be set first 
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  pinMode(ENA,OUTPUT);
  pinMode(ENB,OUTPUT);
pinMode(LED_BUILTIN, OUTPUT);
 
}

void loop(){
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(ENA,HIGH);
  digitalWrite(ENB,HIGH);    
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(9, LOW);
  digitalWrite(11, HIGH);
  delay(1000);
  //digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  //delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(ENA,HIGH);
  digitalWrite(ENB,HIGH);    
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(11, HIGH);
  delay(10000000000000000000);
}
