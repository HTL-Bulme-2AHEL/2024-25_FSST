#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

#define MAX_WERTE 50

char wurf[MAX_WERTE];
int zufallszahl;

int kopf = 0;
int zahl = 0;
int folge = 0;

bool bool_zahl = false;

int main() {
	srand(time(0));

	for (int i = 0; i < MAX_WERTE; i++) {
		zufallszahl = rand() % 2;

		if (zufallszahl == 1) {
			wurf[i] = 'Z';
			zahl++;
			bool_zahl = true;
		}
		else {
			wurf[i] = 'K';
			kopf++;
			
			if (bool_zahl == true) {
				folge++;
			}
			bool_zahl = false;
		}
		cout << wurf[i] << endl;
	}

	cout << endl << endl << "Es kam Zahl " << zahl << " Mal vor und Kopf " << kopf << " Mal vor." << endl << "Es kam Z gefolgt von K " << folge << " Mal vor.";
	return 0;
}