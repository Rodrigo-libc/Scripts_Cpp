#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int a = 5, b = 10;

	if (a == b)
		cout<< "Não vai imprimir nada, o resultado é false." <<endl;
	
	if (a != b)
		cout<< "Sim, (a) é diferente de (b)." <<endl;

	return 0;
}
