#include <iostream>

int main() {
	int array2D[5][3] = {
		{0, 1, 2},
		{1, 2, 3},
		{2, 3, 4},
		{3, 4, 5},
		{4, 5, 6}
	};

	for (int i = 0; i < 5; i++) {
		std::cout << "{ ";
		for (int j = 0; j < 3; j++) {
			std::cout << array2D[i][j] << ", ";
		}
		std::cout << "\b\b }\n";
	}
}