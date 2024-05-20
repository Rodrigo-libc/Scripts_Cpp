#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	cout << "Digite a tabuada desejada" <<endl;

	int valor1 = 0;
	cin >> valor1;

		cout <<"Resultado da tabuada!"<<"\n";	

	for (int valor2 = 1; valor2 <= 10; valor2++) {
		cout << valor2 <<" x " 
			 << valor1 <<" = " 
			 <<valor2 * valor1 <<"\n";	
	}
	return 0;
}
