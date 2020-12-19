/*
	author : akchesh_1519
*/

#include <cmath>
#include <iostream>

using namespace std;

int main() {
	double square_sum, sum_square;
	square_sum = sum_square = 0;

	for (int i = 0; i <= 100; ++i) {
		sum_square += i*i;
		square_sum += i;
	}

	cout << (long)abs(square_sum*square_sum - sum_square) << "\n";

	return 0;
}