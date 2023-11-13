#include <iostream>
#include <cmath>
using namespace std;

class EcuacionLineal {
public:
    EcuacionLineal(double a, double b) : a(a), b(b) {}
    void resolver() const {
        if (a == 0) {
            if (b == 0) {
                cout << "Infinitas soluciones." << endl;
            } else {
                cout << "No hay solución." << endl;
            }
        } else {
            double solucion = -b / a;
            cout << "x = " << solucion << endl;
        }
    }

private:
    double a, b;
};

class EcuacionCuadratica {
public:
    EcuacionCuadratica(double a, double b, double c) : a(a), b(b), c(c) {}
    void resolver() const {

        if ( (b * b - 4 * a * c ) > 0) {
            double solucion1 = (-b + sqrt( b * b - 4 * a * c)) / (2 * a);
            double solucion2 = (-b - sqrt( b * b - 4 * a * c)) / (2 * a);
            cout << "x1 = " << solucion1 << endl << "x2 = " << solucion2 << endl;
        } else if ( (b * b - 4 * a * c) == 0) {
            double solucion = -b / (2 * a);
            cout << "x = " << solucion << endl;
        } else {
            cout << "No solucion." << endl;
        }
    }

private:
    double a, b, c;
};
/*
class ecuacionCubica {
    public:
    ecuacionCubica(double a, double b, double c, double d):
    void solcucion()const {

    }

}
*/
int main() {
    int opcion;
    double a, b, c;

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

        EcuacionLineal ecuacionLineal(a, b);
        ecuacionLineal.resolver();
    } else if (opcion == 2) {
        cout << "Ingrese el coeficiente 'a' de la ecuación cuadrática: ";
        cin >> a;
        cout << "Ingrese el coeficiente 'b' de la ecuación cuadrática: ";
        cin >> b;
        cout << "Ingrese el coeficiente 'c' de la ecuación cuadrática: ";
        cin >> c;

        EcuacionCuadratica ecuacionCuadratica(a, b, c);
        ecuacionCuadratica.resolver();
    } else {
        cout << "Opción no válida." << endl;
    }

    return 0;
}
