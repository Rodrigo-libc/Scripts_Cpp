#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    bool a2 = 0;
    bool a3 = 1 == 2;
	//O valor será 1, True, porque a2 é = 0, que signica False. 
    cout << "O valor de a2 é : " << (a2 == false) <<" -> True" << endl;
	//O valor será 0, False, porque em a3, 1 não é igual a 2.
    cout << "Valor de a3 é : " << a3 <<" -> False" << endl;

    return 0;
}
