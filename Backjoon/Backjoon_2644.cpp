#include <cstdio>
#include <vector>
#include <queue>

using namespace std;

int n, m, x, y, a, b, now, already;
vector<int> map[105];
int visited[105];
int length[105];
queue<int> q;

int bfs() {
	q.push(x);

	while (!q.empty()) {
		now = q.front();
		q.pop();
		visited[now] = 1;
		already = 0;

		if (now == y) {
			return length[now];
		}

		for (int node : map[now]) {
			if (visited[node] != 1) {
				q.push(node);
				length[node] = length[now] + 1;
			}
		}
	}

	return -1;
}

int main() {
	int i;

	scanf("%d", &n);
	scanf("%d %d", &x, &y);
	scanf("%d", &m);

	for (i = 0; i < m; i++) {
		scanf("%d %d", &a, &b);
		map[a].push_back(b);
		map[b].push_back(a);
	}

	printf("%d", bfs());

	return 0;
}
