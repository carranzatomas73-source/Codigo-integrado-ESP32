#include "Tension.h"

MedidaTension leerTensionCompleta() {
    MedidaTension resultado; // Creamos nuestra caja vacía

    // Realizamos la lectura
    int suma = 0;
    for (int i = 0; i < 20; i++) {
        suma += analogRead(34);
        delay(2);
    }

    // Llenamos la caja
    resultado.adc = suma / 20;
    resultado.voltaje = (resultado.adc * 3.3 / 4095.0);

    return resultado; // Devolvemos la caja llena
}