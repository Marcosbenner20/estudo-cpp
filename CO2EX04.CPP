#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main (void)
{
    char nome[40];

    cout << "escreva seu nome"; cout << endl;
    cin >> nome;
    cin.ignore(80, '\n');

    cout <<"ola" << endl; cout <<nome;
    cout << endl;

    cout << "tecle enter para finalizar";
    cin.get();
    return 0;
}
