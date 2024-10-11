#include <iostream>
#include <random>

float functionA(int int1, int int2, float float1) {
	return (float)(int1 + int2) * float1;
}

bool functionB(float floatIn) {
	std::random_device rd;
	std::mt19937 rng(rd());
	std::uniform_int_distribution<std::mt19937::result_type> dist(1, 10);

	return (floatIn < dist(rng));
}

int main() {
	int intIn1 = 0;
	int intIn2 = 0;
	float floatIn = 0;

	std::cout << "Input two integers and a float.\nInteger one: ";
	std::cin >> intIn1;
	std::cout << "Integer two: ";
	std::cin >> intIn2;
	std::cout << "Float: ";
	std::cin >> floatIn;

	switch (functionB(functionA(intIn1, intIn2, floatIn))) {
		case true:
			std::cout << "\nTrue";
			break;
		case false:
			std::cout << "\nFalse";
			break;
	}
}