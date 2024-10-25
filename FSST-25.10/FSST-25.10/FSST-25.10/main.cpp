#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

#define MAX_WERTE 50

char wurf[20];
int zufallszahl;

int main() {
	srand(time(0));

	for (int i = 0; i < MAX_WERTE; i++) {
		zufallszahl = rand() % 2;

		if (zufallszahl == 1) {
			wurf[i] = 'Z';
		}
		else {
			wurf[i] = 'K';
		}
		cout << wurf[i] << endl;
	}
	return 0;
}