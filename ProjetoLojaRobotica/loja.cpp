#include <iostream>
#include "carrinho.cpp"
using namespace std;

struct loja
{
    Produto produtos[5] = 
    {
        {"Kit Robotica Baisco", 120},
        {"Kit Sensores", 55.5},
        {"Kit Arduinos", 350.5},
        {"Curso Montagem de Robos", 300},
        {"Curso Programacao para Robos", 240}
    };

    Carrinho carrinho;

    void iniciar()
    {
        int escolha, quantidade;

        cout<<"===== LOJA DE ROBÓTICA EDUCACIONAL ====="<<end;
        
    }
};
