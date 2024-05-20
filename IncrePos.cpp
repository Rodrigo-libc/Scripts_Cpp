#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int a = 0;
	int a2 = 0;
	
	cout << "Incrementação dos valores!" <<endl;

	cout << "Pos = " << ++a <<endl;
	cout << "Pre = " << a2++ <<endl; //Será incrementado na próxima linha.
	cout << "Pos = " << a2 <<endl;
	a = 0;
	a2 = 0;
	
	cout<< "Decrementação dos valores" <<endl;

	cout << "Pos = " << --a <<endl;
	cout << "Pre = " << a2-- <<endl; //Será decrementado na próxima linha.
	cout << "Pos = " << a2 <<endl;





	return 0;
}
