#include <cstdio>
#include <vector>
#include <queue>

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

	for (i = 1; i <= n; i++) {
		visit[i] = -1;
	}

	visit[r] = 0;
	q.push(r);
	i = 0;

	while (!q.empty()) {
		queue<int> t_q;
		i++;

		while (!q.empty()) {	// 일단 큐에 있는거 다 한번에 빼서 다른 큐에 저장
			t_q.push(q.front());
			q.pop();
		}

		while (!t_q.empty()) {
			now = t_q.front();
			t_q.pop();

			for (int node : map[now]) {
				if (visit[node] == -1) {
					q.push(node);
					visit[node] = i;
				}
			}
		}
	}

	for (i = 1; i <= n; i++) {
		printf("%d\n", visit[i]);
	}

	return 0;
}