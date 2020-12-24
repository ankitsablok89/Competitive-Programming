/*
	author : akchesh_1519
*/
#include <iostream>

using namespace std;

typedef unsigned long long ull;

void printSequence(ull n) {
	if (n == 1) {
		cout << n;
		return;
	}

	while (n != 1) {
		cout << n << " ";
		if (n%2 == 0) {
			n = n/2;
		} else {
			n = 3*n + 1;
		}
	}

	cout << "1" << endl;
}

int main() {
	ull n;
	cin >> n;

	printSequence(n);

	return 0;
}