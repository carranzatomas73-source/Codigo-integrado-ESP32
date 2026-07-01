#ifndef TENSION_H
#define TENSION_H

#include <Arduino.h>

struct MedidaTension {
    float voltaje;
    int adc;
    float porcentaje;
};

// La función ahora devuelve el "paquete" completo
MedidaTension leerTensionCompleta();

#endif