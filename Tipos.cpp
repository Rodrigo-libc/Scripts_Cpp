#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int a = 0;
	short int b = 0;
	long int c = 0;
	
	int a2 = 0;
	signed int b2 = -10;
	unsigned int c2 = -10;

	cout <<"Valor de a é: " <<a <<" " <<sizeof(a) <<"Bytes" <<endl;
	cout <<"Valor de b é: " <<b <<" " <<sizeof(b) <<"Bytes" <<endl;
	cout <<"Valor de c é: " <<c <<" " <<sizeof(c) <<"Bytes" <<endl;
	cout<<endl;
	cout <<"Valor de a2 é: " <<a2 <<" " <<sizeof(a) <<"Bytes" <<endl;
	cout <<"Valor de b2 é: " <<b2 <<" " <<sizeof(a) <<"Bytes" <<endl;
	cout <<"Valor de c2 é: " <<c2 <<" " <<sizeof(a) <<"Bytes" <<endl;


	return 0;
}
