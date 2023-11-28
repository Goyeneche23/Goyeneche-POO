// Clase madre OperacionMatematica
class OperacionMatematica {
protected:
    double a, b;

public:
    OperacionMatematica(double a, double b) : a(a), b(b) {}
//operacionMatematica sera redefinida
    virtual ~OperacionMatematica() {}

    virtual void realizarOperacion() const = 0; 
};
