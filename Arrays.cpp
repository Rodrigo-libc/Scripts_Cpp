#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int numeros[100];

	numeros[50] = 20;
	numeros[30] = 10;

	cout << "Acessando a posição no Array: " <<numeros[50] <<endl;
	cout << "Acessando a posição no Array: " <<numeros[30] <<endl;
	cout << "Somando as posições: " << numeros[50]+numeros[30] <<endl;

	return 0;
}
