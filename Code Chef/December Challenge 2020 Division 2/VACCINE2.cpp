/*
	author : akchesh_1519
*/

#include <iostream>

int solve(int N, int D, int ages[]) {
	int atRiskPeople = 0;
	int notAtRiskPeople = 0;

	for (int i = 0; i < N; ++i) {
		if (ages[i] >= 80 || ages[i] <= 9) {
			++atRiskPeople;
		} else {
			++notAtRiskPeople;
		}
	}

	int days = 0;

	while (atRiskPeople > 0) {
		++days;
		atRiskPeople -= D;
	}

	while (notAtRiskPeople > 0) {
		++days;
		notAtRiskPeople -= D;
	}

	return days;
}

int main() {
	int T;
	std::cin >> T;

	while (T--) {
		int N,D;
		std::cin >> N >> D;
		
		int ages[N];
		for (int i = 0; i < N; ++i) {
			std::cin >> ages[i];
		}

		std::cout << solve(N, D, ages) << std::endl;
	}

	return 0;
}