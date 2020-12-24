/*
	author : akchesh_1519
*/

#include <map>
#include <string>
#include <vector>
#include <cstring>
#include <fstream>
#include <sstream>
#include <iostream>
#include <algorithm>

#define pb push_back
#define SZ(c) (int)(c).size()
#define LN(str) (int)(str).length()

using namespace std;

typedef vector<string> vs;
typedef map<char, int> mci;
typedef unsigned long long ull;

mci char_to_int_map;

// helpful method to iterate over the key-value pairs in an STL map data structure
void mapIterator(mci input_map) {
	mci :: iterator it;
	for (it = input_map.begin(); it != input_map.end(); ++it) {
		cout << it -> first << " : " << it -> second << endl;
	}
}

// helpful method to create a map storing the english alphabet dictionary and their respective integer locations
void populateCharToIntMap() {
	char alphabet = 'A';
	for (int i = 0; i < 26; ++i) {
		char_to_int_map.insert(make_pair(alphabet+i, i+1));
	}
}

// helpful method to iterate over a vector of strings
void vectorIterator(vs input_vector) {
	for (int i = 0; i < SZ(input_vector); ++i) {
		cout << input_vector[i] << endl;
	}
}

int evaluateNameCount(string name) {
	int count = 0;
	for (int i = 0; i < LN(name); ++i) {
		count = count + (char_to_int_map.find(name.at(i)) -> second);
	}

	return count;
}

int main() {
	ifstream names("Names.txt");
	vs names_vector;

	if (names.is_open()) {
		string line;
		while (names.good()) {
			getline(names, line);
			stringstream ss(line);

			while (ss.good()) {
				string tokens;
				getline( ss, tokens, ',');
				names_vector.pb(tokens);
			}
		}

		// clean the strings stored in the vector by removing double quotes from the string
		for (int i = 0; i< SZ(names_vector); ++i) {
			names_vector[i].erase(std::remove(names_vector[i].begin(), names_vector[i].end(),'\"'), names_vector[i].end());
		}

		// sort the vector of names using std::sort
		std :: sort(names_vector.begin(), names_vector.end());
		
		// populate the char to int map
		populateCharToIntMap();

		ull sum = 0;
		for (int i = 0; i < SZ(names_vector); ++i) {
			sum += (evaluateNameCount(names_vector[i])*(i+1));
		}

		cout << sum << endl;

		names.close();
	}

	return 0;
}