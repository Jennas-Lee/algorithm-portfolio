#include <iostream>
#include <queue>

using namespace std;

int main() {
	int n, k, i, t=1;
	queue<int> q;
	
	scanf("%d %d", &n, &k);
	if(n==1) {
		printf("<1>");
		return 0;
	}
	for(i=1; i<=n; i++) {
		q.push(i);
	}
	while(q.size()>0) {
		for(i=1; i<k; i++) {
			q.push(q.front());
			q.pop();
		}
		if(t==1) {
			printf("<%d, ", q.front());
			t++;
		} else if(t==n) {
			printf("%d>", q.front());
		} else {
			printf("%d, ", q.front());
			t++;
		}
		q.pop();
	}
	
	return 0;
}
