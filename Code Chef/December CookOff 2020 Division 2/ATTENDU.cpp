/*
	author : akchesh_1519
*/

#include <cmath>
#include <cstring>
#include <iostream>

using namespace std;

void solve(int N, string attendance) {
	int present_till_now = 0;
	for (int i = 0; i < N; ++i) {
		if (attendance[i] == '1') {
			++present_till_now;
		}
	}

	present_till_now += (120 - N);
	if ((double)present_till_now/120 >= 0.75) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}

int main() {
	int T;
	cin >> T;

	while (T--) {
		int N;
		cin >> N;
		cin.clear(); cin.ignore();

		string attendance;
		getline(cin, attendance);
		solve(N, attendance);
	}

	return 0;
}
