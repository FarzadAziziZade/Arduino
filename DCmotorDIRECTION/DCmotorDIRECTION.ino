int in1 = 9;
int in2 = 8;
int ConA = 10; 
void setup() { 
pinMode(in1, OUTPUT); 
pinMode(in2, OUTPUT); 
pinMode(ConA, OUTPUT);
}
void TurnMotorA_LowRPM(){ 
digitalWrite(in1, HIGH); 
digitalWrite(in2, LOW); 
analogWrite(ConA,90);//Speed range (0-255)
} 
 void TurnMotorA_HighRPM (){ 
digitalWrite(in1, HIGH); 
digitalWrite(in2, LOW); 
analogWrite(ConA,255);//Speed range (0-255)
} 
 void TurnMotorA_OFF(){ 
digitalWrite(in1, LOW); 
digitalWrite(in2, LOW); 
analogWrite(ConA,0);//Speed range (0-255)
} 
void loop() {
TurnMotorA_LowRPM();   
delay(3000); 
TurnMotorA_OFF();
delay(2000); 
TurnMotorA_HighRPM();
delay(3000); 
TurnMotorA_OFF();
delay(2000); } 
