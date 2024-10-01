#include <iostream>

int add(){
	
	int result;

	__asm__ ("movl $5, %%eax;" //Move 5 pra eax
		"movl $3,%%ebx;" //Move 3 pra ebx
		"addl %%ebx, %%eax;" :"=a" (result)); //Soma ebx + eax eax= 8; Armazena o resultado em result.

return result;

}

int main()
{

	int sum = add();
	
	std::cout << "Soma: " <<sum << std::endl;

	return 0;
}
