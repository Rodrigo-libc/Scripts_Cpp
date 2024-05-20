#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int Numeros[3][4]; // Declaração sem inicialização

    // Atribuição de um valor específico
    Numeros[0][1] = 30;

    // Acessando valores
    cout << "Acessando o valor= " << Numeros[0][1] << endl;

    // Acessando valores que não foram inicializados explicitamente
    cout << "Acessando o valor= " << Numeros[0][3] << endl;
    cout << "Acessando o valor= " << Numeros[1][0] << endl;
    cout << "Acessando o valor= " << Numeros[2][2] << endl;

    return 0;
}
