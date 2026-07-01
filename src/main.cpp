#include <Arduino.h>
#include "Sensores/Tension/Tension.h"

void setup() {
    Serial.begin(115200);
    pinMode(34, INPUT);
}

void loop() {
    MedidaTension datos = leerTensionCompleta(); 

    Serial.print("Voltaje: ");
    Serial.print(datos.voltaje, 3);

    Serial.print(" V | ADC: ");
    Serial.println(datos.adc);

    Serial.print("Porcentaje: ");
    Serial.print(datos.porcentaje, 2);
    Serial.println(" %");

    Serial.print("Voltaje de Batería: ");
    Serial.print(datos.voltajeBateria, 2);
    Serial.println("V");
    delay(500);
}