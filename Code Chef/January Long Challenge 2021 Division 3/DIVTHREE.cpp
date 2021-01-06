/*
	author : akchesh_1519
*/
#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;

void solve() {
	LL N, K, D;
	cin >> N >> K >> D;

	LL A, sum = 0;
	for (int i = 0; i < N; ++i) {
		cin >> A;
		sum += A;
	}

	LL nContests = sum/K;
	if (nContests <= D)
		cout << nContests << "\n";
	else
		cout << D << "\n";
}

int main() {
	int T;
	cin >> T;

	while (T--) {
		solve();
	}

	return 0;
}
