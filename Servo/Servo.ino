 #include <Wire.h>
 #include <Adafruit_PWMServoDriver.h>
 #include <Servo.h>
 
 Adafruit_PWMServoDriver pca= Adafruit_PWMServoDriver(0x40);
 Servo arm1;
 Servo arm2;

void setup() {
  // put your setup code here, to run once:
  //test.attach(9);
  pca.begin();
  pca.setPWMFreq(50);
}

int main() {
  // put your main code here, to run repeatedly:
  pca.setPin(1,105,false);  // This sets the servo to about 10 degrees, do not use settings below 105.
 // delay(1000);
  pca.setPin(2,105,false);  // This sets the servo to about 90 degrees, which is about mid range
  delay(1000);
 pca.setPin(1,250,false);  // This sets the servo to about 170 degrees, do not use settings above 510.
 // delay(1000);
 pca.setPin(2,250,false);  // This sets the servo to about 10 degrees, do not use settings below 105.
  delay(2000);
 pca.setPin(1,105,false);  // This sets the servo to about 90 degrees, which is about mid range
  //delay(1000);
 pca.setPin(2,105,false);  // This sets the servo to about 170 degrees, do not use settings above 510.
  delay(1000);
  return 0;
  
}
