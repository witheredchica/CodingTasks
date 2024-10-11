#include <iostream>

int main() {
	int input;
	std::cout << "Enter a number: ";
	std::cin >> input;
	if (input > 5) {
		std::cout << "\nThe number is more than 5.";
	} else if (input < 5) {
		std::cout << "\nThe number is less than 5.";
	} else if (input == 5) {
		std::cout << "\nThe number is equal to 5.";
	} else {
		std::cout << "\nThe number entered is invalid.";
	}
}