
int analogInPin = A0;  // Analog input pin that the potentiometer is attached to
int sensorValue = 0;        // value read from the potentiometer
float Volts;
int bright;
int LEDpin=9;
void setup() {
Serial.begin(9600);
pinMode(LEDpin,OUTPUT);
}
void loop() {
  // read the analog in value:
  sensorValue = analogRead(analogInPin);
  Volts = sensorValue*(5.0/1023);
  // wait 2 milliseconds before the next loop for the analog-to-digital
  // converter to settle after the last reading:
  bright = sensorValue*(255.0/1023);
  analogWrite(LEDpin,bright); 
  Serial.print("Bright = ");
  Serial.print(bright);
  Serial.print(" , ");
  Serial.print("Volts = ");
  Serial.print(Volts);
  Serial.println("");
}
