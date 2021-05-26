int switchPin = 8; // define switch pin
int LEDpin = 4; // define LED pin
int reading; // define reading as integer
void setup()
{
pinMode(LEDpin, OUTPUT); // LED pin as output
}
void loop()
{
reading = digitalRead(switchPin); // read switch pin
digitalWrite(LEDpin, reading); // turn LED on if switch is HIGH
}
