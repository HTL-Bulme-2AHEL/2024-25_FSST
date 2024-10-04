#include <iostream>
#include <stdlib.h>
using namespace std;

int a, b, c;

bool durch7(int a, int b, int c) {
	if (((a + b + c) % 7) == 0) {
		return true;
	} if (((a + b + c) % 7) == 1) {
		return false;
	}
	return false;
}

int main(void) {
	cout << "Drei Zahlen: ";
	cin >> a;
	cin >> b;
	cin >> c;

	if (durch7(a, b, c) == true) {
		cout << endl << "Sie ist durch 7 teilbar";
	} if (durch7(a, b, c) == false) {
		cout << endl << "Sie ist nicht durch 7 teilbar";
	}
}