#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 1);
  lcd.print("hello, world!");
}

void loop() {
}
 
