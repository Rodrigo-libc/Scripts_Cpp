#include <iostream>

int main(){

int valor1 {30}, *ptr{&valor1}, **ptr2{&ptr};

	std::cout << " O valor de valor1: " << valor1 <<'\n';
	std::cout << " Endereco de valor1: " <<&valor1 <<'\n';
	std::cout << " Endereco de ptr: " <<ptr <<'\n';
	std::cout << " Endereco de &ptr: " <<&ptr <<'\n';
	std::cout << " Endereco de ptr2: " <<ptr2 <<'\n';
	std::cout << " O endereco de &ptr2: " <<&ptr2 <<'\n';

	**ptr2 = 50;

	std::cout << " Alterando o valor da variável pelo ponteiro que aponta pro ponteiro: " 
			  <<valor1 <<'\n'; //50

	
	std::cout << " Valor do ponteiro que aponta pro ponteiro: " <<**ptr2 <<'\n'; // 50 
	

	return 0;
}
