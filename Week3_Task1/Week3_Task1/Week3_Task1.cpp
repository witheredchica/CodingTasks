#include <iostream>
#include <random>

int Random(int min, int max) {
	std::random_device rd;
	std::mt19937 rng(rd());
	std::uniform_int_distribution<std::mt19937::result_type> dist(min, max);
	return dist(rng);
}

int main() {
	int num = Random(1, 10);
	int guess = 0;
	bool win = false;

	for (int i = 0; i < 3; i++) {
		std::cout << "Guess the number between 1 and 10: ";
		std::cin >> guess;
		if (guess == num) {
			win = true;
			std::cout << "\nCorrect! You win :)";
			i = 10;
		} else {
			std::cout << "\nWrong. " << (2 - i) << " guesses left." << std::endl << std::endl;
		}
	}
	
	if (!win) {
		std::cout << "You ran out of guesses. The number was " << num << "." << std::endl;
	}
}