#include "HX711.h"

// HX711 circuit wiring
const int LOADCELL_DOUT_PIN = 14;
const int LOADCELL_SCK_PIN = 15;

HX711 scale;

void setup() {
  Serial.begin(9600);
  scale.begin(LOADCELL_DOUT_PIN, LOADCELL_SCK_PIN);
}

void loop() {

  if (scale.is_ready()) {
    long reading = scale.read();
// تنظیم صفر
    float weight = reading-132000+59000;
    Serial.print("HX711 reading: ");
    Serial.println(weight);
  } else {
    Serial.println("HX711 not found.");
  }

  delay(100);
  
}
