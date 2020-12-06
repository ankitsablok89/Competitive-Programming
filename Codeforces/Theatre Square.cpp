/*
	author : akchesh_1519
*/

#include <iostream>

int main() {
	long n, m, a; std :: cin >> n >> m >> a;

	// study the logic used for rounding a quantity to the nearest greater whole number
	std :: cout << (long long)((n+a-1)/a) * ((m+a-1)/a) << std::endl;
	return 0;
}