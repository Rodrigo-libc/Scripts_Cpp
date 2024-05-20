#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int a = 0;
	cout << "Digite um número: " <<endl;
	cin >> a;

	if (a == 50) 
		cout << "Essa condição pertence ao bloco IF " <<endl;
	else 
		cout << "Essa condição pertence ao bloco ELSE" <<endl;
		cout << "______\n"; //Também será impresa, ainda que o resultado
						 //seja verdadeiro, por não conter um bloco
						 //que delimita a instrução...{}




	return 0;
}
