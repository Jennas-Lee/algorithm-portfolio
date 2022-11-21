#include <cstdio>
#include <vector>
#include <queue>
#include <utility>

using namespace std;

vector<pair<int, int>> map[1010];

int bfs(int from, int to) {
	int visit[1010] = {0,};
	//queue<pair<int, int>> q;
	queue<int> q;

	q.push(from);
	visit[from] = 1;

	while (!q.empty()) {
		int now = q.front();
		q.pop();
		//printf("now : %d, distance : %d\n", now.first, now.second);

		// found to node
		if(now == to) {
			// return distance
			return visit[now];
		}
		
		// found node to be able to go
		int size = map[now].size(), i;
		for (i = 0; i < size; i++) {
			// push queue with accumulate distance
			if (visit[map[now][i].first] != 0) {
				continue;
			}
			
			q.push(map[now][i].first);
			visit[map[now][i].first] = visit[now] + map[now][i].second;
			//printf("\tpush %d (%d)\n", value.first, now.second + value.second);
		}
	}
}

int main() {
	int n, m, a, b, l, i;

	scanf("%d %d", &n, &m);

	for (i = 0; i < n - 1; i++) {
		scanf("%d %d %d", &a, &b, &l);
		map[a].push_back(make_pair(b, l));
		map[b].push_back(make_pair(a, l));
	}

	//for (i = 1; i <= n; i++) {
	//	printf("%d -> ", i);
	//	for (pair<int, int> value : map[i]) {
	//		printf("%d (%d) ", value.first, value.second);
	//	}
	//	printf("\n");
	//}

	for (i = 0; i < m; i++) {
		scanf("%d %d", &a, &b);
		printf("%d\n", bfs(a, b) - 1);
	}

	return 0;
}
