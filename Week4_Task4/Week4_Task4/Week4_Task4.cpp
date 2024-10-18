#include <iostream>

int main() {
	int input;
	std::cout << "Enter a number: ";
	std::cin >> input;
	std::cout << std::endl;

	int spaces = (input % 2 == 0) ? input / 2 : (input - 1) / 2;
	int asterisks = (input % 2 == 0) ? 2 : 1;

	for (int i = 0; i * 2 < input; i++) {
		for (int j = 0; j < spaces; j++) {
			std::cout << ' ';
		}
		for (int j = 0; j < asterisks; j++) {
			std::cout << '*';
		}
		spaces--;
		asterisks += 2;
		std::cout << std::endl;
 	}

	spaces += 2;
	asterisks -= 4;

	for (int i = 0; i * 2 < input; i++) {
		for (int j = 0; j < spaces; j++) {
			std::cout << ' ';
		}
		for (int j = 0; j < asterisks; j++) {
			std::cout << '*';
		}
		spaces++;
		asterisks -= 2;
		std::cout << std::endl;
	}
}