/*
	author : akchesh_1519
*/
#include <set>
#include <vector>
#include <cstdio>
#include <string>
#include <sstream>
#include <iostream>
#include <iterator>
#include <algorithm>

#define SZ(c) (int)(c).size()

using namespace std;

typedef unsigned long long ull;
typedef vector<int> vi;

// helpful method to print an input vector of integers
void printVectorOfInts(vi v) {
	for (int i = 0; i < SZ(v); ++i) {
		cout << v[i];
	}

	cout << endl;
}

// helpful method for converting an integer to a string
string convertIntToString(int num) {
	stringstream ss;
	ss << num;
	string s;
	ss >> s;
	return s;
}

// helpful method to convert a collection of integers to a string, the collection here is a vector of integers
string convertIntegerVectorToString(vi input_vector) {
	string num_string = "";
	for (int i = 0; i < SZ(input_vector); ++i) {
		num_string.append(convertIntToString(input_vector[i]));
	}

	return num_string;
}

// helpful method to evaluate different powers of an input number, performs the technique of big integer multiplication with carryover
vi computePowers(int base, int exponent) {
	vi result(1,1);

	for (int exp = 1; exp <= exponent; ++exp) {
		ull carry = 0;
		for (int i = 0; i < SZ(result); ++i) {
			ull sum = result[i] * base + carry;
			result[i] = sum%10;
			carry = sum/10;
		}

		while (carry != 0) {
			result.push_back(carry%10);
			carry = carry/10;
		}
	}

	reverse(result.begin(), result.end());

	return result;
}

// helpful method to print the elements of a set<string>
void printSetOfStrings(set<string> input_set) {
	set<string> :: iterator itr;
	for (itr = input_set.begin(); itr != input_set.end(); ++itr) {
		cout << *itr << "\n";
	}

	cout << endl;
}

int main() {
	set<string> unique_integer_combinations;

	for (int a = 2; a <= 100; ++a) {
		for (int b = 2; b <= 100; ++b) {
			string integer_combination = convertIntegerVectorToString(computePowers(a,b));
			unique_integer_combinations.insert(integer_combination);
		}
	}

	printSetOfStrings(unique_integer_combinations);
	cout << SZ(unique_integer_combinations) << endl;

	return 0;
}