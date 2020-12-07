/*
	author : akchesh_1519
*/

#include <cmath>
#include <iostream>

int solve(int D1, int V1, int D2, int V2, int P) {
	int vaccinesProducedInOneDay = V1 + V2;

	// if both companies produce vaccines on the same day itself
	if (D1 == D2) {
		return (D1-1) + ceil(((double)P)/vaccinesProducedInOneDay);
	}

	// keeps track of the number of days required to produce P vaccines
	// when both companies produce vaccines at different days
	int d = 0;

	// when company 1 starts production before company 2
	if (D1 < D2) {
		d+= D1 - 1;
		while (D1 < D2 && P > 0) {
			++d;
			++D1;
			P -= V1;
		}

		if (P > 0) {
			d += ceil(((double)P)/vaccinesProducedInOneDay);
		}
	} else {
		d+= D2 - 1;
		while (D2 < D1 && P > 0) {
			++d;
			++D2;
			P -= V2;
		}

		if (P > 0) {
			d += ceil(((double)P)/vaccinesProducedInOneDay);
		}
	}

	return d;
}

int main() {
	int D1, V1, D2, V2, P;
	std::cin >> D1 >> V1 >> D2 >> V2 >> P;

	std::cout << solve(D1, V1, D2, V2, P) << std::endl;

	return 0;
}