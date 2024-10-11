#include <iostream>

int main() {
	int input;
	std::cout << "Select your drink:\n1. Water\n2. Fanta\n3. Coca-cola\n4. Sprite\n5. Pepsi\n\nEnter here: ";
	std::cin >> input;
	std::string drink;

	switch (input) {
		case 1:
			drink = "water";
			break;
		case 2:
			drink = "fanta";
			break;
		case 3:
			drink = "coca-cola";
			break;
		case 4:
			drink = "sprite";
			break;
		case 5:
			drink = "pepsi";
			break;
		default:
			std::cout << "\nInvalid Selection.";
			return 0;
	}

	std::cout << "\nYou got a " << drink << "!";
}