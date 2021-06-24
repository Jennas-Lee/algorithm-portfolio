#include <iostream>
#include <queue>

using namespace std;

int main() {
	int n, k, i;
	queue<int> q;
	
	scanf("%d %d", &n, &k);
	for(i=1; i<=n; i++) {
		q.push(i);
	}
	
	printf("<");
	while(!q.empty()) {
		for(i=1; i<k; i++) {
			q.push(q.front());
			q.pop();
		}
		if(q.size()==1) {
			printf("%d", q.front());
		} else {
			printf("%d, ", q.front());
		}
		q.pop();
	}
	printf(">");
	
	return 0;
}
