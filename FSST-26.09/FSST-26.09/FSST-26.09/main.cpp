#include <iostream>
#include <Windows.h>
using namespace std;

int main(void) {
	int iCounter = 0;

	do {
		if (iCounter % 10 == 0) {
			cout << iCounter << ", " << endl;
		}
		iCounter++;
	} while (iCounter <= 100);

	cout << endl;
	system("PAUSE");

	return 0;
}