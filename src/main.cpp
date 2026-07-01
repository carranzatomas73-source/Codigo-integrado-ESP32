#include <Arduino.h>
#include "Sensores/Tension/Tension.h"

void setup() {
    Serial.begin(115200);
    pinMode(34, INPUT);
}

void loop() {
    MedidaTension datos = leerTensionCompleta(); // Recibimos el paquete

    Serial.print("Voltaje: ");
    Serial.print(datos.voltaje, 3);
    Serial.print(" V | ADC: ");
    Serial.println(datos.adc);

    delay(100);
}