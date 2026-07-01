#include <Arduino.h>

float factorDivision = 1.0;

void setup() {
  Serial.begin(115200);
  pinMode(34, INPUT);
}

void loop() {
  long suma = 0;
  const int muestras = 20;

  for (int i = 0; i < muestras; i++) {
    suma += analogRead(34);
    delay(2);
  }

  int adcPromedio = suma / muestras;

  float voltajeReal = (adcPromedio * 3.3 / 4095.0) * factorDivision;

  Serial.print("ADC Promedio: ");
  Serial.println(adcPromedio);

  Serial.print("Voltaje: ");
  Serial.print(voltajeReal, 3);
  Serial.println(" V");
  Serial.print("ADC Promedio: ");
  Serial.println(adcPromedio);

  delay(100);
}