void setup() {
  // put your setup code here, to run once:
pinMode(9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
tone(9,1000);
delay(1000);
noTone(9);
delay(1000);
}
