#ifndef CONVERSION_H
#define CONVERSION_H
#include <iostream>
#include <vector>
#include <limits>
#include <unordered_map>
using namespace std;

class TasaDeCambio {
public:
    double obtenerTasa(const string& monedaOrigen, const string& monedaDestino) const {
        unordered_map<string, unordered_map<string, double>> tasas {
            {"USD", {{"EUR", 0.85}, {"MXN", 20.0}}},
            {"EUR", {{"USD", 1.18}, {"MXN", 23.5}}},
            {"MXN", {{"USD", 0.05}, {"EUR", 0.0425}}}
        };

        auto itOrigen = tasas.find(monedaOrigen);
        if (itOrigen != tasas.end()) {
            auto itDestino = itOrigen->second.find(monedaDestino);
            if (itDestino != itOrigen->second.end()) {
                return itDestino->second;
            }
        }
        cerr << "Tasa de cambio no encontrada una de estas monedas no se encuentra en la lista " << monedaOrigen << " o " << monedaDestino << endl;
        return 1.0; 
    }
};

class ConversorMoneda {
private:
    TasaDeCambio tasaDeCambio;

public:
    double convertir(const string& monedaOrigen, const string& monedaDestino, double cantidad) const {
        double tasa = tasaDeCambio.obtenerTasa(monedaOrigen, monedaDestino);
        return cantidad * tasa;
    }
};

class InfoMoneda {
private:
    unordered_map<string, pair<string, double>> infoMonedas;

public:
    InfoMoneda();

    string obtenerPais(const string& moneda) const;
    double obtenerValor(const string& moneda) const;
    auto begin() const { return infoMonedas.begin(); }
    auto end() const { return infoMonedas.end(); }
};

InfoMoneda::InfoMoneda() {
    infoMonedas["USD"] = make_pair("Estados Unidos", 1.0); 
    infoMonedas["EUR"] = make_pair("Zona Euro", 0.85);        
    infoMonedas["MXN"] = make_pair("México", 20.0);        
}

string InfoMoneda::obtenerPais(const string& moneda) const {
    auto it = infoMonedas.find(moneda);
    if (it != infoMonedas.end()) {
        return it->second.first;
    } else {
        cerr << "Información de país no encontrada para la moneda " << moneda << endl;
        return "Desconocido";
    }
}

double InfoMoneda::obtenerValor(const string& moneda) const {
    auto it = infoMonedas.find(moneda);
    if (it != infoMonedas.end()) {
        return it->second.second;
    } else {
        cerr << "Valor de moneda no encontrado para la moneda " << moneda << endl;
        return 0.0;
    }
}

void mostrarOpcionesMonedas(const InfoMoneda& infoMoneda) {
    cout << "Opciones de monedas disponibles:" << endl;
    for (const auto& par : infoMoneda) {
        cout << "- " << par.first << " (" << infoMoneda.obtenerPais(par.first) << ")" << endl;
    }
}

#endif
