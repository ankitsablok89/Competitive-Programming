/*
	author : akchesh_1519
*/

#include <limits>
#include <iostream>

int main() {
	std :: cout << "Hello World" << "\n";

	/*
		All of the below mentioned code should be used
		when the console only just flashes and closes
		immediately post program execution from the command
		prompt i.e. when one executes the obj executable
		code and the console just pops up for a split second
		and disappears before one could inspect the result of the
		program.

		Reference : https://www.learncpp.com/cpp-tutorial/writing-your-first-program/
	*/
	// this is used to reset any error flags
	std :: cin.clear();
	// ignore any characters in the input buffer until we find a newline
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	// get one or more character from the user
	std :: cin.get();

	return 0;
}