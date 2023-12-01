#ifndef RESTA_H
#define RESTA_H

#include <iostream>
#include <vector>
#include "OperacionMatematica.h"
using namespace std;

class Resta : public OperacionMatematica {
public:
    Resta(double a, double b) : OperacionMatematica(a, b) {}

    void realizarOperacion() override {
        resultado = a - b;
        cout << "Resta: " << resultado << endl;
    }
};

#endif
