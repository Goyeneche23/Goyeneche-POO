#ifndef MEMORIA_H
#define MEMORIA_H

#include <iostream>
#include <string>
#include "OperacionMatematica.h"
#include <vector>
#include <limits>
#include "Suma.h"
#include "Conversion.h"
using namespace std;

class Memoria {
private:
  vector<OperacionMatematica*> historial;
    double resultadoAnterior;

public:
    Memoria() : resultadoAnterior(0) {}

    double getResultadoAnterior() const {
        return resultadoAnterior;
    }

    void agregarOperacion(OperacionMatematica* operacion) {
        historial.push_back(operacion);
    }

    void imprimirHistorial() const {
        if (historial.empty()) {
            cout << "Historial vacío." << endl;
            return;
        }

        cout << "Historial de operaciones:" << endl;
        for (const auto& operacion : historial) {
            operacion->realizarOperacion();
        }
    }

    ~Memoria() {
        for (auto& operacion : historial) {
            delete operacion;
        }
    }
};

#endif // MEMORIA_H
