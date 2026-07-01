#include "Tension.h"

MedidaTension leerTensionCompleta() {
    MedidaTension resultado; // Creamos nuestra caja vacía

    // Realizamos la lectura
    int suma = 0;
    for (int i = 0; i < 20; i++) {
        suma += analogRead(34);
        delay(2);
    }

    resultado.adc = suma / 20; //calculo de promedio
    resultado.voltaje = (resultado.adc * 3.3 / 4095.0); //calculo de tension
    resultado.porcentaje = (resultado.voltaje * 100.0) / 3.1; //calculo del porcentaje

    if (resultado.porcentaje > 100.0) resultado.porcentaje = 100.0;
    if (resultado.porcentaje < 0.0) resultado.porcentaje = 0.0;
    
    return resultado; 
}