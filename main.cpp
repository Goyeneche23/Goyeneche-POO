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
              int opcionEcuacion;
              double a, b, c, d;

              cout << "Seleccione el tipo de ecuación a resolver:" << endl;
              cout << "1. Ecuación Lineal" << endl;
              cout << "2. Ecuación Cuadrática" << endl;
              cout << "3. Ecuación Cubica" << endl;
              cout << "Ingrese el número correspondiente a la opción: ";
              cin >> opcionEcuacion;

              if (opcionEcuacion == 1) {
                  cout << "Ingrese el coeficiente 'a' de la ecuación lineal: ";
                  cin >> a;
                  cout << "Ingrese el coeficiente 'b' de la ecuación lineal: ";
                  cin >> b;

                  EcuacionLineal ecuacionLineal(a, b);
                  ecuacionLineal.realizarOperacion();
              } 
              else if (opcionEcuacion == 2) {
                  cout << "Ingrese el coeficiente 'a' de la ecuación cuadrática: ";
                  cin >> a;
                  cout << "Ingrese el coeficiente 'b' de la ecuación cuadrática: ";
                  cin >> b;
                  cout << "Ingrese el coeficiente 'c' de la ecuación cuadrática: ";
                  cin >> c;

                  EcuacionCuadratica ecuacionCuadratica(a, b, c);
                  ecuacionCuadratica.realizarOperacion();
              } 
              else if (opcionEcuacion == 3) { 
                  cout << "Ingrese el coeficiente 'a' de la ecuación cubica: ";
                  cin >> a;
                  cout << "Ingrese el coeficiente 'b' de la ecuación cubica: ";
                  cin >> b;
                  cout << "Ingrese el coeficiente 'c' de la ecuación cubica: ";
                  cin >> c;
                  cout << "Ingrese el coeficiente 'd' de la ecuación cubica: ";
                  cin >> d;

                  // EcuacionCubica ecuacionCubica(a, b, c, d);
                  // ecuacionCubica.reducirEcuacion();
                  // ecuacionCubica.metodoCardano();
              }
              else {
                  cout << "Opción no válida." << endl;
              }
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
