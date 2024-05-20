#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int Numeros[3][3];

	for (int i =0; i < 3; i++) {
		for (int j = 0; j < 3;j++) {
			Numeros[i][j]=10;
			cout << Numeros[i][j] <<" ";
		}
		cout <<endl;
	}


	return 0;
}
