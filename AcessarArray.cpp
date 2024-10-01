#include <iostream>

int main(int argc, char *argv[])
{
	
	int array[3][4];   	
	//Array
	//|--|--|--|--|
	//|--|--|--|50|
	//|--|30|20|--|
	     
	array[2][1] = 30; //Linha 3 Coluna 2
	array[1][3] = 50; //Linha 2 Coluna 4
	array[2][2] = 20; //Linha 3 Coluna 3
    
	std::cout << "Acessando o valor: " <<array[2][1] << std::endl;

	std::cout << "Acessando o valor: " <<array[1][3] << std::endl;

	std::cout << "Acessando o valor: " <<array[2][2] << std::endl;


	return 0;
}
