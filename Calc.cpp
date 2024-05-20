#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int num1, num2, soma, sub, multi, div;

	cout << "Seja bem vindo a nossa primeira calculadora!" <<endl;
	cout <<"Digite o primeiro número" <<endl;

	cin >> num1;

	cout <<"Digite o segundo número!" <<endl;

	cin >> num2;

	soma = num1 + num2;
	sub = num1 - num2;
	multi = num1 * num2;
	div = num1 / num2;

	cout << "A soma é = " <<num1 + num2 <<endl;
	cout << "A subtração é = " <<num1 - num2 <<endl;
	cout << "A multiplicação é = " <<num1 * num2 <<endl;
	cout << "A Divisão é " <<num1 / num2 <<endl;


	return 0;
}
