#include <iostream>
#include <cmath>

using namespace std;

class ecuacionLineal {
  private:
      double a, b;
  public:
      ecuacionLineal(double a, double b) : a(a), b(b) {}
      void solucion() const {
          if (a == 0) {
              if (b == 0) {
                  cout << "soluciones infinitas." << endl;
              } 
              else {
                  cout << "no hay solución." << endl;
              }
          } 
          else {
              double solucion = -b / a;
              cout << "Solución: x = " << solucion << endl;
          }
      }
  };

class ecuacionCuadratica {
  public:
      ecuacionCuadratica(double a, double b, double c) : a(a), b(b), c(c) {}
  };

int main() {
    int opcion;
    double a, b;

    cout << "Seleccione el tipo de ecuación a resolver:" << endl;
    cout << "1. Ecuación Lineal" << endl;
    cout << "2. Ecuación Cuadrática" << endl;
    cout << "Ingrese el número correspondiente a la opción: ";
    cin >> opcion;

    if (opcion == 1) {
        cout << "Ingrese el coeficiente 'a' de la ecuación lineal: ";
        cin >> a;
        cout << "Ingrese el coeficiente 'b' de la ecuación lineal: ";
        cin >> b;

        ecuacionLineal ecuacionLineal(a, b);
        ecuacionLineal.solucion();
    }
    if else(opcion == 2) { 
}
