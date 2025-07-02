#include <iostream>
#include <string>

using namespace std;


class Cliente {
public:
    string nome;
    string cpf;
};

class Conta {
public:
    int numero;
    double saldo;
    Cliente cliente;

    Conta() {
        saldo = 0.0;
    }

    void depositar(double valor) {
        saldo += valor;
    }

    virtual void sacar(double valor) = 0;

    void exibirSaldo() {
        cout << "Saldo da conta " << numero << ": R$ " << saldo << endl;
    }

    void exibirDados() {
        cout << "Nome: " << cliente.nome << endl;
        cout << "CPF: " << cliente.cpf << endl;
        cout << "Numero da conta: " << numero << endl;
        cout << "Saldo: R$ " << saldo << endl;
    }
};


class ContaCorrente : public Conta {
public:
    void sacar(double valor) override {
        double taxa = valor * 0.05;
        double total = valor + taxa;

        if (total > saldo) {
            cout << "Saldo insuficiente para saque com taxa de 5%!" << endl;
        } else {
            saldo -= total;
            cout << "Saque realizado com sucesso (5% de taxa aplicada)." << endl;
        }
    }
};


class ContaPoupanca : public Conta {
public:
    void sacar(double valor) override {
        if (valor > saldo) {
            cout << "Saldo insuficiente!" << endl;
        } else {
            saldo -= valor;
            cout << "Saque realizado com sucesso." << endl;
        }
    }

    void aplicarRendimento() {
        saldo += saldo * 0.02;
        cout << "Rendimento de 2% aplicado!" << endl;
    }
};


int main() {
    int n = 10;
    Conta* contas[n];
    int totalContas = 0;
    int opcao;
    int numeroConta = 1;

    do {
        cout << "\nBem vindo ao seu banco ! " << endl;
        cout << "1 - Criar Conta Corrente" << endl;
        cout << "2 - Criar Conta Poupanca" << endl;
        cout << "3 - Depositar" << endl;
        cout << "4 - Sacar" << endl;
        cout << "5 - Aplicar Rendimento (Poupanca)" << endl;
        cout << "6 - Listar Contas" << endl;
        cout << "7 - Sair" << endl;
        cout << "Opcao: ";
        cin >> opcao;

        if (opcao == 1 || opcao == 2) {
            if (totalContas >= n) {
                cout << "Limite de contas atingido!" << endl;
                continue;
            }

            string nome, cpf;
            cout << "Nome: ";
            cin >> nome;
            cout << "CPF: ";
            cin >> cpf;

            Cliente c;
            c.nome = nome;
            c.cpf = cpf;

            if (opcao == 1) {
                contas[totalContas] = new ContaCorrente();
            } else {
                contas[totalContas] = new ContaPoupanca();
            }

            contas[totalContas]->numero = numeroConta++;
            contas[totalContas]->cliente = c;
            totalContas++;

            cout << "Conta criada com sucesso!" << endl;
        }

        else if (opcao == 3 || opcao == 4) {
            int num;
            double valor;
            cout << "Numero da conta: ";
            cin >> num;
            cout << "Valor: ";
            cin >> valor;

            bool achou = false;
            for (int i = 0; i < totalContas; i++) {
                if (contas[i]->numero == num) {
                    if (opcao == 3) {
                        contas[i]->depositar(valor);
                        cout << "Deposito realizado!" << endl;
                    } else {
                        contas[i]->sacar(valor);
                    }
                    achou = true;
                    break;
                }
            }
            if (!achou) {
                cout << "Conta nao encontrada!" << endl;
            }
        }

        else if (opcao == 5) {
            for (int i = 0; i < totalContas; i++) {
                ContaPoupanca* cp = dynamic_cast<ContaPoupanca*>(contas[i]);
                if (cp != nullptr) {
                    cp->aplicarRendimento();
                }
            }
        }

        else if (opcao == 6) {
            for (int i = 0; i < totalContas; i++) {
                contas[i]->exibirDados();
                cout << "-----------------" << endl;
            }
        }

    } while (opcao != 7);

    cout << "Fim do programa." << endl;
    return 0;
}
