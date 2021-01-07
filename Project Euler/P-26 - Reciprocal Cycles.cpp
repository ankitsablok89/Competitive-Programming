/*
	author : akchesh_1519
*/
#include <set>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <sstream>
#include <iostream>
#include <algorithm>

#define F 				first
#define S 				second
#define PB 				push_back
#define MP 				make_pair
#define SZ(c)			(int)(c).size()
#define LN(str)			(int)(str).length()

using namespace std;

typedef set<int>		si;
typedef pair<int, int>	pii;
typedef pair<int, pii>	piii;
typedef vector<piii>	vpiii;

// initially the length of the longest recurring cycle
// for any unit fraction is 0
int LONGEST_RECURRING_CYCLE = 0;

// helpful method for converting an integer to a string
string convertIntToString(int num) {
	stringstream ss;
	ss << num;
	string s;
	ss >> s;
	return s;
}

// helpful method to test set membership
bool ifPresent(si &container, int numerator) {
	if (container.find(numerator) != container.end())
		return true;

	return false;
}

// helpful method that returns the string representation of
// the longest recurring cycle
string getRecurringCycle(int denominator) {
	// stores the set of numerators we have used to perform the division
	// by the denominator
	si numerators;
	vpiii tuples;
	int numerator = 10;

	while(true) {
		if (!ifPresent(numerators, numerator)) {
			// insert the numerator into the set of numerators encountered so far
			numerators.insert(numerator);

			int quotient = numerator / denominator;
			int remainder = numerator % denominator;

			// if the remainder of the division operation is 0 at any point
			// then we know there is no recurring cycle as the number can be 
			// evenly divided by the denominator and hence we return an empty
			// string.
			if (remainder == 0) {
				return "";
			}

			tuples.PB(MP(numerator, MP(quotient, remainder)));

			// change the numerator to remainder * 10 to perform successive
			// division.
			numerator = remainder * 10;
		} else {
			break;
		}
	}

	string digit_cycle = "";
	
	// find the index of the start of the recurring digit cycle
	int index = -1;
	for (int i = 0; i < SZ(tuples); ++i) {
		if (tuples[i].F == numerator) {
			index = i;
		}
	}

	for (int j = index; j < SZ(tuples); ++j) {
		int quotient = tuples[j].S.F;
		digit_cycle.append(convertIntToString(quotient));
	}

	return digit_cycle;
}

int main() {
	int denominator = -1;
	string longest_recurring_cycle = "";

	for (int i = 2; i < 1000; ++i) {
		string recurring_digit_cycle = getRecurringCycle(i);
		if (LONGEST_RECURRING_CYCLE < LN(recurring_digit_cycle)) {
			denominator = i;
			longest_recurring_cycle = recurring_digit_cycle;
			LONGEST_RECURRING_CYCLE = LN(recurring_digit_cycle);
		}
	}

	cout << "The denominator for which 1/d has the longest recurring digit cycle is : " << denominator << "\n";
	cout << "\n";
	cout << "The longest recurring cycle obtained for the unit fraction corresponding to the denominator above is : " << longest_recurring_cycle << "\n";
	cout << "\n";
	cout << "The length of the longest recurring digit cycle for a unit fraction for denominator < 1000 : " << LONGEST_RECURRING_CYCLE << "\n";

	return 0;
}