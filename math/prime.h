#include <vector>
#define int long long

const int maxn = 1e5 + 1;


int is_prime[maxn];

void sieve() {
	std::fill(is_prime, is_prime + maxn, 1);
	is_prime[0] = is_prime[1] = 0;
	for (int i = 2; i*i <= maxn; i++) {
		if (is_prime[i]) {
			for (int j = i*i; j < maxn; j += i) {
				is_prime[j] = 0;
			}
		}
	}


}

void sieve(std::vector<int>& primes) {
	std::fill(is_prime, is_prime + maxn, 1);
	is_prime[0] = is_prime[1] = 0;
	for (int i = 2; i*i <= maxn; i++) {
		if (is_prime[i]) {
			for (int j = i*i; j < maxn; j += i) {
				is_prime[j] = 0;
			}
		}
	}

	for (int i = 2; i < maxn; i++) {
		if (is_prime[i]) {
			primes.push_back(i);
		}
	}
}	


void factor(std::vector<int>& fact, std::vector<int>& primes, int n) {
	int len = primes.size();
	for (int i = 0; i < len;) {
		int p = primes[i];
		if (n % p == 0) {
			fact.push_back(p);
			n /= p;
		} else {
			i++;
		}
	}
}


