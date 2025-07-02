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

    void exibirDados(){
        cout << "nome: " << nome << endl;
        cout << "salario: " << salario << endl;
    }
};

class Gerente : public Funcionario {
private:
    string departamento;

public:

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

    Gerente gerente;

    gerente.setNome("Joao");
    gerente.setSalario(5000);
    gerente.setDepartamento("RH");

    gerente.exibirDados();
    return 0;
}
