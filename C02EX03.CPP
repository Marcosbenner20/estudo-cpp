#include <iostream>

int main (void)
{
    char NOME[20], SOBRENOME[20];

    std::cout << "escreva seu nome e sobrenome \n";
    std::cin >> NOME >> SOBRENOME;
    std::cout << std:: endl;
    std::cin.ignore(80, '\n');

    std::cout << "ola, " << NOME << " " << SOBRENOME;
    std::cout << std:: endl;
    std::cin.get();
    return 0;

}

