#include <iostream>
#include <queue>

using namespace std;

int n, m, cx, cy, cc, r, i, j;
int arr[110][110];
int visit[110][110];

bool check(int y, int x) {
	if(y<1 || y>n || x<1 || x>m) {
		return false;
	}
	if(arr[y][x]==0) {
		return false;
	}
	return true;
}

int main() {
	queue<int> qx, qy, qc;
	
	qx.push(1), qy.push(1), qc.push(1);
	
	scanf("%d %d", &n, &m);
	for(i=1; i<=n; i++) {
		for(j=1; j<=m; j++) {
			scanf("%1d", &arr[i][j]);
		}
	}
	
	while(qy.empty() == false) {
		cx=qx.front();
		qx.pop();
		cy=qy.front();
		qy.pop();
		cc=qc.front();
		qc.pop();
		
		if(visit[cy][cx]) {
			continue;
		}
		visit[cy][cx]=1;
		
		if(cy==n && cx==m) {
			r=cc;
			break;
		}
		
		if(check(cy-1, cx)) {
			qy.push(cy-1), qx.push(cx), qc.push(cc+1);
		}
		if(check(cy+1, cx)) {
			qy.push(cy+1), qx.push(cx), qc.push(cc+1);
		}
		if(check(cy, cx-1)) {
			qy.push(cy), qx.push(cx-1), qc.push(cc+1);
		}
		if(check(cy, cx+1)) {
			qy.push(cy), qx.push(cx+1), qc.push(cc+1);
		}
	}
	printf("%d", r);
	
	return 0;
}
