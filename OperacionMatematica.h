#ifndef OPERACIONMATEMATICA_H
#define OPERACIONMATEMATICA_H

#include <iostream>
#include <string>
#include <vector>
#include <limits>
using namespace std;

class OperacionMatematica {
protected:
    double a, b, resultado;

public:
    OperacionMatematica(double a, double b) : a(a), b(b), resultado(0) {}
    virtual ~OperacionMatematica() {}

    double getResultado() const {
        return resultado;
    }

    virtual void realizarOperacion() = 0;
};

#endif
