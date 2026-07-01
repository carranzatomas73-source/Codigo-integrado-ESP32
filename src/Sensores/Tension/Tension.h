#ifndef TENSION_H
#define TENSION_H

#include <Arduino.h>

struct MedidaTension {
    float voltaje;
    int adc;
    float porcentaje;
    float voltajeBateria;
}; 

MedidaTension leerTensionCompleta();

#endif