#include <iostream>
#include <time.h>
#include <limits.h>
#include <stdlib.h>
#include <string>
#include <algorithm>
#include <stdbool.h>
using namespace std;

#define MAX_ZUFALL 2000

int zufallszahlen[MAX_ZUFALL];
int sorted_zufallszahlen[MAX_ZUFALL];

string befehl;

int tmp;

int main(void) {
	srand(time(0));
	for (int i = 0; i < MAX_ZUFALL; i++) {
		zufallszahlen[i] = rand() % (100 - 0 + 1) - 50;
		sorted_zufallszahlen[i] = rand() % (100 - 0 + 1) - 50;
	}

	int n = sizeof(zufallszahlen) / sizeof(zufallszahlen[0]);
	int max_num = *max_element(zufallszahlen, zufallszahlen + n);
	int min_num = *min_element(zufallszahlen, zufallszahlen + n);

	for (int i = 1; i < MAX_ZUFALL; i++)
	{
		for (int j = 0; j < MAX_ZUFALL - i; j++)
		{
			if (sorted_zufallszahlen[j] > sorted_zufallszahlen[j + 1])
			{
				tmp = sorted_zufallszahlen[j];
				sorted_zufallszahlen[j] = sorted_zufallszahlen[j + 1];
				sorted_zufallszahlen[j + 1] = tmp;
			}
		}
	}d

	do {
		cout << "Befehl: ";
		cin >> befehl;

		if (befehl == "help") {
			cout << "Willkommen bei den Zufallszahlen" << endl << " help - Uebersicht zu allen Befehlen" << endl << " zufallszahlen - Anzeige von " << MAX_ZUFALL << " Zufallsahlen" << endl << " minmax - Die groesste und die kleinste Zufalsszahl anzeigen" << endl << " sorted - Sortierte Zufallszahlen" << endl << endl;
		} if (befehl == "zufallszahlen") {
			for (int i = 0; i < MAX_ZUFALL; i++) {
				cout << zufallszahlen[i] << endl;
			}
		} if (befehl == "minmax") {
			cout << "   Die groesste Zahl ist " << max_num << endl << "   Die kleinste Zahl ist " << min_num << endl;
		} if (befehl == "sorted") {
			for (int i = 0; i < MAX_ZUFALL; i++) {
				cout << sorted_zufallszahlen[i] << endl;
			}
		}

		if (befehl == "exit" || befehl == "close" || befehl == "ende") {
			return 2;
		}
		cout << endl << endl;
	} while (true);
	
	return 1;
}