#include <iostream>

int main() {
	int score;
	std::cout << "Enter your score: ";
	std::cin >> score;
	std::string grade;

	if (score > 79) {
		grade = "A*";
	}
	else if (score > 69) {
		grade = 'A';
	}
	else if (score > 59) {
		grade = 'B';
	}
	else if (score > 49) {
		grade = 'C';
	}
	else if (score > 39) {
		grade = 'D';
	}
	else if (score > 1) {
		grade = 'F';
	}
	else {
		grade = 'U';
	}

	std::cout << "\nYour grade is " << grade << ".";
}