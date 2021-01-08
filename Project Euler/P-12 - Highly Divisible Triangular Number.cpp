/*
	author : akchesh_1519
*/
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

#define F 					first
#define S 					second
#define PB 					push_back
#define MP 					make_pair
#define SZ(c)				(int)(c).size()

using namespace std;

typedef long long			ll;
typedef pair<long, long>	pll;
typedef vector<pll>			vpll;

vpll getFactorization(ll input_number) {
	vpll factors;
	for (long i = 2; input_number != 1; ++i) {
		if (input_number % i == 0) {
			long count = 0;
			while (input_number % i == 0) {
				input_number = input_number/i;
				++count;
			}

			factors.PB(MP(i, count));
		}
	}

	return factors;
}

long getDivisors(ll input_number) {
	vpll factorization = getFactorization(input_number);
	long divisors = 1;

	for (int i = 0; i < SZ(factorization); ++i) {
		divisors *= (factorization[i].S + 1);
	}

	return divisors;
}

int main() {
	for (long i = 1;; ++i) {
		ll triangularNumber = (i * (i + 1)) / 2;
		if (getDivisors(triangularNumber) > 500) {
			cout << "The first triangular number to have > 500 divisors is : " << triangularNumber << "\n";
			break;
		}
	}

	return 0;
}