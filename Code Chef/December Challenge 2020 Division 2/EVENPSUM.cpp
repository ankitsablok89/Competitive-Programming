/*
	author : akchesh_1519
*/

#include <cmath>
#include <iostream>

long long solve(long long A, long long B) {
	// these variables store the number of 
	// even and odd numbers in the respective ranges
	long long evenA, oddA;
	long long evenB, oddB;

	oddA = ceil(A/2); oddB = ceil(B/2);
	evenA = A - oddA; evenB = B - oddB;

	return (oddA*oddB) + (evenA*evenB);
}

int main() {
	int T;
	std::cin >> T;

	while (T--) {
		long long A, B;
		std::cin >> A >> B;
		std::cout << solve(A, B) << std::endl;;
	}

	return 0;
}