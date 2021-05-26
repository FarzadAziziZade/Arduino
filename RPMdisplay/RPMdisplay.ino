/*
Arduino UNO reads rising edge trigger pulses on pin 2 and displays RPM 
on serial plotter
*/

/* Pin assignments */
#define INTERRUPT_INPUT 2
int pulse_counter = 0;
int in1 = 9;
int in2 = 8;
int ConA = 10;
int PulsePerRev = 60;
int pulse_counter1 = 0;
int pulse_counter2 = 0;
int delta_pulse_counter = 0;
unsigned long lastmillis = 0;
int rpm = 0; 
void setup()
{
  Serial.begin(9600);
  // For noise suppression, enable pullup on interrupt pin
  // to read for pullup
  
  attachInterrupt(INTERRUPT_INPUT - 2,
                  interrupt_handler,
                  RISING);
                    digitalWrite(in1, HIGH); 
digitalWrite(in2, LOW); 
analogWrite(ConA,255);//Speed range (0-255)
}
void loop(){

// *******   RPM Counter  *************
   if (millis() - lastmillis == 1000){ 
    //Update every one second, 
   detachInterrupt(0);
   pulse_counter2 = pulse_counter;
   //Disable interrupt when calculating
   delta_pulse_counter=pulse_counter2-pulse_counter1;
   rpm = (delta_pulse_counter/PulsePerRev) * 60;
   lastmillis = millis(); // Uptade lasmillis
   pulse_counter1 = pulse_counter2 ;
   attachInterrupt(INTERRUPT_INPUT - 2,
                   interrupt_handler,
                   RISING);  
  Serial.println(rpm);
  Serial.println();             
  }
}
void interrupt_handler()
{
  pulse_counter = pulse_counter + 1;
}
