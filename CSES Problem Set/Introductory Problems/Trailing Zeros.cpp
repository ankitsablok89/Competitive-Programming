/*
	author : akchesh_1519
*/
#include <iostream>

using namespace std;

typedef long long ll;

// helpful method to evaluate the number of zeros at the end of a factorial
ll getZeros(ll n) {
	int zero_count = 0;

	for (ll i = 5; n/i > 0; i = i*5) {
		zero_count += (n/i);
	}

	return zero_count;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll n;
	cin >> n;
	cout << getZeros(n) << "\n";

	return 0;
}
