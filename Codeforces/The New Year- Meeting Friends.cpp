/*
	author : akchesh_1519
*/

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	vector<int> distances(3);

	int x1, x2, x3;
	cin >> distances[0] >> distances[1] >> distances[2];
	sort(distances.begin(), distances.end());

	cout << distances[2] - distances[0] << "\n";

	return 0;
}