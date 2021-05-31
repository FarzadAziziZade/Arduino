/*   
Compass Calibration
by Hanie Kiani 
https://electropeak.com/learn/ 
*/ 
#include <Wire.h>
#include <LSM303.h>
#include <Servo.h>
LSM303 compass;
int servoPin = 3; 
Servo Servo1; 
void setup() {
  Serial.begin(9600);
  Wire.begin();
  Servo1.attach(servoPin); 
  compass.init();
  compass.enableDefault();
  
 
  compass.m_min = (LSM303::vector<int16_t>){-32767, -32767, -32767};
  compass.m_max = (LSM303::vector<int16_t>){+32767, +32767, +32767};
}
 
void loop() {
  compass.read();
  
 
  float heading =compass.heading((LSM303::vector<int>){0, 0, 1});
  
  Serial.println(heading);
  Servo1.write(180-heading);
  delay(100);
}
