int LEDpin = 11; // define LEDpin with integer value 11
void setup() // setup function runs once
{
pinMode(LEDpin, OUTPUT); // define LEDpin as output
}
void loop() // loop function runs continuously
{
digitalWrite(LEDpin, HIGH); // set pin state HIGH to turn LED on
delay(1000); // wait for a second = 1000ms
digitalWrite(LEDpin, LOW); // set pin state LOW to turn LED off
delay(1000);
}
