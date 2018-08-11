int entradabyte = 0;   // para los datos que estan ingresando al puerto serial

void setup() {
        Serial.begin(9600); //abro el puerto serial a 9600bps 8n1
        pinMode(D6, OUTPUT);
        pinMode(D7, OUTPUT);
}

void loop() {
        if (Serial.available() > 0) {
                entradabyte = Serial.read();
                Serial.print("He recibido: ");
                Serial.println(entradabyte, DEC);
                if (entradabyte == 48) {   //cuando presionas tecla '0'
                  digitalWrite(D6, LOW);
                  digitalWrite(D7, LOW);
                  Serial.println("Ambos LEDs apagados");
                }
                if (entradabyte == 49){    //cuando presionas tecla '1'
                  digitalWrite(D6, HIGH);
                  digitalWrite(D7, LOW);
                  Serial.println("LED2 encendido");
                }
                if (entradabyte == 50){    //cuando presionas tecla '2'
                  digitalWrite(D6, LOW);
                  digitalWrite(D7, HIGH);
                  Serial.println("LED3 encendido");                  
                }
        }
}
 
