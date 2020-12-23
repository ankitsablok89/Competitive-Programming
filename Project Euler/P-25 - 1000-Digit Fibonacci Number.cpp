/*
	author : akchesh_1519
*/

#include <vector>
#include <iostream>
#include <algorithm>

#define SZ(v) (int)(v).size()

using namespace std;

typedef vector<int> vi;

void printVectorOfInts(vi vec) {
	for (int i = 0; i < SZ(vec); ++i) {
		cout << vec[i];
	}

	cout << endl;
}

int main() {
	vi fib1(1,1), fib2(1,1);
	int index = 2;

	while (true) {
		int carry = 0;
		reverse(fib1.begin(), fib1.end());
		reverse(fib2.begin(), fib2.end());

		vi temp;
		for (int i = 0; i < SZ(fib1); ++i) {
			int sum = carry + fib1[i] + fib2[i];
			int modulus = sum%10;
			carry = sum/10;
			temp.push_back(modulus);
		}

		for (int i = SZ(fib1); i < SZ(fib2); ++i) {
			int sum = carry + fib2[i];
			int modulus = sum%10;
			carry = sum/10;
			temp.push_back(modulus);
		}

		if (carry != 0) {
			temp.push_back(carry);
		}

		++index;

		reverse(temp.begin(), temp.end());
		reverse(fib2.begin(), fib2.end());
		fib1 = fib2;
		fib2 = temp;

		if (SZ(temp) == 1000) {
			reverse(fib2.begin(), fib2.end());
			printVectorOfInts(temp);
			cout << "The index of the first 1000 digit fibonacci number is : " << index << endl;
			break;
		}
	}

	return 0;
}