/*
	author : akchesh_1519
*/

#include <iostream>

#define LIMIT 4e+6

using namespace std;

typedef unsigned long ul;

int main() {
	ul fib1 = 1, fib2 = 2;
	ul sum = 0;

	while (fib2 < (ul) LIMIT) {
		if (fib2%2 == 0) {
			sum += fib2;
		}

		ul temp = fib1 + fib2;
		fib1 = fib2;
		fib2 = temp;

	}

	cout << sum << endl;

	return 0;
}