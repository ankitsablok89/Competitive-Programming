/*
	author : akchesh_1519
*/

#include <iostream>

int main() {
	int n; std::cin >> n;
	int scores[n];
	for (int i = 0; i < n; ++i) {
		std::cin >> scores[i];
		std::cin.ignore();
	}

	int amazingContests = 0;
	int min, max; 
	min = max = scores[0];

	for (int i = 1; i < n; ++i) {
		if (scores[i] > max) {
			++amazingContests;
			max = scores[i];
		}

		if (scores[i] < min) {
			++amazingContests;
			min = scores[i];
		}
	}

	std::cout << amazingContests << std::endl;;

	return 0;
}