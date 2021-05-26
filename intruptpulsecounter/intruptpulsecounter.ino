/*
Arduino UNO reads rising edge trigger pulses 
on pin 2 and displays counter on serial plotter
*/
/* Pin assignments */
#define INTERRUPT_INPUT 2
int pulse_counter = 0;
void setup()
{
  Serial.begin(9600);
  // For noise suppression, enable pull up on interrupt pin
  // 10 kOhm resistor between pin2 and 5 volt
attachInterrupt(INTERRUPT_INPUT - 2,
                  interrupt_handler,
                  RISING);
}
void loop(){
  if (pulse_counter > 0)
  {
    Serial.println(pulse_counter);
  }
}
void interrupt_handler()
{
  pulse_counter = pulse_counter + 1;
}
