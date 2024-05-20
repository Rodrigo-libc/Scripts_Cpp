#include <iostream>
using namespace std;

struct Janelas{
	string titulo;
	int left;
	int top;
};

int main(int argc, char *argv[])
{
	Janelas j1;

	j1.titulo = "Windows";
	j1.left = 0;
	j1.top =0;

	Janelas j2;

	j2.titulo = "Linux";
	j2.left = 320;
	j2.top =320;

	cout <<"Titulo: "+ j1.titulo <<endl;
	cout <<"Left: " <<j1.left <<endl;
	cout <<"Top: " << j1.top <<endl <<"\n";

	cout <<"Titulo: "+ j2.titulo <<endl;
	cout <<"Left: " <<j2.left <<endl;
	cout <<"Top: " << j2.top <<endl;
	
	return 0;
}
