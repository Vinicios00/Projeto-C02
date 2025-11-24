#include <iostream>
#include "Produto.cpp"
using namespace std;

struct Carrinho
{
    Produto itens[10];
    int qtd = 0;

    void adicionarProduto(Produto p, int quantidade)
    {
        if (qtd < 10)
        {
            p.precoProduto *= quantidade;
            itens[qtd] = p;
            qtd++;
            cout<<"Produto adicionado ao carrinho!"<<endl;
        }
        else
        {
            cout<<"Carrinho cheio!"<<endl;
        }
    }

    void mostrarResumo()
    {
        float total = 0;
        cout<<"======= RESUMO DA COMPRA ======="<<endl;

        if(qtd == 0)
        {
            cout<<"Nemhum produto comprado."<<endl;
        }
        else
        { 
            for(int i = 0; i<qtd; i++)
            {
                cout<<"- "<<itens[i].nomeProduto<<endl;
                cout<<"- Total: R$ "<<itens[i].precoProduto<<endl;
                total += itens[i].precoProduto;
            }

            cout<<"Valor total da compra: R$ "<<total<<endl;
        }
    }
};


