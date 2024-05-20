#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    cout << "Digite o valor do laço que deseja executar: 1 a 3" << endl;
    int a = 0;
    cin >> a;

    if (a == 1) {
        for (int i = 1; i <= 5; i++) { 
			cout << "O valor do laço FOR é: " << i << endl; }

    } else {
        if (a == 2) {
            int i2 = 0;
            while (i2 < 5) {
                i2++;
                cout << "O valor do laço WHILE é: " << i2 << endl;
            }
        } else {
            if (a == 3) {
                int i3 = 0;
                do {
                    i3++;
                    cout << "O valor do laço DO WHILE é: " << i3 << endl;

                } while (i3 < 5);
            }
        }
    }

    return 0;
}
