/*
	author : akchesh_1519
*/

#include <iostream>

void printSequence(int* arr, int size) {
	for (int i = 1; i < size ; ++i) {
		std::cout << arr[i] << " ";
	}

	std::cout << arr[size] << std::endl;
}

void solve(int N, int K) {
	int sequence[N+1];
	for (int i = 0; i <= N; ++i) {
		sequence[i] = i;
	}

	int negationsRequired = N - K;

	// if there are no negations required to satisfy the 
	// constraint then we print the sequence as is
	if (negationsRequired == 0) {
		printSequence(sequence, N);
		return;
	}

	// if there are negations required we then start 
	// negating the elements  in the sequence starting 
	// with the first one and also decrement the number 
	// of negations required in the sequence
	for (int i = 1; i <= N && negationsRequired != 0; ) {
		sequence[i] = -sequence[i];
		--negationsRequired;
		i+=2;
	}

	// if we still have negations left to do we start negating 
	// any positive elements we find from the end of the array
	if (negationsRequired != 0) {
		for (int i = N; negationsRequired != 0; --i) {
			if (sequence[i] > 0) {
				sequence[i] = -sequence[i];
				--negationsRequired;
			}
		}
	}

	printSequence(sequence, N);
}

int main() {
	int T;
	std::cin >> T;

	while (T--) {
		int N, K;
		std::cin >> N >> K;

		solve(N, K);
	}

	return 0;
}