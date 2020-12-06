/*
	author : akchesh_1519
*/

#include <string>
#include <iostream>

#define MAX_LEN 1000
#define ASCII_DIFFERENCE 32

int main() {
	char word[MAX_LEN];
	scanf("%s", word);

	// we can use the concept of ASCII values here to capitalize the word
	if (word[0] >= 97) {
		word[0] -= ASCII_DIFFERENCE;
	}

	std::cout << word << std::endl;

	return 0;
}