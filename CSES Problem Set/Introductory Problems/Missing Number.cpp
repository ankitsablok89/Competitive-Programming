/*
	author : akchesh_1519
*/
#include <iostream>

using namespace std;

typedef long long ll;

int main() {
	ll n;
	cin >> n;

	ll sum_of_n_terms = (n * (n+1))/2;
	ll running_sum = 0, num;
	for (ll i = 0; i < n-1; ++i) {
		cin >> num;
		running_sum += num;
	}

	cout << sum_of_n_terms - running_sum << endl;

	return 0;
}