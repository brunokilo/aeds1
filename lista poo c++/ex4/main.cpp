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
    Produto produto;

    produto.cadastrarProduto("Celular", 600.50, 1);
    produto.mudarPrecoProduto(1000);
    produto.mudarQuantidadeProduto(3);
    produto.calcularValorTotalEmEstoque();
    produto.exibirProduto();
    return 0;
}
