#include <cstdio>
#include <queue>
#include <vector>
#include <utility>

using namespace std;

vector<pair<int, int>> query(int n, pair<int, int> now) {
	static int d[4][2] = {
		{-1, 0},
		{1, 0},
		{0, -1},
		{0, 1}
	};
	int i;
	vector<pair<int, int>> result;

	for (i = 0; i < 4; i++) {
		if ((d[i][0] + now.first) >= 0 && (d[i][0] + now.first) < n && (d[i][1] + now.second) >= 0 && (d[i][1] + now.second) < n) {
			result.push_back(make_pair(d[i][0] + now.first, d[i][1] + now.second));
		}
	}

	return result;
}

int bfs(int n, char map[][105], bool type) {
	int i, j;
	int count = 0;
	int visit[105][105] = { 0, };

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (visit[i][j] == 0) {	// found new area
				count += 1;
				queue<pair<int, int>> q;
				q.push(make_pair(i, j));
				visit[i][j] = 1;
				//printf("found new area : %d %d %c\n", i, j, map[i][j]);

				while (!q.empty()) {
					pair<int, int> now = q.front();
					q.pop();
					//printf("\tnow : %d %d %c\n", now.first, now.second, map[i][j]);

					for (pair<int, int> to : query(n, now)) {
						if (visit[to.first][to.second] == 0) {
							if (type) {	// color blindness
								if (
									(map[now.first][now.second] == 'R' || map[now.first][now.second] == 'G') &&
									(map[to.first][to.second] == 'R' || map[to.first][to.second] == 'G') ||
									(map[to.first][to.second] == map[now.first][now.second])
									) {
									q.push(to);
									visit[to.first][to.second] = 1;
								}
							}
							else {	// normal
								if (map[to.first][to.second] == map[now.first][now.second]) {
									q.push(to);
									visit[to.first][to.second] = 1;
								}
							}
						}
					}
				}
			}
		}
	}

	return count;
}

int main() {
	int n, i;
	char map[105][105] = { 0, };

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%s", map[i]);
	}

	printf("%d %d", bfs(n, map, false), bfs(n, map, true));

	return 0;
}
