#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int i = 0;

	cout <<"Laço While Incrementando..."<< endl;
	while (i < 20) {
		//i = i+1;
		//i+= 1;
		cout <<i++ <<endl;		
	}

	int f = 20;

	cout << "Laço While decrementando..." <<endl;
		while(f > 0){
			cout << f-- <<endl; 
		}

	return 0;
}
