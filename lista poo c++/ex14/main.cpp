#include <iostream>
#include <string>

using namespace std;


class Pessoa {
protected:
    string nome;

public:
    Pessoa(string nome) {
        this->nome = nome;
    }

    virtual void exibirDados() {
        cout << "Nome: " << nome << endl;
    }

};


class Aluno : public Pessoa {
private:
    string matricula;
    string curso;

public:
    Aluno(string nome, string matricula, string curso)
        : Pessoa(nome) {
        this->matricula = matricula;
        this->curso = curso;
    }

    void exibirDados() override {
        cout << " Aluno " << endl;
        Pessoa::exibirDados();
        cout << "Matricula: " << matricula << endl;
        cout << "Curso: " << curso << endl;
    }
};


class Professor : public Pessoa {
private:
    string disciplina;
    int cargaHoraria;

public:
    Professor(string nome, string disciplina, int cargaHoraria)
        : Pessoa(nome) {
        this->disciplina = disciplina;
        this->cargaHoraria = cargaHoraria;
    }

    void exibirDados() override {
        cout << " Professor " << endl;
        Pessoa::exibirDados();
        cout << "Disciplina: " << disciplina << endl;
        cout << "Carga horaria: " << cargaHoraria << "h" << endl;
    }
};

int main() {

    Pessoa* pessoa[3];


    pessoa[0] = new Aluno("joao", "1", "Engenharia");
    pessoa[1] = new Professor("pedro", "Matematica", 20);
    pessoa[2] = new Aluno("maria", "1", "Direito");


    for (int i = 0; i < 3; i++) {
        pessoa[i]->exibirDados();
        cout << endl;
    }

    return 0;
}
