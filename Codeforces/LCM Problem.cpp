/*
	author : akchesh_1519
*/

#include <iostream>

void solve(long long l, long long r) {

	if (r%l == 0 && l < r) {
		std::cout << l << " " << r << std::endl;
		return;
	} else {
		if (2*l <= r) {
			std::cout << l << " " << 2*l << std::endl;
		} else {
			std::cout << -1 << " " << -1 << std::endl;
		}
	}
}

int main() {
	int t; std::cin >> t;

	while(t--) {
		long long l,r; std::cin >> l >> r;
		solve(l, r);
	}

	return 0;
}
