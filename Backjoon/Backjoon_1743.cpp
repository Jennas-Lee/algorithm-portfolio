#include <cstdio>
#include <queue>
#include <utility>

using namespace std;

int n, m, k;
int map[103][103], visit[103][103];

int bfs() {
	int max = 0, i, j;

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) {
			if (map[i][j] == 1 && visit[i][j] == 0) {	// 시작 지점 감지
				// 큐 선언
				queue<pair<int, int>> q;
				int sum = 0;
				//printf("start %d %d\n", i, j);

				// 시작지점 큐에 삽입 후 방문 표시
				q.push(make_pair(i, j));
				visit[i][j] = 1;

				while (!q.empty()) {	// BFS 탐색 시작
					pair<int, int> now = q.front();	// 현재위치 저장
					q.pop();	// 현재위치는 큐에서 제거
					sum += 1;	// 탐색 횟수 추가
					//printf("now %d %d | sum %d\n", now.first, now.second, sum);

					// 상하좌우로 갈 수 잇는 곳이 있는지 확인
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

					if (sum > max) {
						max = sum;
					}
				}
			}
		}
	}

	return max;
}

int main() {
	int r, c, i;

	scanf("%d %d %d", &n, &m, &k);
	for (i = 0; i < k; i++) {
		scanf("%d %d", &r, &c);
		map[r][c] = 1;
	}
	printf("%d", bfs());

	return 0;
}
