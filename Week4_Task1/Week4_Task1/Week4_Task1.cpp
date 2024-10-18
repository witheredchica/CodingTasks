#include <iostream>

int main() {
	int input = 0;
	int it = 0;
	do {
		std::cout << "Enter a number other than 5: ";
		std::cin >> input;
		it++;

		if (it == 5 && input != 5) {
			std::cout << "\nWow, you're more patient than I am, you win.\n";
			return 0;
		}
	} while (input != 5);

	std::cout << "\nHey you weren't supposed to enter 5!\n";
	return 0;
}