 #include <Wire.h>
 #include <Adafruit_PWMServoDriver.h>
 #include <Servo.h>
 
 Adafruit_PWMServoDriver pca= Adafruit_PWMServoDriver(0x40);
 Servo test;

void setup() {
  // put your setup code here, to run once:
  //test.attach(9);
  pca.begin();
  pca.setPWMFreq(50);
}

void loop() {
  // put your main code here, to run repeatedly:
  pca.setPin(1,125,false);  // This sets the servo to about 10 degrees, do not use settings below 105.
  delay(1000);
  //test.write(50);
  pca.setPin(1,300,false);  // This sets the servo to about 90 degrees, which is about mid range
  delay(1000);
  //test.write(300);
  pca.setPin(1,490,false);  // This sets the servo to about 170 degrees, do not use settings above 510.
  delay(1000);
}
