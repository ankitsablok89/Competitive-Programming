/*
	author : akchesh_1519
*/

#include <string>
#include <iostream>

void processWord(std :: string word);

int main() {
	int n; std :: cin >> n; std::cin.ignore();
	for (int i = 0; i < n; ++i) {
		std :: string word;
		getline(std::cin, word);
		processWord(word);
	}

	return 0;
}

void processWord(std :: string word) {
	int wordLength = word.length();
	if (wordLength > 10) {
		std :: cout << word.at(0) << wordLength - 2 << 
		word.at(wordLength - 1) << std::endl;;
	} else {
		std :: cout << word << std::endl;
	}
}