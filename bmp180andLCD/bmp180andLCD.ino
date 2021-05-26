#include <Wire.h>
#include <SFE_BMP180.h>
#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
SFE_BMP180 bmp180;
void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);
  bool success = bmp180.begin();

  if (success) {
    Serial.println("BMP180 init success");
  }
}

void loop() {
  char status;
  double T, P;
  bool success = false;
  status = bmp180.startTemperature();
  if (status != 0) {
    
    status = bmp180.getTemperature(T);
    if (status != 0) {
      status = bmp180.startPressure(3);
      if (status != 0) {
        delay(status);
        status = bmp180.getPressure(P, T);
        if (status != 0) {
          Serial.print("Pressure: ");
          Serial.print(P);
          Serial.println(" hPa");
          Serial.print("Temperature: ");
          Serial.print(T);
          Serial.println(" C");
  lcd.setCursor(0, 0);
  lcd.print("P[kpa]=");
  lcd.setCursor(7, 0);
  lcd.print(P);
  lcd.setCursor(0, 1);
  lcd.print("T[C]=");
  lcd.setCursor(5, 1);
  lcd.print(T);
  delay(500);
  lcd.clear();
        }
      }
    }
  }
}
