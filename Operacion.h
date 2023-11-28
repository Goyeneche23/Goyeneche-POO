
#ifndef OPERACION_H
#define OPERACION_H

//clase Madre
class OperacionMatematica {
protected:
    double a, b;

public:
    OperacionMatematica(double a, double b) : a(a), b(b) {}
    virtual ~OperacionMatematica() {}

    virtual void realizarOperacion() const = 0;
};

#endif
