/*
	author : akchesh_1519
*/

#include <vector>
#include <iostream>
#include <algorithm>

#define SZ(v) (int)(v).size()

using namespace std;

typedef vector<int> vi;

void printVectorOfInts(vi v) {
	for (int i = 0; i < SZ(v); ++i) {
		cout << v[i];
	}

	cout << endl;
}

int findSumOfDigits(vi v) {
	int sum = 0;
	for (int i = 0; i < SZ(v); ++i) {
		sum += v[i];
	}

	return sum;
}

int main() {
	vi base(1,2);

	for (int exp = 1; exp < 1000; ++exp) {
		int carry = 0;
		for (int i = 0; i < SZ(base); ++i) {
			int sum = base[i]*2 + carry;
			base[i] = sum%10;
			carry = sum/10;
		}

		if (carry != 0) {
			base.push_back(carry);
		}
	}

	reverse(base.begin(), base.end());
	cout << "The number 2^1000 = ";
	printVectorOfInts(base);
	cout << "The sum of the digits of 2^1000 = " << findSumOfDigits(base) << endl;

	return 0;
}