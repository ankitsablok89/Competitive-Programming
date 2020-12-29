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

// this is a helpful method that is used to iterate over the elements of a vector and print them out to console
void vectorIterator(v_ull input_vector) {
	v_ull_iterator v_itr;
	for (v_itr = input_vector.begin(); v_itr != input_vector.end(); ++v_itr) {
		cout << *v_itr << "\n";
	}
}

/*
	This function is responsible for executing the main/original Sieve of Eratosthenes algorithm
	for listing all prime numbers that exists in the range [1......N].

	1) In this method we are working with unsigned long long integers in C++.
	   Each unsigned long long integer in C++ take around 8 bytes of memory i.e
	   64-bits of storage. Depending on the storage if we want to work with a range like
	   [1...10^6] we would need around 64 * 10^6 bits = 8 * 10^6 bytes or 8-MB of storage space

	2) As a first step we declare a vector of booleans from 0 to (prime_limit + 1) and set all
	   of the values in the boolean array to true as we think that first all numbers are prime numbers. We
	   mark the values of locations 0 and 1 as false because we know that they are not prime numbers. Hence
	   the first prime number the algorithm starts working with is '2'.

	3) We also maintain a vector of unsigned long long integers to store the prime numbers the algorithm finds
	   during it's operation. Essentially speaking we store the location numbers in the vector of booleans where
	   prime[i] = true.

	4) If the algorithm does find during an iteration that prime[i] = true then we iterate over the remaining elements
	   of the boolean vector to mark all the proper multiples of the location i starting with i^2. Why do we start with i^2
	   is because whenever we write a composite number x = a.b (x written as product of primes) then essentially the following
	   property holds either a >= b or b >= a, using this property we can see that all the lower multiples of a prime i then should
	   have been marked as composite by a prime lower than i essentially hence we can just start with a = b = i in this case.

	5) Some useful references for studying this algorithm -:

	   5.1) https://tinyurl.com/yb5dbua8
	   5.2) https://tinyurl.com/y7mbracv
	   5.3) https://tinyurl.com/ydgbxug2
	   5.4) https://tinyurl.com/yckpfwnp
*/
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
	ull prime_limit;
	cout << "Please enter number upto which you list all primes in : ";
	cin >> prime_limit;

	cout << "The list of primes in [1....." << prime_limit << "] is as follows : \n";
	vectorIterator(
		listPrimes_SieveOfEratosthenes(prime_limit));

	return 0;
}