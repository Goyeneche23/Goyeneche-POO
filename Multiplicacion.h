#ifndef MULTIPLICACION_H
#define MULTIPLICACION_H

#include <iostream>
#include <vector>
#include "OperacionMatematica.h"
using namespace std;

class Multiplicacion : public OperacionMatematica {
public:
    Multiplicacion(double a, double b) : OperacionMatematica(a, b) {}

    void realizarOperacion() override {
        resultado = a * b;
        cout << "Multiplicacion: " << resultado << endl;
    }
};

#endif
