#include <iostream>

int main() {
	int input;
	int range = 0;
	std::cout << "Please input a whole number between 1 and 9: ";
	std::cin >> input;

	if (input < 1 || input > 9) {
		std::cout << "\nInvalid input.";
		return -1;
	}

	std::cout << "\nThe whole numbers are: ";

	for (int i = 0; i < input; i++) {
		std::cout << i + 1 << ", ";
		range += i + 1;
	}

	std::cout << "\b\b.\n\nThe sum of the range is: " << range;
}