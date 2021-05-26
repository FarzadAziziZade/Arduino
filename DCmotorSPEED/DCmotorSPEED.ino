int in1 = 9;
int in2 = 8;
void setup() { 
pinMode(in1, OUTPUT); 
//Declaring the pin modes, obviously they're outputs 
pinMode(in2, OUTPUT); 
}
void TurnMotorA_CCW()
{ 
digitalWrite(in1, HIGH); 
digitalWrite(in2, LOW); 
} 
 void TurnMotorA_CW()
{ 
digitalWrite(in1, LOW); 
digitalWrite(in2, HIGH); 
} 
 void TurnMotorA_OFF()
{ 
digitalWrite(in1, LOW); 
digitalWrite(in2, LOW); 
} 
void loop() {
 TurnMotorA_CW(); // We turn to direction 1 for 3s then stop for 2s 
delay(3000); 
TurnMotorA_OFF();
delay(2000); 
TurnMotorA_CCW();// We turn to direction 2 for 3s then stop for 2s 
delay(3000); 
TurnMotorA_OFF();
delay(2000);
} 
