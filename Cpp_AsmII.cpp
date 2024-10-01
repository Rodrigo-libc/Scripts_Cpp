#include <iostream>

int add(){
	
	int result;

	__asm__ ("movl $5, %%eax;"
			"movl $3,%%ebx;"
			"addl %%ebx, %%eax;" :"=a" (result));

return result;

}

int main()
{

	int sum = add();
	
	std::cout << "Soma: " <<sum << std::endl;

	return 0;
}
