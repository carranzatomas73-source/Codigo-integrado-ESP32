#include <Arduino.h>


void setup() {
 pinMode(2, OUTPUT); // Configura el pin del LED como salida
}

void loop() {
  digitalWrite(2, HIGH); // Enciende el LED
  delay(500); // Espera 1 segundo
  digitalWrite(2, LOW); // Apaga el LED
  delay(500); // Espera 1 segundo
  
}