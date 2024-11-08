#include <iostream>

// Bubble-Sort

int a;

int main(void) {
	int arr[20] = { 22, 66, 12, 42, 33, 55, 41, 10, 84, 62, 46, 14, 87, 122, 104, 39, 2, 53, 15, 76 };
	
	for (int l = 0; l < 20; l++) {
		for (int i = 0; i < 19; i++) {
			if (arr[i] > arr[i + 1]) {
				a = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = a;
			}
		}
	}

	for (int i = 0; i < 20; i++) {
		std::cout << arr[i] << std::endl;
	}

	return 0;
}