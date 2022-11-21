#include <cstdio>
#include <stack>
#include <vector>

using namespace std;

int n, m, d, r, i, j;
int map[52][52] = {0,};
int visit[52] = {0,};

int dfs() {
	int count = 0, root_count = 0;
	stack<int> s;
	
	// delete root node
	if(r == d) {
		return 0;
	}
	
	// check root node
	for(i = 0; i < n; i++) {
		if(map[r][i] == 1) {
			root_count = 1;
		}
	}
	
	if(root_count == 1) {
		// START 
		s.push(r);		// push root
		visit[r] = 1;	// visit root
		
		while(!s.empty()) {
			int now = s.top();
			
			s.pop();
			
//			printf("now %d\n", now);
			
			for(i = 0; i < n; i++) {
				if(map[i][now] == 1 && visit[i] == 0) {	// connected and not visited
					int node_count = 0;
					
					s.push(i);
					visit[i] = 1;
					
					for(j = 0; j < n; j++) {
						if(map[i][j] == 1) {
							node_count += 1;
	//						printf("\t%d %d %d\n", i, j, node_count);
						}
					}
					if(node_count == 1) {	// here is leaf node
						count += 1;
					}
	//				printf("at %d | count %d | node_count %d\n", now, count, node_count);
				}
			}
		}
	} else {
		// root only
		count = 1;
	}
	
	return count;
}

int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &m);
		if (m == -1) {
			r = i;
		}
		else {
			map[m][i] = 1;
			map[i][m] = 1;
		}
	}
	scanf("%d", &d);
	for(i = 0; i < n; i++) {
		map[i][d] = 0;
		map[d][i] = 0;
	}
	
//	for (i = 0; i < n; i++) {
//		printf("%d -> ", i);
//		for(j = 0; j < n; j++) {
//			if(map[i][j] == 1) {
//				printf("%d ", j);
//			}
//		}
//		printf("\n");
//	}
	printf("%d", dfs());

	return 0;
}
