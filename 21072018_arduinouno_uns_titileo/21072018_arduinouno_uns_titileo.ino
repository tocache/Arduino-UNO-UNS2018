void setup() {
  // put your setup code here, to run once:
  // aspectos de configuración
  // debemos de hacer que el puerto 2 sea una salida
  pinMode(2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2, HIGH);
  delay(500);
  digitalWrite(2, LOW);
  delay(500);
}
