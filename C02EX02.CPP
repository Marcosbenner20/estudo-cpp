#include <iostream>
using namespace std;

int main (void)
{
    char nome[20];

    cout << "escreva seu nome"; cout << endl;
    cin >> nome;
    cin.ignore(80, '\n');

    cout << "ola" << nome;
    cout << endl;

    cout << "tecle <enter> para finalizar";
    cin.get();

    return 0;
}
