#include <iostream>
using namespace std;

int Zahl;

int main(void) {
	do {
		cout << "Gib eine Zahl ein: ";
		cin >> Zahl;
		cout << endl;
	} while (Zahl <= 10 && Zahl < 0);

	for (int i = 0; i < 10; i++) {
		cout << i + 1 << " * " << Zahl << " = " << (i + 1) * Zahl << endl;
	}
}