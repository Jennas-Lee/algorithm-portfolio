#include <cstdio>
#include <vector>
#include <queue>
#include <utility>

using namespace std;

int n, m;
int map[103][103];
int cheeze_result;	// 최종 턴의 치즈 개수

vector<pair<int, int>> get_direction(pair<int, int> p) {
	vector<pair<int, int>> list;

	if (p.first > 0) {	// 상
		list.push_back(make_pair(p.first - 1, p.second));
	}
	if (p.first < n) {	// 하
		list.push_back(make_pair(p.first + 1, p.second));
	}
	if (p.second > 0) {	// 좌
		list.push_back(make_pair(p.first, p.second - 1));
	}
	if (p.second < m) {	// 우
		list.push_back(make_pair(p.first, p.second + 1));
	}

	return list;
}

int bfs() {
	int i, j;
	int map_[103][103], visit[103][103] = { 0, };
	queue<pair<int, int>> q;
	int cheeze = 0;	// 치즈조각 개수
	int empty = 0;	// 치즈가 다 녹았는지 여부, 1이 다녹음

	//printf("\tbfs start\n");

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) {
			map_[i][j] = map[i][j];
		}
	}

	//for (i = 1; i <= n; i++) {
	//	for (j = 1; j <= m; j++) {
	//		if (map[i][j] == 0 && visit[i][j] == 0) {	// 새로운 공기
				//q.push(make_pair(i, j));
				//visit[i][j] = 1;

			q.push(make_pair(0, 0));
			visit[0][0] = 1;

				while (!q.empty()) {
					pair<int, int> now = q.front();
					q.pop();

					for (pair<int, int> d : get_direction(now)) {
						if (map[d.first][d.second] == 0 && visit[d.first][d.second] == 0) {	// 발견한게 새로운 공기임
							q.push(d);
							visit[d.first][d.second] = 1;
						}
						else if (map[d.first][d.second] == 1) {	// 발견한게 치즈임
							map[d.first][d.second] = 2;
							map_[d.first][d.second] = 0;	// 치즈 녹임
							cheeze += 1;	// 치즈 개수 추가
							empty = 1;
							//printf("\t\tCHEEZE (%d, %d) %d\n", d.first, d.second, cheeze);
						}
					}
				}
	//		}
	//	}
	//}

	//printf("\n");
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) {
			map[i][j] = map_[i][j];
			//printf("%d ", map[i][j]);
		}
		//printf("\n");
	}
	//printf("\n");

	//printf("\tcheeze count : %d\n", cheeze);

	if (empty == 1) {	// 치즈가 하나라도 있었다면
		cheeze_result = cheeze;

		return 1;
	}
	else {	// 없었으면 종료
		return 0;
	}
}

int main() {
	int count = 0, i, j;

	scanf("%d %d", &n, &m);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) {
			scanf("%d", &map[i][j]);
		}
	}

	while (1) {
		if (bfs() == 1) {
			count += 1;	// 턴 추가

			//printf("count %d, nowcheeze : %d\n\n", count, cheeze_result);

			continue;
		}
		else {
			break;
		}
	}

	printf("%d\n%d", count, cheeze_result);

	return 0;
}