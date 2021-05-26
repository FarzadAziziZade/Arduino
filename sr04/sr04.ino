/*HC-SR04 distance sensor
VCC to arduino 5v GND to arduino GND
Echo to Arduino pin 13 Trig to Arduino pin 12
Red POS to Arduino pin 11
Green POS to Arduino pin 10
560 ohm resistor to both LED NEG 
and GRD power rail*/
#define trigPin 13
#define echoPin 12
#define ledRED 11
#define ledGREEN 10
void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledRED, OUTPUT);
  pinMode(ledGREEN, OUTPUT);
}
void loop() {
  long duration, distance;
  digitalWrite(trigPin, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(trigPin, HIGH);
//  delayMicroseconds(1000); - Removed this line
  delayMicroseconds(10); // Added this line
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  if (distance < 4) {  
     // This is where the LED On/Off happens
    digitalWrite(ledRED,HIGH); 
// When the Red condition is met, 
// the Green LED should turn off
  digitalWrite(ledGREEN,LOW);
}
  else {
    digitalWrite(ledRED,LOW);
    digitalWrite(ledGREEN,HIGH);
  }
  if (distance >= 200 || distance <= 0){
    Serial.println("Out of range");
  }
  else {
    Serial.print(distance);
    Serial.println(" cm");
  }
  delay(500);
}
