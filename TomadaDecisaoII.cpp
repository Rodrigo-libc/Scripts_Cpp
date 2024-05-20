#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	cout<< "Digite um número: " <<endl;
	
	int valor = 0;
	cin >> valor;

	if (valor > 20) {
		cout<< "O valor é maior que 20" <<endl;
	} else {
		cout << "O valor é menor que 20" <<endl;
	}


	return 0;
}
