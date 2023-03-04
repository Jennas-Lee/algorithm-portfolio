#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
	int n, m, r, u, v, i;
	int visit[100010] = { 0 }, now;
	vector<int> map[100010];
	queue<int> q;

	scanf("%d %d %d", &n, &m, &r);
	for (i = 0; i < m; i++) {
		scanf("%d %d", &u, &v);
		map[u].push_back(v);
		map[v].push_back(u);
	}

	visit[r] = 1;
	q.push(r);
	i = 0;

	while (!q.empty()) {
		now = q.front();
		q.pop();
		visit[now] = ++i;
		sort(map[now].begin(), map[now].end(), greater<>());

		for (int node : map[now]) {
			if (visit[node] == 0) {
				q.push(node);
				visit[node] = 1;
			}
		}
	}

	for (i = 1; i <= n; i++) {
		printf("%d\n", visit[i]);
	}

	return 0;
}