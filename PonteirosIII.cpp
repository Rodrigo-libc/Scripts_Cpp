#include <iostream>


void alterarPtr(int *ptr){

	(*ptr)++; 
}

int main(int argc, char *argv[])
{
	int var{10};

	std::cout <<"O valor de var antes: " <<var <<'\n';

	alterarPtr(&var);

	std::cout <<"O valor de var incrementado: " <<var <<'\n';

	return 0;
}
