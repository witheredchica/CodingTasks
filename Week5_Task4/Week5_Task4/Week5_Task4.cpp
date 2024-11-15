#include <iostream>
#include <string>

bool VowelCheck(char letter) {
	char vowels[5] = { 'A', 'E', 'I', 'O', 'U' };

	for (int i = 0; i < 5; i++) {
		if (toupper(letter) == vowels[i]) return true;
	}

	return false;
}

int main() {
	std::string str;

	std::cout << "Enter a string: ";
	std::getline(std::cin, str);

	std::cout << "\nWithout vowels, your string is: ";

	for (int i = 0; i < str.size(); i++) {
		if (!VowelCheck(str[i])) std::cout << str[i];
	}
}