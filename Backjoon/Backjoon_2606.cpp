#include <cstdio>
#include <vector>
#include <queue>

using namespace std;

int bfs(vector<int> list[], int computer_count) {
	queue<int> q;
	vector<int> visit(computer_count + 1);
	int count = -1;
	
	q.push(1);
	
	while(!q.empty()) {
		int now = q.front();
		q.pop();
		
		if(visit[now] == 1) {	// already visited
			continue;
		} else {	// we didn't visit here
			count += 1;
			visit[now] = 1;
			for(int v : list[now]) {
				q.push(v);
			}
		}
	}
	
	return count;
}

int main() {
	int computer_count, pair_count, x, y, i;
	
	scanf("%d", &computer_count);
	scanf("%d", &pair_count);
	
	vector<int> list[computer_count+1];
	
	for(i=0; i<pair_count; i++) {
		scanf("%d %d", &x, &y);
		list[x].push_back(y);
		list[y].push_back(x);
	}
	
	printf("%d", bfs(list, computer_count));
	
	return 0;
}
