#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int a = 30;
	int b = 40;
	
	a += 10; // Tem o mesmo resultado!
    //a = a + 10;
    b *= 10; // Tem o mesmo resultado!
    //b = b * 10;

	cout <<" Resultado: " <<a <<endl;
	cout <<" Resultado: " <<b << endl;

	return 0;
}
