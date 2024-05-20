#include <iostream>
//#include <string>

using namespace std;

int main(int argc, char *argv[])
{
	cout << "Digite um número"<<endl;
	int i = 0;
	cin >> i;

	string texto = (i <10) ? "Menor que dez" : "Maior que dez";
	cout << "O valor digitado é: " <<texto <<endl;


	return 0;
}
