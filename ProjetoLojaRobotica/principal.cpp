#include <iostream>
#include <string>
using namespace std;

// ======== STRUCTS ======== //
struct Produto {
    int id;
    string nome;
    float preco;
};

// ======== FUNÇÕES ======== //

void listarProdutos(Produto produtos[], int qtd) 
{
    cout << endl << "=== LISTA DE PRODUTOS ===" << endl;
    for (int i = 0; i < qtd; i++) 
    {
        cout << produtos[i].id << " - " 
             << produtos[i].nome << " - R$ " 
             << produtos[i].preco << endl;
    }
}

void adicionarAoCarrinho(int id, Produto produtos[], int qtdProdutos, Produto carrinho[], int &qtdCarrinho) 
{
    for (int i = 0; i < qtdProdutos; i++) 
    {
        if (produtos[i].id == id) 
        {
            carrinho[qtdCarrinho] = produtos[i];
            qtdCarrinho++;
            cout << "Produto adicionado ao carrinho!" << endl;
            return;
        }
        else
        {
            cout << "Produto nao encontrado!" << endl;
        }
    }
}

void verCarrinho(Produto carrinho[], int qtdCarrinho) {
    cout << endl << "=== CARRINHO ===" << endl;

    if (qtdCarrinho == 0) {
        cout << "Carrinho vazio." << endl;
        return;
    }

    float total = 0;

    for (int i = 0; i < qtdCarrinho; i++) {
        cout << carrinho[i].nome << " - R$ " << carrinho[i].preco << endl;
        total += carrinho[i].preco;
    }

    cout << "TOTAL: R$ " << total << endl;
}

// ======== MAIN ======== //

int main() {
    string nomeUsuario;

    Produto produtos[100];
    Produto carrinho[100];

    int qtdProdutos = 4;
    int qtdCarrinho = 0;

    // Produtos cadastrados
    produtos[0] = {1, "Curso de Robotica Basica", 120.0};
    produtos[1] = {2, "Kit Arduino Iniciante", 180.0};
    produtos[2] = {3, "Curso Programacao C++", 90.0};
    produtos[3] = {4, "Kit Sensores Educacionais", 150.0};

    cout << "===== LOJA DE ROBOTICA EDUCACIONAL =====" << endl;
    cout << "Digite seu nome: ";
    getline(cin, nomeUsuario);

    int opc = 0;

    while (opc != 4) {
        cout << endl << "===== MENU =====" << endl;
        cout << "1 - Listar produtos" << endl;
        cout << "2 - Adicionar ao carrinho" << endl;
        cout << "3 - Ver carrinho" << endl;
        cout << "4 - Sair" << endl;
        cout << "Escolha: ";
        cin >> opc;

        if (opc == 1) {
            listarProdutos(produtos, qtdProdutos);

        } else if (opc == 2) {
            int id;
            cout << "Digite o ID do produto: ";
            cin >> id;
            adicionarAoCarrinho(id, produtos, qtdProdutos, carrinho, qtdCarrinho);

        } else if (opc == 3) {
            verCarrinho(carrinho, qtdCarrinho);

        } else if (opc == 4) {
            cout << "Saindo da loja, tchau " << nomeUsuario << "!" << endl;

        } else {
            cout << "Opcao invalida!" << endl;
        }
    }

    return 0;
}
