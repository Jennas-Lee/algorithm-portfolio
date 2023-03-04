#include <cstdio>
#include <queue>
#include <utility>

using namespace std;

int n, m;
char map[103][103] = { 0, };

int bfs(char team) {
	int visit[103][103] = { 0, };
	int sum = 0, i, j;

	for (i = 1; i <= m; i++) {
		for (j = 1; j <= n; j++) {
			if (map[i][j] == team && visit[i][j] == 0) {	// 시작 지점 감지
				int now_sum = 0;	// 현재 탐색의 총 합
				queue<pair<int, int>> q;

				q.push(make_pair(i, j));
				visit[i][j] = 1;

				while (!q.empty()) {
					pair<int, int> now = q.front();
					q.pop();
					now_sum += 1;

					if (map[now.first - 1][now.second] == team && visit[now.first - 1][now.second] == 0) {	// 상
						q.push(make_pair(now.first - 1, now.second));
						visit[now.first - 1][now.second] = 1;
					}
					if (map[now.first + 1][now.second] == team && visit[now.first + 1][now.second] == 0) {	// 하
						q.push(make_pair(now.first + 1, now.second));
						visit[now.first + 1][now.second] = 1;
					}
					if (map[now.first][now.second - 1] == team && visit[now.first][now.second - 1] == 0) {	// 좌
						q.push(make_pair(now.first, now.second - 1));
						visit[now.first][now.second - 1] = 1;
					}
					if (map[now.first][now.second + 1] == team && visit[now.first][now.second + 1] == 0) {	// 우
						q.push(make_pair(now.first, now.second + 1));
						visit[now.first][now.second + 1] = 1;
					}
				}

				sum += (now_sum * now_sum);
			}
		}
	}

	return sum;
}

int main() {
	int i, j;

	scanf("%d %d", &n, &m);
	for (i = 1; i <= m; i++) {
		char tmp[103] = { 0, };

		scanf("%s", &tmp);

		for (j = 0; j < n; j++) {
			map[i][j + 1] = tmp[j];
		}
	}
	printf("%d %d", bfs('W'), bfs('B'));

	return 0;
}