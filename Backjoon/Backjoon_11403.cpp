#include <cstdio>

int n, a;
int adj[105][105];
int dist[105][105];

int min_f(int a, int b) {
	return a <= b ? a : b;
}

int main() {
	const int INF = 100000;
	int i, j, k;
	
	scanf("%d", &n);
	for(i=1; i<=n; i++) {
		for(j=1; j<=n; j++) {
			scanf("%d", &a);
			adj[i][j] = a;
		}
	}
	
	for(i=1; i<=n; i++) {
		for(j=1; j<=n; j++) {
			printf("%d ", adj[i][j]);
		}
		printf("\n");
	}
	
	for(i=1; i<=n; i++) {
		for(j=1; j<=n; j++) {
			if(i == j) {
				dist[i][j] = 0;
			} else if(adj[i][j] > 0) {
				dist[i][j] = adj[i][j];
			} else {
				dist[i][j] = INF;
			}
		}
	}
	
	for(k=1; k<=n; k++) {	// round 
		for(i=1; i<=n; i++) {
			for(j=1; j<=n; j++) {
				if(dist[i][k] == 1 && dist[k][j]== 1) {
					dist[i][j] = 1;
				}
				//dist[i][j] = min_f(dist[i][j], dist[i][k] == dist[k][j] == 1);
			}
		}
	}
	
	printf("\n");
	for(i=1; i<=n; i++) {
		for(j=1; j<=n; j++) {
			printf("%d ", dist[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
