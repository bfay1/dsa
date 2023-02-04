#include <vector>
using namespace std;

struct Fenwick {
	vector<int> bit;
	int n;
	
	Fenwick(int n) {
		this->n = n;
		bit.assign(n, 0);
	}	

	int find(int r) {
		int ans = 0;
		for (; r >= 0; r = (r & (r + 1)) - 1) {
			ans += bit[r];
		}
		return ans;
	}

	void update(int i, int delta) {
		for (; i < n; i |= (i + 1)) {
			bit[i] += delta;
		}
	}
};


