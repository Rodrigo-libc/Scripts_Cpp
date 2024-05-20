#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
int num = 0;

	while (true) {
		num++;

		if (num >= 10) {
			break;
		}
		else {

			if (num == 4 or num == 6)
				continue;
		}
		cout << num <<endl;
	}

	return 0;
}
