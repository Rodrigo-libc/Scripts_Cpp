#include <iostream>

int add(int a, int b){
	
	int result;

	__asm__ ("addl %%ebx, %%eax;"
		:"=a" (result)
		: "a" (a), "b" (b)
		);

return result;

}

int main()
{

	int sum = add(10, 20);
	
	std::cout << "Soma: " <<sum << std::endl;

	return 0;
}
