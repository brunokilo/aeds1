#include <iostream>
#include <string>

using namespace std;

class Pessoa {
public:

    string nome;
    int idade;

};

int main()
{
    Pessoa pessoa;
    pessoa.nome = "joao";
    pessoa.idade = 20;

    cout << pessoa.nome << endl;
    cout << pessoa.idade << endl;
    return 0;
}
