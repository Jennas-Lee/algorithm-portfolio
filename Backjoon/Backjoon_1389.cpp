#include <cstdio>

int n, m, a, b;
int adj[105][105];
int dist[105][105];

int min_f(int a, int b) {
	return a < b ? a : b;
}

int main() {
	const int INF = 100000;
	int min=INF, min_value, i, j, k;
	
	scanf("%d %d", &n, &m);
	for(i=0; i<m; i++) {
		scanf("%d %d", &a, &b);
		adj[a][b] = 1;
		adj[b][a] = 1;
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
				dist[i][j] = min_f(dist[i][j], dist[i][k] + dist[k][j]);
			}
		}
	}
	
	for(i=1; i<=n; i++) {
		int sum = 0;
		for(j=1; j<=n; j++) {
			sum += dist[i][j];
		}
		if(min>sum) {
			min = sum;
			min_value=i;
		}
	}
	
	printf("%d", min_value);
	
	return 0;
}
