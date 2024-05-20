#include <iostream>
using namespace std;

struct Pessoa{
	string nome;
	int idade;
	string cpf;
};

int main(int argc, char *argv[])
{
	Pessoa p1,p2;
	p1.nome = "Rodrigo";
	p1.idade = 29;
	p1.cpf = "345.558.768-08";

	p2.nome = "Lizandra";
	p2.idade = 26;
	p2.cpf = "345.667.678-05";

	return 0;
}
