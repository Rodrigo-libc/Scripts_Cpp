#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int i = 0;
    cout << "Digite um número no intervalo solicitado entre 43 e 74" << endl;
    cin >> i;

    if (i >= 43 && i <= 74) {
        cout << "Obrigado por digitar o número no intervalo solicitado!" << endl;
        if (i == 43 || i == 74) cout << "Você digitou um dos números extremos!" << endl;
    } else {
        cout << "O número digitado não está no intervalo informado!" << endl;
    }

    return 0;
}
