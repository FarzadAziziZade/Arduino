// It will increase the speed of your code if you firstly assign values to constant variables
const int SensorPIN=A0;
const float Factor=2;
void setup() {
  // put your setup code here, to run once:
  pinMode(SensorPIN, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int Value=analogRead(SensorPIN)/Factor;
}
