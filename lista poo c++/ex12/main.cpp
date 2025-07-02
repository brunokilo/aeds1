#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class FormaGeometrica {
public:

    virtual float calcularArea() = 0;
};

class Retangulo : public FormaGeometrica {
private:
    float base;
    float altura;

public:
    Retangulo(float base, float altura) {
        this->base = base;
        this->altura = altura;
    }

    float calcularArea() override {
        return base * altura;
    }
};


class Circulo : public FormaGeometrica {
private:
    float raio;

public:
    Circulo(float raio) {
        this->raio = raio;
    }

    float calcularArea() override {
        return 3.14 * raio * raio;
    }
};



int main()
{
    Retangulo retangulo(5, 3);
    Circulo circulo(2);

    cout << "Area do retangulo: " << retangulo.calcularArea() << endl;
    cout << "Area do circulo: " << circulo.calcularArea() << endl;

    return 0;
}
