int s=9;
int pulse=0;
int aa=A0;
void setup()
{
  pinMode(s,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  pulse=analogRead(aa)*11.6+1000;
  digitalWrite(s,HIGH);
  delayMicroseconds(pulse);
  digitalWrite(s,LOW);
  delay(30);
}
