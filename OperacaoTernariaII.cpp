#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{

	cout <<"Digite o mês do trimestre: " <<endl;
	int num1 = 0;
	cin >> num1;

	string mes = (num1 == 1) ? "Janeiro":
				 (num1 == 2) ? "Fevereiro":
				 (num1 == 3) ? "Março":
				 "O valor digitado não está no intervalo entre 1 e 3";
		cout <<mes<<endl;




	return 0;
}
