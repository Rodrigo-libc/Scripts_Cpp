#include <iostream>

int main()
{

	int valor1{20},	*ptr{&valor1};

	std::cout << "O valor de valor1: " << valor1 <<'\n'; // 20
	std::cout << "O endereco de &valor1: " <<&valor1 <<'\n'; // Endereço em memória
	std::cout << "O endereco de ptr: " <<ptr <<'\n'; // Mesmo endereco de &valor1
	std::cout << "O endereco de &ptr: " << &ptr << '\n'; // Ocupa outro endereço em memória
	std::cout << "O valor de ptr: " << *ptr <<'\n';// Resultado = 20, pois aponta pra valor1

	*ptr = 35;

	std::cout <<"Alterando o valor de valor1 através do ponteiro: " <<valor1 <<'\n';
	
	return 0;
}
