/*
	author : akchesh_1519
*/

// Standard C++ Includes
#include <set>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <iterator>

// Useful C++ Macros
#define PB 		push_back
#define SZ(c)	(int)(c).size()

using namespace std;

// User Defined Type Definitions
typedef long double 		ld;
typedef unsigned int 		ui;
typedef unsigned long 		uli;
typedef unsigned long long 	ull;

typedef vector<int>		vi;
typedef vi::iterator    vi_iterator;
typedef vector<long> 	vl;
typedef vl::iterator 	vl_iterator;
typedef vector<float> 	vf;
typedef vf::iterator 	vf_iterator;
typedef vector<double> 	vd;
typedef vd::iterator 	vd_iterator;
typedef vector<bool> 	vb;
typedef vb::iterator 	vb_iterator;
typedef vector<ld> 		v_ld;
typedef v_ld::iterator 	v_ld_iterator;
typedef vector<ui> 		v_ui;
typedef v_ui::iterator  v_ui_iterator;
typedef vector<uli> 	v_uli;
typedef v_uli::iterator v_uli_iterator;
typedef vector<ull> 	v_ull;
typedef v_ull::iterator v_ull_iterator;

v_ull listPrimes_SieveOfEratosthenes(ull prime_limit) {
	v_ull primes;

	vb prime(prime_limit+1, true);
	prime[0] = prime[1] = false;

	for (ull i = 0; i <= prime_limit; ++i) {
		if (prime[i]) {
			primes.PB(i);
			for (ull j = i*i; j <= prime_limit; j += i) {
				prime[j] = false;
			}
		}
	}

	return primes;
} 

int main() {
	// this unsigned long long variable stores the right end of the range 
	// [1.......N] between which we need to list out the prime numbers.
	ull prime_limit = 1e+6;
	int index = 10000;
	cout << "10001st Prime : " << listPrimes_SieveOfEratosthenes(prime_limit)[index] << endl;

	return 0;
}