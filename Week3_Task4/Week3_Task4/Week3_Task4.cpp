#include <iostream>

void TopHalf(int asterisks, int spaces) {
	if (asterisks != 1 && asterisks != 2) {
		TopHalf(asterisks - 2, spaces + 1);
	}
	for (int i = 0; i < spaces; i++) {
		std::cout << ' ';
	}
	for (int i = 0; i < asterisks; i++) {
		std::cout << '*';
	}
	std::cout << std::endl;
}

void BottomHalf(int asterisks, int spaces) {
	for (int i = 0; i < spaces; i++) {
		std::cout << ' ';
	}
	for (int i = 0; i < asterisks; i++) {
		std::cout << '*';
	}
	std::cout << std::endl;
	if (asterisks > 0) {
		BottomHalf(asterisks - 2, spaces + 1);
	}
}

int main() {
	int input;
	std::cout << "Enter a number: ";
	std::cin >> input;
	std::cout << std::endl;
	TopHalf(input, 0);
	BottomHalf(input - 2, 1);
}
