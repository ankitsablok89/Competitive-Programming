/*
	author : akchesh_1519
*/
#include <set>
#include <cstdio>
#include <string>
#include <vector>
#include <cstring>
#include <fstream>
#include <sstream>
#include <iostream>

#define pb 				push_back
#define SZ(c) 			(int)(c).size()
#define LN(str) 		(int)(str).length()

using namespace std;

typedef set<int> 		si;
typedef vector<string>  vs;

// helpful method that returns a set of triangular numbers less than 5000
si getTriangularNumberSet(int num_of_terms) {
	si triangularNumbers;
	for (int i = 1; i <= num_of_terms; ++i) {
		triangularNumbers.insert((i*(i+1))/2);
	}

	return triangularNumbers;
}

// helpful method to iterate over a vector of strings
void vectorIterator(vs input_vector) {
	for (int i = 0; i < SZ(input_vector); ++i) {
		cout << input_vector[i] << endl;
	}
}

vs getWords(string input_filename) {
	ifstream words(input_filename);
	vs words_vector;

	if (words.is_open()) {
		string line;
		while (words.good()) {
			getline(words, line);
			stringstream ss(line);

			while (ss.good()) {
				string tokens;
				getline( ss, tokens, ',');
				words_vector.pb(tokens);
			}
		}

		// clean the strings stored in the vector by removing double quotes from the string
		for (int i = 0; i< SZ(words_vector); ++i) {
			words_vector[i].erase(std::remove(words_vector[i].begin(), words_vector[i].end(),'\"'), words_vector[i].end());
		}

		words.close();
	}

	return words_vector;
}

// helpful method to read the file of words and return the maximum length of the word found in the set of words
int findMaximumLengthWord(vs input_vector) {
	int wordLength = -1;
	for (int i = 0; i < SZ(input_vector); ++i) {
			if (wordLength < LN(input_vector[i])) {
				wordLength = LN(input_vector[i]);
			}
		}

	return wordLength;
}

// helpful method that evaluates the ASCII value of a string
int evaluateString(string input_string) {
	int value = 0;
	for (int i = 0; i < LN(input_string); ++i) {
		value += (input_string.at(i) - 'A' + 1);
	}

	return value;
}

// method that counts the number of triangular words in the input vector
int countTriangularWords(vs input_vector, si triangularNumbers) {
	int count = 0;
	for (int i = 0; i < SZ(input_vector); ++i) {
		if (triangularNumbers.find(evaluateString(input_vector[i])) != triangularNumbers.end()) {
			++count;
		}
	}

	return count;
}

int main() {
	vs words_vector = getWords("Words.txt");
	si triangularNumbers = getTriangularNumberSet(30);
	cout << "The count of triangular words in the input file : " << countTriangularWords(words_vector, triangularNumbers) << endl;
	
	return 0;
}