#ifndef SUMA_H
#define SUMA_H

#include <iostream>
#include <vector>
#include "OperacionMatematica.h"
using namespace std;

class Suma : public OperacionMatematica { //Classe Hija
public:
    Suma(double a, double b) : OperacionMatematica(a, b) {}

    void realizarOperacion() override {
        resultado = a + b;
        cout << "Suma: " << resultado << endl;
    }
};
#endif
