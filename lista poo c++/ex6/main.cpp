#include <iostream>
#include <string>

using namespace std;

class Produto {
private:
    string nome;
    float preco;
    int quantidade;

public:

    void setNome(string nome){
        this->nome = nome;
    }

    void setPreco(float preco){
        this->preco = preco;
    }

    void setQuantidade(int quantidade){
        this->quantidade = quantidade;
    }

    string getNome(){
        return nome;
    }

    float getPreco(){
        return preco;
    }

    int getQuantidade(){
        return quantidade;
    }


    void cadastrarProduto(string nome, double preco, int quantidade) {
        this->nome = nome;
        this->preco = preco;
        this->quantidade = quantidade;
    }

    void mudarPrecoProduto(float novoPreco){
        preco = novoPreco;
    }

    void mudarQuantidadeProduto(int novaQuantidade){
        quantidade = novaQuantidade;
    }

    float calcularValorTotalEmEstoque(){
        return preco * quantidade;
    }

    void exibirProduto() {
        cout << "Nome: " << nome << endl;
        cout << "Preco: R$ " << preco << endl;
        cout << "Quantidade: " << quantidade << endl;
        cout << "Valor em estoque: " << calcularValorTotalEmEstoque() << endl;
    }



};

int main()
{
    Produto produtos[5];
    int opcao = 0;
    int contador = 0;

    do{
        cout << "1 - cadastrar produto" << endl;
        cout << "2 - exibir produtos" << endl;
        cout << "3 - sair" << endl;
        cout << "Opcao: ";
        cin >> opcao;

        if(opcao == 1){
            if(contador < 5){
            string nome;
            float preco;
            int quantidade;

            cout << "nome do produto: ";
            cin >> nome;
            cout << "preco: ";
            cin >> preco;
            cout << "quantidade: ";
            cin >> quantidade;

            produtos[contador].cadastrarProduto(nome, preco, quantidade);
            contador++;
            }
            else{
                cout << "Numero de produtos maior que o contador" << endl;
            }
        }
        else if (opcao == 2){
            if (contador == 0){
                cout << "nao existem produtos cadastrados" << endl;
            }
            else {
                for(int i = 0; i < contador; i++){
                    produtos[i].exibirProduto();
                }
            }
        }

        else if (opcao == 3){
            cout << "saindo, ate a proxima !";
        }

        else {
            cout << "opcao invalida, tente novamente" << endl;
        }

    }while(opcao !=3);
    return 0;
}
