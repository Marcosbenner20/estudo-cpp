#include <iostream>
#include <clocale>
#include <cmath>

using namespace std;

int main (void)
{
    setlocale(LC_ALL, "pt_BR.utf8");

    float A,B,C,D,X,X1,X2;

    cout << "escreva os valores de A, B e C para equação do segundo grau" <<endl <<endl;
    cin >> A >> B >> C;

    if(A==0 && B==0 && C==0)
    {
        cout << "Não é uma equação completa do segundo grau";
    }
    else
    {
        D = pow(B,2) - 4 * A * C;

        if (D == 0)
            X = (-B) / (2*A);
            cout << "solução é: " << X;

        if (D > 0)
            {
            X1 = (-B + sqrt(D)) / (2 * A);
            X2 = (-B - sqrt(D)) / (2 * A);

            cout <<"as soluções dessa equação:\n" << "X'" << X1 <<endl <<"X''" << X2 <<endl <<endl;
            }
            else
            cout <<"Não existem raizes reais\n";
    }

    cout << "Tecle <enter> para finalizar";
    cin.get();
    return 0;
}

