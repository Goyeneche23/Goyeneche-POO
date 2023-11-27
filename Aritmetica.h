#include <iostream>
#include <cmath>
using namespace std;

// Clase madre OperacionMatematica
class OperacionMatematica {
protected:
    double a, b;

public:
    OperacionMatematica(double a, double b) : a(a), b(b) {}
//operacionMatematica sera redefinida
    virtual ~OperacionMatematica() {}

    virtual void realizarOperacion() const = 0; 
};

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
