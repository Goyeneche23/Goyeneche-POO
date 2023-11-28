#include <iostream>
#include <cmath>
#include "Operacion.h"
using namespace std;

// Clase hija Suma
class Suma : public OperacionMatematica {
public:
    Suma(double a, double b) : OperacionMatematica(a, b) {}

    void realizarOperacion() const override {
        double solucion = a + b;
        cout << "Suma: " << solucion << endl;
    }
};

// Clase hija Resta
class Resta : public OperacionMatematica {
public:
    Resta(double a, double b) : OperacionMatematica(a, b) {}

    void realizarOperacion() const override {
        double solucion = a - b;
        cout << "Resta: " << solucion << endl;
    }
};

// Clase hija Multiplicacion
class Multiplicacion : public OperacionMatematica {
public:
    Multiplicacion(double a, double b) : OperacionMatematica(a, b) {}

    void realizarOperacion() const override {
        double solucion = a * b;
        cout << "Multiplicacion: " << solucion << endl;
    }
};

class Division : public OperacionMatematica {
public:
    Division(double a, double b) : OperacionMatematica(a, b) {}

    void realizarOperacion() const override {
        if (b != 0) {
            double solucion = a / b;
            cout << "Division: " << solucion << endl;
        } else {
            cout << "No se puede dividir entre cero." << endl;
        }
    }
};
