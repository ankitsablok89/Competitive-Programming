/*
	author : akchesh_1519
*/
#include <string>
#include <cstring>
#include <cstdlib>
#include <sstream>
#include <iostream>

#define LN(str) (int)(str).length()

using namespace std;

const long long MAX = 1e6+5;

// helpful method to convert digit character to int
int covertDigitCharToInt(char digit) {
	return digit - '1' + 1;
}

// helpful method for converting an integer to a string
string convertIntToString(int num) {
	stringstream ss;
	ss << num;
	string s;
	ss >> s;
	return s;
}

int main() {
	string champernowne = ".";
	for (int i = 1; LN(champernowne) < MAX; ++i) {
		champernowne.append(
			convertIntToString(i));
	}

	int d1 			= covertDigitCharToInt(champernowne[1]);
	int d10 		= covertDigitCharToInt(champernowne[10]);
	int d100 		= covertDigitCharToInt(champernowne[100]);
	int d1000 		= covertDigitCharToInt(champernowne[1000]);
	int d10000 		= covertDigitCharToInt(champernowne[10000]);
	int d100000 	= covertDigitCharToInt(champernowne[100000]);
	int d1000000 	= covertDigitCharToInt(champernowne[1000000]);

	cout << "The product of the digits is : " << d1*d10*d100*d1000*d10000*d100000*d1000000 << endl;
	cout << "Champernowne constant is : " << champernowne << endl;
	
	return 0;
}