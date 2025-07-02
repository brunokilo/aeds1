#include <iostream>
#include <string>

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

int main() {
    int tamanho = 4;
    FormaGeometrica* formas[tamanho];

    formas[0] = new Retangulo(5, 3);
    formas[1] = new Circulo(2);
    formas[2] = new Retangulo(4, 6);
    formas[3] = new Circulo(3.5);

    for (int i = 0; i < tamanho; i++) {
        cout << "Área da forma " << i + 1 << ": " << formas[i]->calcularArea() << endl;
    }

    return 0;
}
