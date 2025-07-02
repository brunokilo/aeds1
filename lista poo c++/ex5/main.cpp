#include <iostream>
#include <string>

using namespace std;

class ContaBancaria{
private:
    int numero;
    string nome;
    float saldo;

public:

    void setNumero(int numero){
        this->numero = numero;
    }

    void setNome(string nome){
        this->nome = nome;
    }

    void setSaldo(int saldo){
        this->saldo = saldo;
    }

    int getNumero(){
        return numero;
    }

    string getNome(){
        return nome;
    }

    float getSaldo(){
        return saldo;
    }

    ContaBancaria(int numero, string nome, float saldo){
        setNumero(numero);
        setNome(nome);
        setSaldo(saldo);
    }

    void depositar(float valorDeposito){
        saldo += valorDeposito;
    }

    void sacar(float valorSaque){
        if(valorSaque > saldo){
            cout << "O valor de saque e maior que o saldo !";
        }
        else{
            saldo -= valorSaque;
        }
    }

    float mostrarSaldo(){
        return saldo;
    }

};
int main()
{
    ContaBancaria conta(1, "joao", 250.20);

    int opcao = 0;

    while(opcao != 4){
    cout << "Digite o que deseja fazer" << endl;
    cout << " 1 - Depositar" << endl;
    cout << " 2 - Sacar" << endl;
    cout << " 3 - Mostrar saldo" << endl;
    cout << " 4 - Finalizar" << endl;
    cout << " Sua opcao: ";
    cin >> opcao;

    if (opcao == 1){
        float valor;
        cout << "digite o valor para depositar: ";
        cin >> valor;
        conta.depositar(valor);
    }
    else if(opcao == 2){
        float valor;
        cout << "digite o valor para sacar: ";
        cin >> valor;
        conta.sacar(valor);
    }
    else if(opcao == 3){
        cout << "Seu saldo e: " << conta.mostrarSaldo() << endl;
    }
};

    return 0;
}
