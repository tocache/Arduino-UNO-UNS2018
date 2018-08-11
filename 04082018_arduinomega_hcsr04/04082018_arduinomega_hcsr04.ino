#include <HCSR04.h>
#include <LiquidCrystal.h>

UltraSonicDistanceSensor distanceSensor(8, 9);

const int rs = 2, en = 3, d4 = 4, d5 = 5, d6 = 6, d7 = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  lcd.begin(16, 2);           //Tamaño del LCD 16x2
  lcd.print("Maestria UNS2018"); //Imprime el mensaje 
}

void loop() {
  float distancia = distanceSensor.measureDistanceCm();
  lcd.setCursor(0,1);
  lcd.print("Distancia:");
  lcd.print(distancia, 1);
  lcd.print("cm");
  delay(500);
}
