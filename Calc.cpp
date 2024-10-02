#include <iostream>

int main(int argc, char *argv[])
{
	int num1, num2, soma, sub, multi, div;

	std::cout << "Seja bem vindo a nossa primeira calculadora!" <<std::endl;
	std::cout <<"Digite o primeiro número" <<std::endl;

	std::cin >> num1;

	std::cout <<"Digite o segundo número!" <<std::endl;

	std::cin >> num2;

	soma = num1 + num2;
	sub = num1 - num2;
	multi = num1 * num2;
	div = num1 / num2;

	std::cout << "A soma é = " <<soma <<std::endl;
	std::cout << "A subtração é = " <<sub <<std::endl;
	std::cout << "A multiplicação é = " <<multi <<std::endl;
	std::cout << "A Divisão é " <<div <<std::endl;

	return 0;
}
