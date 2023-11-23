#include <iostream>
#include <cmath>
using namespace std;

class Aritmetica{
public:
    Aritmetica(double a, double b) : a(a), b(b) {}
    
    void suma() const {
        double solucion;
        solucion = a + b;
        cout << " solucion: " << solucion << endl;
    }
    void resta() const {
        double solucion;
        solucion = a - b;
        cout << " solucion: " << solucion << endl;
    }
    void multiplicacion() const { 
        double solucion;
        solucion = a * b;
        cout << " solucion: " << solucion << endl;
    }
    void division() const {
        double solucion;
        solucion = a / b;
        cout << " solucion: " << solucion << endl;
    }

private: 
    double a, b;
};
