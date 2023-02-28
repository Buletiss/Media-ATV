#include <iostream>
using namespace std;
int main()
{

    string nome = "";
    cout << "Digite seu nome:";
    cin >> nome;
    int p1;
    cout << "\nDigite a nota da P1:";
    cin >> p1;
    int p2;
    cout << "\nDigite a nota da P2:";
    cin >> p2;
    float media;
    media = (p1 + p2) / 2;
    if (media >= 6)
    {
        cout << "Aprovado";
    }
    else
    {
        cout << "Reprovado";
    }
};