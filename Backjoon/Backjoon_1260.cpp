#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

bool visited[10010]={false,};
vector<int> list[10010];
stack<int> st;
queue<int> qe;

void dfs(int v) {
	st.push(v);
	
	while(!st.empty()) {
		int c=st.top();
		st.pop();
		
		if(visited[c]) {
			continue;
		}
		visited[c]=true;
		
		printf("%d ", c);
		
		for(int i=list[c].size()-1; i>=0; i--) {
			int next=list[c][i];
			st.push(next);
		}
	}
}

void bfs(int v) {
	qe.push(v);
	
	while(!qe.empty()) {
		int c=qe.front();
		qe.pop();
		
		if(visited[c]) {
			continue;
		}
		visited[c]=true;
		
		printf("%d ", c);
		
		for(int i=0; i<list[c].size(); i++) {
			int next=list[c][i];
			qe.push(next);
		}
	}
}

int main() {
	int n, m, v, s, e, i;
	
	scanf("%d %d %d", &n, &m, &v);
	for(i=0; i<m; i++) {
		scanf("%d %d", &s, &e);
		list[s].push_back(e);
		list[e].push_back(s);
	}
	for(i=0; i<10001; i++) {
		sort(list[i].begin(), list[i].end());
	}
	fill_n(visited, 10010, false);
	dfs(v);
	printf("\n");
	fill_n(visited, 10010, false);
	bfs(v);
	
	return 0;
}
