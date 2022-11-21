#include <cstdio>
#include <vector>
#include <queue>
#include <utility>

using namespace std;

vector<pair<int, int>> query(int m, int n, int x, int y) {
	vector<pair<int, int>> query_list;

	if (x > 0) {
		query_list.push_back(make_pair(x - 1, y));
	}
	if (x < n) {
		query_list.push_back(make_pair(x + 1, y));
	}
	if (y > 0) {
		query_list.push_back(make_pair(x, y - 1));
	}
	if (y < m) {
		query_list.push_back(make_pair(x, y + 1));
	}

	return query_list;
}

int main() {
	int t, m, n, k, i, j, l;

	scanf("%d", &t);
	for (i = 0; i < t; i++) {
		scanf("%d %d %d", &m, &n, &k);
		int arr[55][55] = { 0, };
		int count = 0;
		for (j = 0; j < k; j++) {
			int x, y;

			scanf("%d %d", &y, &x);
			arr[x][y] = 1;
		}

		// print map
		//for (j = 0; j < n; j++) {
		//	for (l = 0; l < m; l++) {
		//		printf("%d ", arr[j][l]);
		//	}
		//	printf("\n");
		//}

		for (j = 0; j < n; j++) {
			for (l = 0; l < m; l++) {
				if (arr[j][l] != 0) {	// start new cabbage
		//			printf("start at %d %d\n\n", j, l);
					queue<pair<int, int>> q;
					q.push(make_pair(j, l));
					arr[j][l] = 0;
					count += 1;

					while (!q.empty()) {
						pair<int, int> now = q.front();
						q.pop();
		//				printf("now : %d %d, count : %d\n", now.first, now.second, count);

						for (pair<int, int> to : query(m, n, now.first, now.second)) {
		//					printf("\tto %d %d\n", to.first, to.second);
							if (arr[to.first][to.second] != 0) {
		//						printf("\t\tpush %d %d\n", to.first, to.second);
								q.push(to);
								arr[to.first][to.second] = 0;
							}
						}
					}
				}
			}
		}

		printf("%d\n", count);
	}

	return 0;
}
