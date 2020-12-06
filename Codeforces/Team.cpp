/*
	author : akchesh_1519
*/

#include <string>
#include <iostream>

int solve(std :: string solutions);

int main() {
	int n; std :: cin >> n;
	std::cin.ignore();

	int solved = 0;
	for (int i = 0; i < n; ++i) {
		std :: string solutions;
		getline(std::cin, solutions);

		if (solve(solutions) > 1) {
			++solved;
		}
	}

	std :: cout << solved << std::endl;

	return 0;
}

int solve(std :: string solutions) {
	int count = 0;
	for (int i = 0; i < solutions.length(); ++i) {
		if (solutions.at(i) == '1') {
			++count;
		}
	}

	return count;
}