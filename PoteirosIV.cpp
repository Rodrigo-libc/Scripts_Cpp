#include <iostream>
#include <string>

struct Pessoa{
	
	std::string nome;
	int idade;
};

int main()
{
	
	Pessoa pessoa;

	Pessoa *ptr;

	ptr = &pessoa;

	ptr->nome = "Rodrigo";
	ptr->idade = 29;

	std::cout << "Nome: " <<ptr->nome <<'\n';
	std::cout <<"Idade: " <<ptr->idade <<'\n';

	return 0;
}
