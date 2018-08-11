#include <DHT.h>
#include <LiquidCrystal.h>
#define DHTPIN 8  // Dónde esta conectado el sensor
#define DHTTYPE DHT11   // Modelo del sensor empleado (DHT11)

const int rs = 2, en = 3, d4 = 4, d5 = 5, d6 = 6, d7 = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  dht.begin();          // Inicialización del sensor
  lcd.begin(16, 2);           //Tamaño del LCD 16x2
  lcd.print("Maestria UNS2018"); //Imprime el mensaje 
  pinMode(9, OUTPUT);
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  lcd.setCursor(0,1);
  lcd.print("T:");
  lcd.print(t, 1);
  lcd.write(0xDF);
  lcd.print("C H:");
  lcd.print(h, 1);
  lcd.print("%");
  if(h>70) {
    digitalWrite(9, 1);
  }
  else {
    digitalWrite(9, 0);
  }
  //delay(1000);
}
