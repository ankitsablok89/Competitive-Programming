/*
	author : akchesh_1519
*/
#include <string>
#include <iostream>

using namespace std;

char solve(string scores) {
	int score_A, score_B;
	score_A = score_B = 0;

	for (int i = 0; i < (int) scores.length(); ) {
		if (scores.at(i) == 'A') {
			score_A += (scores.at(i+1) - '0');
		} else {
			score_B += (scores.at(i+1) - '0');
		}

		i += 2;
	}

	if (score_A > score_B)
		return 'A';
	else
		return 'B';
}

int main() {
	string scores;
	cin >> scores;

	cout << solve(scores) << endl;

	return 0;
}