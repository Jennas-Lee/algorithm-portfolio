#include <cstdio>
#include <vector>
#include <cstdlib>
#include <queue>
#include <algorithm>
#include <cstring>

using namespace std;

vector<int> map[100010];
int result[100010];
int max_count;
int result_index = -1;

void bfs(int start, int n) {
	int count = 1, i;
	int* visit = (int*)calloc(n + 1, sizeof(int));
	queue<int> q;

	q.push(start);
	visit[start] = 1;

	while (!q.empty()) {
		int now = q.front();
		q.pop();

		int size = map[now].size();
		for (i = 0; i < size; i++) {
			if (!visit[map[now][i]]) {
				visit[map[now][i]] = 1;
				q.push(map[now][i]);
				count += 1;
			}
		}
	}

	free(visit);

	if (count > max_count) {	// ??? ??? ?? ?? ??? ? 
		max_count = count;

		memset(result, 0, sizeof(int) * 100010);
		result_index = -1;
		result[++result_index] = start;
	}
	else if (count == max_count) {	// ??? ??
		result[++result_index] = start;
	}

	//printf("start : %d, count : %d\n", start, count);
}


int main() {
	int n, m, a, b, i;

	scanf("%d %d", &n, &m);
	for (i = 0; i < m; i++) {
		scanf("%d %d", &a, &b);

		map[b].push_back(a);
	}

	// ? ?? ?? ??
	for (i = 1; i <= n; i++) {
		if (!map[i].empty()) {	// ?? ??? ?? ??? ??? BFS ??
			bfs(i, n);
		}
		else {	// ??? ??? ??
			continue;
		}
	}

	sort(result, result + result_index + 1);

	for (i = 0; i < result_index + 1; i++) {
		printf("%d ", result[i]);
	}

	return 0;
}
