#include <iostream>
#include <string>

using namespace std;

class Pessoa {
private:
    string nome;
    int idade;

public:

    string getNome(){
    return nome;
    }

    int getIdade(){
    return idade;
    }

    void setNome(string nome){
        this->nome = nome;
    }

    void setIdade(int idade){
        this->idade = idade;
    }

    //Construtor

    Pessoa(string nome, int idade){
        setNome(nome);
        setIdade(idade);
    }


    void exibirDados(){
        cout << "Nome: " << getNome() << endl;
        cout << "Idade: " << getIdade();
    }


};

int main()
{
    Pessoa pessoa("Joao", 20);
    pessoa.exibirDados();

    return 0;
}
