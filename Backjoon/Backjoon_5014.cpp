#include <cstdio>
#include <vector>
#include <queue>

using namespace std;

bool visited[2000010];
int depth[2000010];

vector<int> query(int now, int u, int d) {
	return { now + u, now - d };
}

int bfs(int f, int s, int g, int u, int d) {
	queue<int> q;
	int result = -1;

	q.push(s);
	visited[s] = true;
	while (!q.empty()) {
		int now = q.front();
		q.pop();

		//printf("now : %d, depth : %d\n", now, depth[now]);

		if (now == g) {
			result = depth[now];
			break;
		}
		else {
			for (int to : query(now, u, d)) {
				if (to <= f && to >= 1) {
					if (!visited[to]) {
						q.push(to);
						visited[to] = true;
						depth[to] = depth[now] + 1;
						//printf("\t%d -> %d\n", now, to);
					}
				}
			}
		}
	}

	return result;
}

int main() {
	int f, s, g, u, d, result;

	scanf("%d %d %d %d %d", &f, &s, &g, &u, &d);

	result = bfs(f, s, g, u, d);

	if (result != -1) {
		printf("%d", result);
	}
	else {
		printf("use the stairs");
	}

	return 0;
}
