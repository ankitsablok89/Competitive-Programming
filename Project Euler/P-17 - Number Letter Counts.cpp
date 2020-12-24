/*
	author : akchesh_1519
*/

#include <map>
#include <string>
#include <cstring>
#include <fstream>
#include <sstream>
#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;

typedef map<string, string> ms;

// declare a global map that holds the number and it's english representation as key-value pairs
ms num_letters_map;

// helpful method to count the number of spaces in an input string
int countSpacesInString(string input_string) {
	int count = 0;
	for (int i = 0; i < (int)input_string.length(); ++i) {
		if (input_string.at(i) == ' ') {
			++count;
		}
	}

	return count;
}

// helpful method for converting an integer to a string
string convertIntToString(int num) {
	stringstream ss;
	ss << num;
	string s;
	ss >> s;
	return s;
}

// helpful method to iterate over the key-value pairs in an STL map data structure
void mapIterator(ms input_map) {
	ms :: iterator it;
	for (it = input_map.begin(); it != input_map.end(); ++it) {
		cout << it -> first << " : " << it -> second << endl;
	}
}

// main method that tries to find the conversion of a number into it's english representation
string findConversion(int num) {
	string number = convertIntToString(num);
	string conversion;
	
	if (number.length() == 2) {
		conversion = num_letters_map.find(convertIntToString((num/10)*10)) -> second;
		conversion.append(" ");
		conversion.append(num_letters_map.find(convertIntToString(num%10)) -> second);
		num_letters_map.insert(make_pair(convertIntToString(num), conversion));
	}

	if (number.length() == 3) {
		conversion = num_letters_map.find(convertIntToString((num/100))) -> second;
		if (num%100 == 0) {
			conversion.append(" HUNDRED");
		} else {
			conversion.append(" HUNDRED AND ");
		conversion.append(num_letters_map.find(convertIntToString(num%100)) -> second);
		}
		
		num_letters_map.insert(make_pair(convertIntToString(num), conversion));
	}

	return conversion;
}

int main() {
	ifstream num_letters_map_file("Number Letter Counts.txt");
	string line;
	if (num_letters_map_file.is_open()) {
		while (num_letters_map_file.good()) {
			getline(num_letters_map_file, line);
			istringstream ss(line);

			string key, value;
			ss >> key >> value;  
			num_letters_map.insert(make_pair(key, value));
		}

		num_letters_map_file.close(); 
	}

	int count = 0;
	for (int i = 1; i < 1000; ++i) {
		string numToString = convertIntToString(i);
		// if we have found the number and it's representation we just need to add the count of characters to 
		// the running count as there will be no spaces or hyphens in it's representation for all other purposes we first find the conversion and subtract the space count from the running count.
		if (num_letters_map.find(numToString) != num_letters_map.end()) {
			count += (num_letters_map.find(numToString) -> second).length();
		} else {
			string conversion = findConversion(i);
			count += ((int)conversion.length() - countSpacesInString(conversion));
		}
	}

	// iterate over the map to check if the conversions are as expected and all of them stored in the map
	mapIterator(num_letters_map);

	// adding 11 to accommodate for ONE THOUSAND
	cout << (count + 11) << endl;

	return 0;
}