#include <iostream>

int add(int a, int b){
	
	int result;

	__asm__ ("movl %[input_a], %%eax;" //Move parâmetro (a) para eax
		"addl %[input_b], %%eax;" //Soma parâmetro (b) a eax
		: "=a" (result) //Armazena a soma em result
		: [input_a] "r" (a), [input_b] "r" (b) //Parâmetros sendo passados para as varíaveis...
		);

return result;

}

int main()
{

	int sum = add(7, 5);
	
	std::cout << "Soma: " <<sum << std::endl;

	return 0;
}
