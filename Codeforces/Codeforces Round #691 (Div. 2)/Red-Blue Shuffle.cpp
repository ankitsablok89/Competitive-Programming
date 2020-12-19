/*
	author : akchesh_1519
*/

#include <iostream>

using namespace std;

void solve(char* r, char* b, int n) {
	int rDigists, bDigits;
	rDigists = bDigits = 0;

	for (int i = 0; i < n; ++i) {
		if (r[i] > b[i]) {
			++rDigists;
		}

		if (b[i] > r[i]) {
			++bDigits;
		}
	}

	if (rDigists > bDigits) {
		cout << "RED" << "\n";
		return;
	}

	if (bDigits > rDigists) {
		cout << "BLUE" << "\n";
		return;
	}

	cout << "EQUAL" << "\n";
	return;
}

int main() {

	int T; 
	cin >> T;

	while (T--) {
		int n; 
		cin >> n;

		char r[n], b[n];
		cin >> r;
		cin >> b;

		solve(r,b,n); 
	}

	return 0;
}