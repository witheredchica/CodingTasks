#include <iostream>

int main() {
	float floats[5];
	std::cout << "Enter five float values: ";
	for (int i = 0; i < 5; i++) {
		std::cin >> floats[i];
	}

	std::cout << "\nYour array looks like: ";
	for (int i = 0; i < 5; i++) {
		std::cout << "[" << floats[i] << "], ";
	}
	std::cout << "\b\b.\n";

	int input;
	std::cout << "Enter index of value you want to remove: ";
	std::cin >> input;

	for (int i = input; i < 4; i++) {
		floats[i] = floats[i + 1];
	}

	floats[4] = 0;

	std::cout << "\n\nYour array now looks like: ";
	for (int i = 0; i < 5; i++) {
		std::cout << "[" << floats[i] << "], ";
	}
	std::cout << "\b\b.\n";
}