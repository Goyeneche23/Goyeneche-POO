#include <iostream>
#include <cmath>
#include "Operacion.h"
using namespace std;

// Clase hija EcuacionLineal
class EcuacionLineal : public OperacionMatematica {
public:
    EcuacionLineal(double a, double b) : OperacionMatematica(a, b) {}

    void resolverEcuacion() const {
        if (a == 0) {
            if (b == 0) {
                cout << "Infinitas soluciones." << endl;
            } else {
                cout << "No hay solución." << endl;
            }
        } else {
            double solucion = -b / a;
            cout << "Solución: x = " << solucion << endl;
        }
    }
};

// Clase hija EcuacionCuadratica
class EcuacionCuadratica : public OperacionMatematica {
public:
    EcuacionCuadratica(double a, double b, double c) : OperacionMatematica(a, b), c(c) {}

    void resolverEcuacion() const {
        if ((b * b - 4 * a * c) > 0) {
            double solucion1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
            double solucion2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
            cout << "x1 = " << solucion1 << endl << "x2 = " << solucion2 << endl;
        } else if ((b * b - 4 * a * c) == 0) {
            double solucion = -b / (2 * a);
            cout << "x = " << solucion << endl;
        } else {
            cout << "No solucion." << endl;
        }
    }

private:
    double c;
};
/*
class EcuacionCubica {
public:
    EcuacionCubica(double a, double b, double c, double d) : a(a), b(b), c(c), d(d) {}
    void reducirEcuacion() const {
        if (a == 0) {
            cout << "No es una ecuacion Cubica. " << endl;
        } else if (a < 0) {
            a *= -1;
            b *= -1;
            c *= -1;
            d *= -1;
        } else if () {
            double mcd = encuentraMcd(a, b, c, d);

            a /= mcd;
            b /= mcd;
            c /= mcd;
            d /= mcd;
        }
    }
private:
    double a, b, c, d;
};
*/
