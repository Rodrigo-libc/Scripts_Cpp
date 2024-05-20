#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	float total = 0;
	int notaNum = 0;
		
		cout << "Digite o número de notas: " <<endl;
		cin >> notaNum;
	
	float notas[notaNum];

	for (int i = 0; i < notaNum; i++) {
		cout << "Digite a nota: " << i+1 << endl;
		cin >> notas[i];
		total += notas[i];
	}
		cout << "O valor TOTAL é: " << total <<endl;	

	return 0;
}
