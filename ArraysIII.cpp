#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	string valores[5];
	
		cout <<"-Digite os valores-" <<endl;

for (int i = 0; i <= 4; i++){
		cout << "Digite o valor: " <<i+1 <<endl;
		cin >> valores[i];
}
	cout <<"\n";

for (int j =0; j <= 4; j++)
		cout <<j+1 <<":valor do Array: " <<valores[j] <<endl;

	return 0;
}
