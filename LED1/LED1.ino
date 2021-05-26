int LED11 = 13; // define LEDpin with integer value 11
int LED10 = 12;
int LED9  = 11;
int MyDelay = 1000;
void setup() // setup function runs once
{
pinMode(LED11, OUTPUT); // define LEDpin as output
pinMode(LED10, OUTPUT);
pinMode(LED9 , OUTPUT);
}
void loop() // loop function runs continuously
{
// LED 1
digitalWrite(LED11, HIGH); // set pin state HIGH to turn LED on
delay(MyDelay); // wait for a second = 1000ms
digitalWrite(LED11, LOW); // set pin state LOW to turn LED off
delay(MyDelay);
//LED 2
digitalWrite(LED10, HIGH); // set pin state HIGH to turn LED on
delay(MyDelay); // wait for a second = 1000ms
digitalWrite(LED10, LOW); // set pin state LOW to turn LED off
delay(MyDelay);
// LED 3
digitalWrite(LED9, HIGH); // set pin state HIGH to turn LED on
delay(MyDelay); // wait for a second = 1000ms
digitalWrite(LED9, LOW); // set pin state LOW to turn LED off
delay(MyDelay);
}
