#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    double nota1, nota2, nota3, nota4;

    cout << "Digite a primeira nota do semestre >>> ";
    cin >> nota1;

    cout << "Digite a segunda nota do semestre >>> ";
    cin >> nota2;

    cout << "Digite a terceira nota do semestre >>> ";
    cin >> nota3;

    cout << "Digite a quarta nota do semestre >>> ";
    cin >> nota4;

    double soma = (nota1 + nota2 + nota3 + nota4);
    soma = (soma / 4);

    cout << "A media do semestre foi: " << soma << "\n\n";

    if (soma >= 7) {
        cout << "Parabéns, você foi aprovado!" << endl;
    } else {
        cout << "Você foi reprovado, sinto muito!" << endl;
    }

    return 0;
}
