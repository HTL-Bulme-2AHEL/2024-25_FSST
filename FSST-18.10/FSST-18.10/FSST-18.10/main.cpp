#include <iostream>
using namespace std;


int lenth_string(char text[]) {
	int zeichen = 0;
	char storage = 1;

	for (int i = 0; storage != 0; i++) {
		if (text[i] != 0) {
			zeichen++;
		}
		storage = text[i];
	}
	return zeichen - 1;
}

int duplication(char string[]) {
	char storage;

	for (int i = 0; i < lenth_string(string); i++) {
	}
}

int main(void) {
	char string[200];

	cout << "Geben Sie einen Text ein: ";
	gets_s(string, 200);

	cout << endl << "Es sind " << lenth_string(string) << " Zeichen" << endl;
	cout << "Dupliziert ist es " << duplication(string);
}