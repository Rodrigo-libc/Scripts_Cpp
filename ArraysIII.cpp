#include <cstdio>
#include <iostream>

int main(int argc, char *argv[])
{

	int valores[5];

		std::cout << "Digite os valores: " << std::endl;

		for (int i = 0; i <= 4 ; i++) {
		
			std::cout << "Digite o valor: " <<i+1 << std::endl;
			std::cin >> valores[i];
		}

		std::cout << "\n" << std::endl;

		for (int j = 0; j <= 4; j++) {
		
			std::cout <<j+1 <<")Valores do array: " <<valores[j] << std::endl;
		}


	return 0;
}
