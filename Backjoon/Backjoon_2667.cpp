#include <cstdio>
#include <cstdlib>
#include <queue>
#include <algorithm>
#include <vector>

using namespace std;

typedef struct {
	int x;
	int y;
} Pair;

typedef struct {
	Pair* arr;
	int front;
	int back;
	int size;
} Queue;

int n;
char arr[630][630];
queue<Pair> q;

bool isIndex(int x, int y) {
	return x >= 0 && y >= 0 && x < n&& y < n;
}

int bfs(int x, int y) {
	Pair p;

	q.push({ x, y});
	int count = 1;
	arr[x][y] = 0;
	while (!q.empty()) {
		p.x = q.front().x;
		p.y = q.front().y;
		q.pop();
		


		//printf("visit %d %d\n", p.x, p.y);
		int x[] = { 0,0,-1,1 };
		int y[] = { 1,-1,0,0 };

		for (int i = 0; i < 4; i++) {
			int nextX = p.x + x[i];
			int nextY = p.y + y[i];

			if (isIndex(nextX, nextY) && arr[nextX][nextY] == '1') {
				q.push({ nextX, nextY});
				arr[nextX][nextY] = 0;
				count++;
			}
		}
	}

	return count;
}

int main() {
	int i, j;
	vector<int> v;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%s", arr[i]);
	}


	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (arr[i][j] == '1') {
				//printf("start bfs at %d %d\n", i, j);
				v.push_back( bfs(i, j));
			}
		}
	}
	
	sort(v.begin(), v.end());
	printf("%d\n", v.size());
	for (int value : v) {
		printf("%d\n", value);
	}

	return 0;
}
