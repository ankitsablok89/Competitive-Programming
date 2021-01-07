/*
	author : akchesh_1519
*/
#include <vector>
#include <string>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <sstream>
#include <iostream>
#include <algorithm>

#define PB 		push_back
#define SZ(c)	(int)(c).size()
#define LN(str)	(int)(str).length()

using namespace std;

typedef vector<char> vc;

const string ALPHABET = "abcdefghijklmnop";

string decodeCharacter(vc bits) {
	string decodedCharacterString = "";

	int low, high;
	low = 0;
	high = LN(ALPHABET) - 1;

	if (bits[0] == '0') {
		high = (low + high)/2;
	} else {
		low = (low + high)/2 + 1;
	}

	if (bits[1] == '0') {
		high = (low + high)/2;
	} else {
		low = (low + high)/2 + 1;
	}

	if (bits[2] == '0') {
		high = (low + high)/2;
	} else {
		low = (low + high)/2 + 1;
	}

	if (bits[3] == '0') {
		high = (low + high)/2;
	} else {
		low = (low + high)/2 + 1;
	}

	decodedCharacterString += ALPHABET[low];

	return decodedCharacterString;
}

void solve() {
	int N;
	string S;
	cin >> N;
	cin >> S;

	string decodedString = "";
	for (int i = 0; i < LN(S); i += 4) {
		vc bits;
		bits.PB(S.at(i));
		bits.PB(S.at(i+1));
		bits.PB(S.at(i+2));
		bits.PB(S.at(i+3));

		decodedString.append(decodeCharacter(bits));
	}

	cout << decodedString << "\n";
}

int main() {
	int T;
	cin >> T;

	while (T--) {
		solve();
	}

	return 0;
}
