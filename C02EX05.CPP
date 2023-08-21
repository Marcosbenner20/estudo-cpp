#include <iostream>
using namespace std;

int main (void)
{
    char NOME[50], NOME02[50];

    cout << "escreva seu nome e sobrenome \n";
    cin.getline(NOME, sizeof(NOME));

    cout << "informe o nome e sobrenome de seu pai\n";
    cin >> NOME02;
    cin.ignore(80, '\n');

    cout << "ola, " << NOME;
    cout << endl;

    cout <<"ola, " <<NOME02;
    cout <<endl;

    cout << "tecle enter para finalizar \n";
    cin.get();
    return 0;

}
