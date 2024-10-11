#include <iostream>

int Loop() {
	int input;
	std::cout << "You enter a room with three doors.\n\nDo you:\n1. Enter the left door.\n2. Enter the middle door.\n3. Enter the right door.\n\nYou choose option: ";
	std::cin >> input;

	std::string output;
	std::cout << "\033c";
	output += "You walk through the ";

	switch (input) {
	case 1:
		output += "left door.\n";
		break;
	case 2:
		output += "middle door.\n";
		break;
	case 3:
		output += "right door.\n";
		break;
	default:
		std::cout << "you die!!11";
		return 0;
	}

	std::cout << output;
	return 1;
}

int main() {
	int num = 0;
	int loops = 0;
	do {
		num = Loop();
		loops += 1;
		if (loops == 25) {
			std::cout << "You're outside now! hooray!\nYou win!";
			break;
		}
	} while (num != 0);
}

