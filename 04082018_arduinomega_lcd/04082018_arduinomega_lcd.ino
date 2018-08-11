#include <LiquidCrystal.h>

const int rs = 2, en = 3, d4 = 4, d5 = 5, d6 = 6, d7 = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  lcd.begin(16, 2);           //Tamaño del LCD 16x2
  lcd.print("Maestría UNS"); //Imprime el mensaje 
}

void loop() {
  lcd.setCursor(0,1);
  lcd.print("Profesor: Kalun");
  delay(1000);
  lcd.setCursor(0,1);
  lcd.print("Chimbote - Peru");
  delay(1000);
}
