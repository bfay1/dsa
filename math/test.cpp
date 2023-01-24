#include <iostream>
#include <fstream>
#include "prime.h"

signed main() {
	std::ifstream fin("input.txt");
	int n; fin >> n;
	std::vector<int> a(n);
	for (int i = 0; i < n; i++) fin >> a[i];

	std::vector<int> primes;
	std::vector<std::vector<int>> factors(n, std::vector<int>());
	
	sieve(primes);
	
	for (int i = 0; i < n; i++) {
		factor(factors[i], primes, a[i]);	
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < (int) factors[i].size(); j++) {
			std::cout << factors[i][j] << " ";
		}
		std::cout << "\n";
	}	
	
	return (signed) 0;
}
