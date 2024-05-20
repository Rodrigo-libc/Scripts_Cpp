#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    cout << "Informe um número: " << endl;

    int num1 = 0;
	int num2 = 0;

    cin >> num1;

	cout << "Informe outro número: "<<endl;

	cin >> num2;

    cout << "A soma de " << num1 << " e " <<num2 <<" é: "
		<< num1+num2 << endl;

    return 0;
}
