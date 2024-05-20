#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    int varInt = 100;
    char C = 'r';
    double pflutuante = 5.99;

    cout << "O valor da variavel varInt é " << varInt << endl;
    cout << "O valor da variavel C é " << C << endl;
    cout << "O valor da variavel pflutuante é " << pflutuante << endl;
	cout <<endl;
	cout << "Tamanho da variavel varInt " <<sizeof(varInt) <<"Bytes" <<endl;
	cout <<"Tamanho da variavel C " <<sizeof(C) <<"Byte" <<endl;
	cout <<"Tamanho da variavel pflutuante " <<sizeof(pflutuante) <<"Bytes" <<endl;

    return 0;
}
