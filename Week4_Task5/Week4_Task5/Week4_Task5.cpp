#include <iostream>

int main() {
	int input;
	do {
		std::cout << "Enter number of pyramid rows: ";
		std::cin >> input;
		if (input > 26 || input < 1) {
			std::cout << "Row number must be between 1 and 26.\n\n";
		}
	} while (input > 26 || input < 1);
	std::cout << std::endl;
	
	char output = 65;
	int spaces = input;
	int letters = 1;

	for (int i = 0; i < input; i++) {
		output = 65;
		for (int j = 0; j < spaces; j++) {
			std::cout << ' ';
		}
		for (int j = 0; j < letters; j++) {
			std::cout << output;
			output += (j < letters / 2) ? 1 : -1;
		}
		letters += 2;
		spaces--;
		std::cout << std::endl;
	}
}