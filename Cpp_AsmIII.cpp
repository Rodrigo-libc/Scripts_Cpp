#include <iostream>

int add(int a, int b){
	
	int result;

	__asm__ ("movl %[input_a], %%eax;"
			"addl %[input_b], %%eax;"
			 : "=a" (result)
			 : [input_a] "r" (a), [input_b] "r" (b)
			 );

return result;

}

int main()
{

	int sum = add(7, 5);
	
	std::cout << "Soma: " <<sum << std::endl;

	return 0;
}
