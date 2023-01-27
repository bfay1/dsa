#include <bits/stdc++.h>
using namespace std;
const int inf = 1000000000;

void dijkstra(int s, vector<int>& d, vector<int>& p, vector<vector<pair<int, int>>>& adj) {
	int n = adj.size();
	d.assign(n, inf);
	p.assign(n, -1);
	vector<int> u(n, 0);

	d[s] = 0;

	for (int i = 0; i < n; i++) {
		int v = -1;
		for (int j = 0; j < n; j++) {
			bool init_or_shorter = (v == -1 || d[j] < d[v]);
			if (u[j] == 0 && init_or_shorter) {
				 v = j;
			}
		}

		if (d[v] == inf) break;

		u[v] = true;

		for (int k = 0; k < (int) adj[v].size(); k++) {
			pair<int, int> edge = adj[v][k];
			int to = edge.first;
			int len = edge.second;

			if (d[v] + len < d[to]) {
				d[to] = d[v] + len;
				p[to] = v;
			}
		}
	}
}

void restore_path(int s, int t, vector<int> const& p, vector<int>& path) {
	for (int v = t; v != s; v = p[v]) {
		path.push_back(v);
	}
	path.push_back(s);
	reverse(path.begin(), path.end());
}
