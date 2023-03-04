#include <cstdio>
#include <queue>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int n, m, k;
int map[103][103], visit[103][103];

void init() {
	int i;

	for (i = 0; i < n + 2; i++) {
		map[0][i] = 1, map[m + 1][i] = 1;
	}
	for (i = 0; i < m + 2; i++) {
		map[i][0] = 1, map[i][n + 1] = 1;
	}
}

int main() {
	int count = 0, x1, x2, y1, y2, i, j, l;
	vector<int> list;

	scanf("%d %d %d", &m, &n, &k);
	init();
	for (i = 0; i < k; i++) {
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

		x1 += 1, y1 += 1;

		//printf("(%d, %d) -> (%d, %d)\n", x1, y1, x2, y2);

		for (j = x1; j <= x2; j++) {
			for (l = y1; l <= y2; l++) {
				map[l][j] = 1;
			}
		}
	}

	// 시작점 탐색
	for (i = 1; i <= m; i++) {
		for (j = 1; j <= n; j++) {
			if (map[i][j] == 0 && visit[i][j] == 0) {	// 시작점 감지
				queue<pair<int, int>> q;	// 큐 선언
				count += 1;	// 영역 개수 추가
				int sum = 0;	// 영역의 넓이 선언

				q.push(make_pair(i, j));	// 큐 시작점 추가
				visit[i][j] = 1;	// 시작점 방문 표시

				while (!q.empty()) {	// 탐색 시작
					pair<int, int> now = q.front();	// 현재 위치
					q.pop();
					sum += 1;	// 영역 넓이 추가

					// 상하좌우 탐색
					if (map[now.first - 1][now.second] == 0 && visit[now.first - 1][now.second] == 0) {	// 상
						q.push(make_pair(now.first - 1, now.second));
						visit[now.first - 1][now.second] = 1;
					}
					if (map[now.first + 1][now.second] == 0 && visit[now.first + 1][now.second] == 0) {	// 하
						q.push(make_pair(now.first + 1, now.second));
						visit[now.first + 1][now.second] = 1;
					}
					if (map[now.first][now.second - 1] == 0 && visit[now.first][now.second - 1] == 0) {	// 좌
						q.push(make_pair(now.first, now.second - 1));
						visit[now.first][now.second - 1] = 1;
					}
					if (map[now.first][now.second + 1] == 0 && visit[now.first][now.second + 1] == 0) {	// 우
						q.push(make_pair(now.first, now.second + 1));
						visit[now.first][now.second + 1] = 1;
					}
				}

				list.push_back(sum);
			}
		}
	}

	printf("%d\n", count);
	sort(list.begin(), list.end());
	for (int item : list) {
		printf("%d ", item);
	}

	return 0;
}