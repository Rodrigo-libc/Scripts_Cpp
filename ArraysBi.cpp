#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int Numeros[3][4]={{1,2,3,4},
			   {5,6,7,8},
			   {9,10,11,12}
			};

	cout <<"Acessando elemento da linha 2 coluna 3 -> " 
		 <<Numeros[1][2] <<endl;

	return 0;
}
