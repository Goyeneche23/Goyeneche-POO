#include <iostream>
#include "OperacionMatematica.h"
#include <vector>
#include <limits>
#include <unordered_map>
#include "Conversion.h"
#include "Memoria.h"
#include "Suma.h"
#include "Resta.h"
#include "Multiplicacion.h"
#include "Division.h"
using namespace std;

int main() {
    Memoria memoria;
    char respuesta;

    do {
        int operacion;
        cout << "Seleccione la operacion a realizar: " << endl;
        cout << "1. Suma\n2. Resta\n3. Multiplicacion\n4. Division\n5. Conversor Moneda\n6. Mostrar Historial\n7. Salir\n";
        cin >> operacion;

        if ( operacion < 1 || operacion > 7) {
            cout << "Error: Seleccione una opción válida." << endl;
            continue;
        }

        if (operacion == 7) {
            cout << "Saliendo del programa..." << endl;
            break;
        }

        if (operacion == 6) {
            memoria.imprimirHistorial();
            continue;
        }

        double a, b;

        if (operacion != 5) {
            if (memoria.getResultadoAnterior() != 0) {
                cout << "¿Desea usar el resultado anterior? (ans) (s/n): ";
                cin >> respuesta;
                a = (respuesta == 's' || respuesta == 'S') ? memoria.getResultadoAnterior() : 0;
            } else {
                cout << "Ingrese el primer número: ";
                cin >> a;
            }

            if (cin.fail()) {
                cout << "Error: Ingrese un número válido." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }

            cout << "Ingrese el segundo número: ";
            cin >> b;

            if (cin.fail()) {
                cout << "Error: Ingrese un número válido." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }
        }

        OperacionMatematica* operacionMatematicaObj = nullptr;

        switch (operacion) {
            case 1: operacionMatematicaObj = new Suma(a, b); break;
            case 2: operacionMatematicaObj = new Resta(a, b); break;
            case 3: operacionMatematicaObj = new Multiplicacion(a, b); break;
            case 4: operacionMatematicaObj = new Division(a, b); break;
            case 5: {
                ConversorMoneda conversor;
                InfoMoneda infoMoneda;

                mostrarOpcionesMonedas(infoMoneda);

                string monedaOrigen, monedaDestino;
                double cantidad;

                cout << "Ingrese la moneda de origen: ";
                cin >> monedaOrigen;

                cout << "Ingrese la moneda de destino: ";
                cin >> monedaDestino;

                cout << "Ingrese la cantidad a convertir: ";
                cin >> cantidad;

                double resultado = conversor.convertir(monedaOrigen, monedaDestino, cantidad);

                cout << cantidad << " " << monedaOrigen << " equivale a " << resultado << " " << monedaDestino << endl;

                cout << "Información adicional:" << endl;
                cout << " - País de origen: " << infoMoneda.obtenerPais(monedaOrigen) << endl;
                cout << " - Valor en ese país: " << infoMoneda.obtenerValor(monedaOrigen) << endl;
                cout << " - País de destino: " << infoMoneda.obtenerPais(monedaDestino) << endl;
                cout << " - Valor en ese país: " << infoMoneda.obtenerValor(monedaDestino) << endl;
                break;
            }
            default: cout << "Operación no válida." << endl; continue;
        }

        operacionMatematicaObj->realizarOperacion();
        if (operacion != 5) {
            memoria.agregarOperacion(operacionMatematicaObj);
        }

        cout << "Desea realizar otra operacion? (s/n): ";
        cin >> respuesta;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    } while (respuesta == 's' || respuesta == 'S');

    return 0;
}
