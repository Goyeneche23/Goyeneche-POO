#include <iostream>
#include <cmath>
#include "Ecuaciones.h"
#include "Aritmetica.h"
using namespace std;


int main() {
    int operacion;
    cout << "Seleccione la operacion a resolver: " << endl;
    cout << "1. Resolver Funcion" << endl;
    cout << "2. Operacion Aritmetica" << endl;
    cin >> operacion;

    switch (operacion) {
        case 1: {
            // ... (mismo código que antes)
            break;
        }
        case 2: {
            double a, b;
            int operacionAritmetica;

            cout << "Seleccione la operacion aritmetica a realizar:" << endl;
            cout << "1. Suma" << endl;
            cout << "2. Resta" << endl;
            cout << "3. Multiplicacion" << endl;
            cout << "4. Division" << endl;
            cin >> operacionAritmetica;

            cout << "Ingrese el primer número: ";
            cin >> a;
            cout << "Ingrese el segundo número: ";
            cin >> b;

            OperacionMatematica* operacionMatematicaObj = nullptr;

            switch (operacionAritmetica) {
                case 1:
                    operacionMatematicaObj = new Suma(a, b);
                    break;
                case 2:
                    operacionMatematicaObj = new Resta(a, b);
                    break;
                case 3:
                    operacionMatematicaObj = new Multiplicacion(a, b);
                    break;
                case 4: 
                    operacionMatematicaObj = new Division(a, b);
                    break;
                default:
                    cout << "Operación no válida." << endl;
                    break;
            }

            if (operacionMatematicaObj != nullptr) {
                operacionMatematicaObj->realizarOperacion();
                delete operacionMatematicaObj;
            }

            break;
        }
        default:
            cout << "Opción no válida." << endl;
            break;
    }
    return 0;
}
