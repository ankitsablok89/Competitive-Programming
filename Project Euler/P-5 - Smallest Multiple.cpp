/*
	author : akchesh_1519
*/

#include <iostream>

using namespace std;

int main() {
	for (int i = 2;;++i) {
		int count = 0;
		for (int j = 1; j <= 20; ++j) {
			if (i%j == 0) {
				++count;
			} else {
				break;
			}
		}

		if (count == 20) {
			cout << i <<"\n";
			break;
		}
	}
	return 0;
}