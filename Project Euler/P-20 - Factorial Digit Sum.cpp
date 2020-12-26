/*
	author : akchesh_1519
*/
#include <vector>
#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>
#include <algorithm>

#define SZ(c) (int)(c).size()

using namespace std;

typedef vector<int> vi;

// helpful method to print an input vector of integers
void printVectorOfInts(vi v) {
	for (int i = 0; i < SZ(v); ++i) {
		cout << v[i];
	}

	cout << endl;
}

// helpful method to compute factorial of an input number
vi computeFactorial(int input_number) {
	vi result(1,1);

	for (int num = 1; num <= input_number; ++num) {
		int carry = 0;
		for (int i = 0; i < SZ(result); ++i) {
			int sum = result[i] * num + carry;
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

int main() {
	vi result = computeFactorial(100);
	cout << "100! = ";
	printVectorOfInts(result);

	int sum = 0;
	for (int i = 0; i < SZ(result); ++i) {
		sum += result[i];
	}

	cout << "sum of digits of 100! = " << sum << endl;
	
	return 0;
}