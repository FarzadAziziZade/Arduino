int LEDpin = 11; // define LED pin
int bright = 0; // initial value for LED brightness
int increm = 5; // incremental change in PWM frequency
int time = 25; // define time period between changes
void setup() // setup function runs once
{
pinMode(LEDpin, OUTPUT); // LED pin as output
}
void loop() // loop function runs continuously
{
analogWrite(LEDpin, bright); // set LED brightness with PWM
delay(time); // wait for the time period
bright = bright + increm; // increment LED brightness
if(bright <=0 || bright >= 255) increm = - increm;
} // reverse increment when brightness = 0 or 255
