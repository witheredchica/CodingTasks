#include <iostream>

int main() {
	int input = 0;
	std::cout << "Enter a number between 1 and 10: ";
	std::cin >> input;

	if (input > 10 || input < 1) {
		"\nThe number entered is invalid.";
		return 0;
	}
	
	int count = 0;
	for (int i = 1; i < 10; i++) {
		count += (input % i == 0) ? 1 : 0;
	}

	if (count > 2) {
		std::cout << "\n" << input << " is not a prime number.";
	} else {
		std::cout << "\n" << input << " is a prime number.";
	}
}