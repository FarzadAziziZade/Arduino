#include <Keypad.h>
#include <LiquidCrystal.h>

  //initialize the library with the numbers of the interface pins
  LiquidCrystal lcd(A0,A1,A2,A3,A4,A5);
  //4x4 Matrix key pad
  const byte ROWS = 4; // Four rows
  const byte COLS = 4; // Four columns
  // Define the Keymap
  char keys[ROWS][COLS] = 
  {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
  };
  // Connect keypad ROW0, ROW1, ROW2 and ROW3 to Arduino pins.
  byte rowPins[ROWS] = { 2,3,4,5 };
  // Connect keypad COL0, COL1, COL2 and COL3 to Arduino pins.
  byte colPins[COLS] = { 6,7,8,9 }; 
  // Create the Keypad
  Keypad kpd = Keypad( makeKeymap(keys), rowPins,colPins, ROWS, COLS );
  void setup(){
    Serial.begin(9600);
    // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
    // Print a message to the LCD.
  lcd.print("KEYPAD LCD TEST"); 
  }
  void loop(){
    char key = kpd.getKey();
    // set the cursor to column 0, line 1
    // (note:line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
    // print the number of seconds since reset:
  lcd.print("SEC= ");
  lcd.print(millis() / 1000);
    // Check for a valid key
  if(key)   {
    Serial.println(key);
       // set the cursor to column 9, line 1
       // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(9, 1);
  //Print the detected key
  lcd.print("KEY= ");
  lcd.print(key);}  }
