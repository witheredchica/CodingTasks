#include <iostream>

int RecursiveFunction(int target, int num, int total) {
	if (num < target) {
		num += 1;
		total += num;
		RecursiveFunction(target, num, total);
	} else {
		return total;
	}
	
}

int main() {
	int input;
	std::cout << "Enter a number: ";
	std::cin >> input;

	std::cout << "The sum of this range is " << RecursiveFunction(input, 0, 0);
}