int analogin=A0;
int sensorvalue;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
sensorvalue=analogRead(analogin);
Serial.print(sensorvalue);
Serial.println("");
delay(50);
}
