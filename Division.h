#ifndef DIVISION_H
#define DIVISION_H

#include <iostream>
#include <vector>
#include "OperacionMatematica.h"
using namespace std;

class Division : public OperacionMatematica {
public:
    Division(double a, double b) : OperacionMatematica(a, b) {}

    void realizarOperacion() override {
        if (b != 0) {
            resultado = a / b;
            cout << "Division: " << resultado << endl;
        } else {
            cout << "No se puede dividir entre cero." << endl;
        }
    }
};
#endif
