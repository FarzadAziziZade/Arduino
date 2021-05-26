int LEDpin=4;
int switchpin = 8;
int reading;
void setup() {
  // put your setup code here, to run once:
pinMode(LEDpin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
reading=digitalRead(switchpin);
Serial.print(reading);
Serial.println("");
digitalWrite(LEDpin,reading);
}
