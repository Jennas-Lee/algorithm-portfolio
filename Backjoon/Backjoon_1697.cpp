#include <cstdio>
#include <vector>
#include <queue>

using namespace std;

queue<int> q;
bool visited[230000] = { 0, };
int depth[230000] = { 0, };
int now;

vector<int> query(int num) {
	return { num + 1, num - 1, num * 2 };
}

int bfs(int n, int k) {
	q.push(n);
	visited[n] = true;

	while (1) {
		now = q.front();
		q.pop();
		//visited[now] = true;

		//printf("now : %d, depth : %d\n", now, depth[now]);

		if (now == k) {
			return depth[now];
		}
		else {
			for (int to : query(now)) {
				if (to <= 100000 && to >= 0) {
					if (!visited[to]) {
						q.push(to);
						depth[to] = depth[now] + 1;
						visited[to] = true;
					}
				}
			}
		}
	}
}

int main() {
	int n, k;

	scanf("%d %d", &n, &k);
	printf("%d", bfs(n, k));

	return 0;
}
