/*
	author : akchesh_1519
*/

#include <iostream>

using namespace std;

unsigned long long num = 600851475143;

void solve(unsigned long long prime_factor) {
	while (num%prime_factor == 0) {
		num = num/prime_factor;
	}
}

int main() {
	unsigned long long prime_factor = 2;

	while (num > 1) {
		if (num%prime_factor == 0) {
			solve(prime_factor);
		}

		++prime_factor;
	}

	cout << --prime_factor << endl;

	return 0;
}