#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

#define MAX_LOTTOZAHLEN 6
#define MAX_BEREICH 45

int lottozahlen[MAX_LOTTOZAHLEN];

int main(void) {
	srand(time(0));

	for (int i = 0; i < MAX_LOTTOZAHLEN; i++) {
		lottozahlen[i] = rand() % 45 + 1;

		for (int j = 0; j < MAX_BEREICH; j++) {
			if (lottozahlen[i] == j) {
				lottozahlen[i] = rand() % 45 + 1;
			}
		}
	}
	for (int i = 0; i < MAX_LOTTOZAHLEN; i++) {
		cout << lottozahlen[i] << "  ";
	}
	return 1;
}