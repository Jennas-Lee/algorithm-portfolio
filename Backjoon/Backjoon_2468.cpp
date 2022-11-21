#include <cstdio>
#include <vector>
#include <queue>
#include <utility>

using namespace std;

vector<pair<int, int>> query(pair<int, int> now, int n) {
	vector<pair<int, int>> result;

	if (now.first > 0) {
		result.push_back(make_pair(now.first - 1, now.second));
	}
	if (now.first < n) {
		result.push_back(make_pair(now.first + 1, now.second));
	}
	if (now.second > 0) {
		result.push_back(make_pair(now.first, now.second - 1));
	}
	if (now.second < n) {
		result.push_back(make_pair(now.first, now.second + 1));
	}

	return result;
}

int bfs(int input_map[][101], int height, int n) {
	int area = 0, i, j;
	int map[101][101];

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			map[i][j] = input_map[i][j];
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (map[i][j] - height > 0) {
				// found new area! start to bfs
				queue<pair<int, int>> q;
				area += 1;
				//printf("\tstart at %d %d\n", i, j);

				q.push(make_pair(i, j));
				map[i][j] = 0;

				while (!q.empty()) {
					pair<int, int> now = q.front();
					q.pop();
					//printf("\t\tnow at %d %d\n", now.first, now.second);

					for (pair<int, int> to : query(now, n)) {
						if (map[to.first][to.second] - height > 0) {
							q.push(to);
							map[to.first][to.second] = 0;
						}
					}
				}
			}
		}
	}

	return area;
}

int main() {
	int n, max_height=0, max_area = 1, i, j;
	int map[101][101];

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &map[i][j]);
			if (map[i][j] > max_height) {
				max_height = map[i][j];
			}
		}
	}
	
	for (i = 0; i < max_height; i++) {
		//printf("now height : %d\n", i);
		int area = bfs(map, i, n);
		if (area > max_area) {
			max_area = area;
		}
	}

	printf("%d", max_area);

	return 0;
}
