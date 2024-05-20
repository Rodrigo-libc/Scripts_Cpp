#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int num = 0;

	while (true) {
		num++;
		cout <<num<<endl;

		if (num >= 5) {
			break;
		}
	}


	return 0;
}
