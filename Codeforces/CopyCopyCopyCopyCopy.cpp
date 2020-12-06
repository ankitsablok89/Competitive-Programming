/*
	author : akchesh_1519
*/

#include <set>
#include <iostream>

int main() {

	int t; std :: cin >> t;
	int n, element;
	while (t--) {
		std :: set<long> sequence;
		std :: cin >> n;

		for (int i = 0; i < n; ++i) {
			std :: cin >> element;
			sequence.insert(element);
		}

		std :: cout << sequence.size() << std::endl;
	}

	return 0;
}