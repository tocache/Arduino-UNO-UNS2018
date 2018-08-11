int Cable0 = 0; //Cable conectado a 7
int Cable1 = 0; //Cable conectado a 8

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(D7, INPUT);
  pinMode(D8, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Cable0 = digitalRead(D7);
  Cable1 = digitalRead(D8);
  Serial.println("Leyendo puertos...");
  Serial.print("Puerto7:");
  Serial.print(Cable0, DEC);
  Serial.print(" Puerto8:");
  Serial.println(Cable1, DEC);
  delay(500);
}
