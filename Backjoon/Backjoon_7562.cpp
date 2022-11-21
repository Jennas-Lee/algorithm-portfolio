#include <cstdio>
#include <cstdlib>
#include <queue>
#include <vector>
#include <utility>

using namespace std;

pair<int, int> available[] = {
	{1, -2},
	{2, -1},
	{2, 1},
	{1, 2},
	{-1, -2},
	{-2, -1},
	{-2, 1},
	{-1, 2},
};

vector<pair<int, int>> query(pair<int, int> now, int l) {
	vector<pair<int, int>> query_list;
	int x, y, i;

	for (i = 0; i < 8; i++) {
		x = now.first + available[i].first;
		y = now.second + available[i].second;

		if (x >= 0 && y >= 0 && x < l && y < l) {
			query_list.push_back({ x, y });
			//printf("%d %d\n", x, y);
		}
	}

	return query_list;
}

int bfs(int l, int a, int b, int x, int y) {
	int map[301][301] = { 0, };
	queue<pair<int, int>> q;

	q.push(make_pair(a, b));
	map[a][b] = 1;

	//printf("start at %d %d\n", a, b);

	while (!q.empty()) {
		pair<int, int> now = q.front();
		q.pop();

		//printf("\tnow at %d %d, %d %d\n", now.first, now.second, x, y);

		if (now.first == x && now.second == y) {
			return map[x][y];
		}

		for (pair<int, int> to : query(now, l)) {
			//printf("query\n");
			//printf("\t\r\rto : %d %d\n", to.first, to.second);
			if (map[to.first][to.second] != 0) {
				continue;
			}

			q.push(to);
			map[to.first][to.second] = map[now.first][now.second] + 1;
			//printf("\t\tpush at %d %d\n", to.first, to.second);
		}
	}
}

int main() {
	int t, l, a, b, x, y, i;

	scanf("%d", &t);
	for (i = 0; i < t; i++) {
		scanf("%d", &l);
		scanf("%d %d", &a, &b);
		scanf("%d %d", &x, &y);

		printf("%d\n", bfs(l, a, b, x, y) - 1);
	}

	return 0;
}
