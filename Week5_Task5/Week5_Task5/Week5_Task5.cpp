#include <iostream>
#include <string>

std::string FlipString(std::string str) {
	std::string output;
	for (int i = str.size() - 1; i >= 0; i--) {
		output += str[i];
	}
	return output;
}

void ReadWord(std::string str, int startPos, int spacePos) {
	std::string word = "";
	for (int i = startPos; i > spacePos; i--) {
		word += str[i];
	}
	word = FlipString(word);
	std::cout << word << " ";
}

int main() {
	std::string str;

	std::cout << "Enter a string: ";
	std::getline(std::cin, str);
	std::cout << "\nYour string reversed is: ";

	int startPos = str.size() - 1;
	//find spaces
	for (int i = str.size() - 1; i >= 0; i--) {
		if (str[i] == 32) {
			ReadWord(str, startPos, i);
			startPos = i - 1;
		}
	}
	ReadWord(str, startPos, -1);
	std::cout << "\b.";
}