#include <cstdio>
#include <queue>

using namespace std;

int map[1010][1010];
int count;
int linked_node_count;

void bfs(int n) {
	int i, j, k;
	queue<int> q;
	
	for(i=1; i<=n; i++) {
		for(j=1; j<=n; j++) {
			if(map[i][j] == 1) {
				count += 1;
				q.push(j);
				map[i][j] = 0;
				map[j][i] = 0;
				//linked_node_count += 1;
				
				while(!q.empty()) {
					int now = q.front();
					q.pop();
					linked_node_count += 1;
					printf("pop %d, count  %d\n", now, linked_node_count);
					
					for(k=1; k<=n; k++) {
						if(map[now][k] == 1) {
							q.push(k);
							map[now][k] = 0;
							map[k][now] = 0;
							//linked_node_count += 1;
						}
					}
				}
			}
		}
	}
}

int main() {
	int n, m, i;
	
	scanf("%d %d", &n, &m);
	for(i=0; i<m; i++) {
		int a, b;
		
		scanf("%d %d", &a, &b);
		map[a][b] = 1;
		map[b][a] = 1;
	}
	bfs(n);
	printf("%d %d", count, linked_node_count);
	
	return 0;
}
