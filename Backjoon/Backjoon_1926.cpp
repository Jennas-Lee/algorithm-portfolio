#include <cstdio>
#include <queue>
#include <utility>

using namespace std;

int n, m;
int map[503][503], visit[503][503];

int main() {
	int count = 0, max = 0, i, j;

	scanf("%d %d", &n, &m);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) {
			scanf("%d", &map[i][j]);
		}
	}

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) {
			if (map[i][j] == 1 && visit[i][j] == 0) {	// 새로운 출발지 감지
				count += 1;	// 새로운 그림 발견했으므로 개수 추가
				queue<pair<int, int>> q;	// 새로운 큐 선언
				int sum = 0;	// 새로운 그림의 넓이 선언
				q.push(make_pair(i, j));	// 출발지 추가
				visit[i][j] = 1;	// 출발지 방문 표시

				// 탐색 실시
				while (!q.empty()) {
					pair<int, int> now = q.front();
					q.pop();
					sum += 1;

					// 상하좌우 탐색
					if (map[now.first - 1][now.second] == 1 && visit[now.first - 1][now.second] == 0) {	// 상
						q.push(make_pair(now.first - 1, now.second));
						visit[now.first - 1][now.second] = 1;
					}
					if (map[now.first + 1][now.second] == 1 && visit[now.first + 1][now.second] == 0) {	// 하
						q.push(make_pair(now.first + 1, now.second));
						visit[now.first + 1][now.second] = 1;
					}
					if (map[now.first][now.second - 1] == 1 && visit[now.first][now.second - 1] == 0) {	// 좌
						q.push(make_pair(now.first, now.second - 1));
						visit[now.first][now.second - 1] = 1;
					}
					if (map[now.first][now.second + 1] == 1 && visit[now.first][now.second + 1] == 0) {	// 우
						q.push(make_pair(now.first, now.second + 1));
						visit[now.first][now.second + 1] = 1;
					}
				}

				if (sum > max) {
					max = sum;
				}
			}
		}
	}

	printf("%d\n%d", count, max);

	return 0;
}