#include <iostream>
#include <random>

int Random(int min, int max) {
	std::random_device rd;
	std::mt19937 rng(rd());
	std::uniform_int_distribution<std::mt19937::result_type> dist(min, max);
	return dist(rng);
}

int main() {
	int numRand = Random(1, 10);
	int input;
	int attempts = 0;
	
	std::cout << "Guess the number between 1 and 10.\n";

	do {
		attempts += 1;
		std::cout << "Attempt " << attempts << ": ";
		std::cin >> input;
	} while (input != numRand);

	std::cout << "\nyea it was " << numRand << std::endl;
}