#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include <Lmcons.h>
using namespace std;

float Temperatur1 = 0;
float Temperatur2 = 0;
float TemperaturMittelwert;

int main(void) {
	cout << "Temperaturen" << endl << "-----------------------------" << endl << "Willkommen!" << endl << endl;

	system("PAUSE");

	system("cls");

	cout << "Temperatur 1: ";
	cin >> Temperatur1;

	cout << "Temperatur 2: ";
	cin >> Temperatur2;

	system("cls");

	TemperaturMittelwert = (Temperatur1 + Temperatur2) / 2;

	cout << "Der Mittelwert betraegt " << TemperaturMittelwert << " C" << endl << endl;

	return 1;
}