#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int x, y;
	x = 3;
	y = 9;

	cout << "O valor de x e y é: "<< x <<", " <<y <<endl;

	cout << "A soma entre " << x <<" e " <<y <<" é: " << x + y << endl;
	cout << "A subtração entre " << x <<" e " <<y <<" é: " << x - y << endl;
	cout << "A Multiplicação entre " << x <<" e " <<y <<" é: " << x * y << endl;
	cout << "A Divisão entre " << y <<" e " <<x <<" é: " << y / x << endl;

	double divs = y / (x+1.0);
	cout << "A Divisão entre " << x <<" e " <<y <<" é: " <<divs << endl;


	return 0;
}
