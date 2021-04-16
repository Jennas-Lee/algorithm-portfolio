#include <iostream>
#include <queue>

using namespace std;

int main() {
	int n, t, i;
	queue<int> q;
	
	scanf("%d", &n);
	for(i=1; i<=n; i++) {
		q.push(i);
	}
	while(q.size()>1) {
		q.pop();
		t=q.front();
		q.pop();
		q.push(t);
	}
	printf("%d", q.front());
	
	return 0;
}
