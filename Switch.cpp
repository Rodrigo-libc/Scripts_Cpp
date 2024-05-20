#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	char c;
		
		cout << "Digite uma letra de A a C" <<endl;
		cin >> c;

		switch (c) {
			case'a':
			case'A':
			cout << "Você digitou a ou A" <<endl;
				break;
			case 'b':
			case 'B':
			cout << "Você digitou b ou B" <<endl; 
				break;

			case 'c':
			case 'C':
				cout << "Você digitou c ou C" <<endl;
				break;

			default:
				cout << "Você digitou um valor incorreto!" <<endl;

		}

	return 0;

}
