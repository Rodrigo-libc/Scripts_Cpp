#include <iostream>

int add(int a, int b){
	
	int result;

	__asm__ ("addl %%ebx, %%eax;" //soma o resultado a eax
		:"=a" (result) //Output
		: "a" (a), "b" (b) //Input
		);

return result;

}

int main()
{

	int sum = add(10, 20);
	
	std::cout << "Soma: " <<sum << std::endl;

	return 0;
}
