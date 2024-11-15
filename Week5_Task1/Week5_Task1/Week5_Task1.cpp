#include <iostream>

int main() {
	int inputs[5];

	std::cout << "Enter five integers: ";
	for (int i = 0; i < 5; i++) {
		std::cin >> inputs[i];
	}

	std::cout << "\n\nYou entered: ";
	for (int i = 0; i < 5; i++) {
		std::cout << inputs[i] << ", ";
	}
	std::cout << "\b\b.";
}