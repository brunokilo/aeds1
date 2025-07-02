#include <iostream>
#include <string>

using namespace std;

class Funcionario{
protected:
    string nome;
    float salario;

public:

    void setNome(string nome){
        this->nome = nome;
    }

    void setSalario(float salario){
        this->salario = salario;
    }

    string getNome(){
        return nome;
    }

    float getSalario(){
        return salario;
    }

    Funcionario(string nome, float salario){
        this->nome = nome;
        this->salario = salario;
    }

    void exibirDados(){
        cout << "nome: " << nome << endl;
        cout << "salario: " << salario << endl;
    }
};

class Gerente : public Funcionario {
private:
    string departamento;

public:

    Gerente(string nome, float salario, string departamento)
        : Funcionario (nome, salario)
    {
        this ->departamento = departamento;
    }

    void setDepartamento(string departamento){
        this->departamento = departamento;
    }

    string getDepartamento(){
        return departamento;
    }

    void exibirDados(){
        Funcionario::exibirDados();
        cout << "Departamento: " << departamento << endl;
    }
};

int main()
{

    Gerente gerente("joao", 2000, "RH");

    gerente.exibirDados();
    return 0;
}
