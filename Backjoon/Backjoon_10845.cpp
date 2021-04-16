#include <iostream>
#include <queue>

using namespace std;

int main() {
	int n, t, i;
	char order[6];
	queue<int> q;
	
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		scanf("%s", order);
		if(order[0]=='p' && order[1]=='u') {
			scanf("%d", &t);
			q.push(t);
		} else if(order[0]=='p' && order[1]=='o') {
			if(q.size()==0) {
				printf("-1\n");
			} else {
				printf("%d\n", q.front());
				q.pop();
			}
		} else if(order[0]=='s') {
			printf("%d\n", q.size());
		} else if(order[0]=='e') {
			printf("%d\n", q.empty());
		} else if(order[0]=='f') {
			if(q.size()==0) {
				printf("-1\n");
			} else {
				printf("%d\n", q.front());
			}
		} else {
			if(q.size()==0) {
				printf("-1\n");
			} else {
				printf("%d\n", q.back());
			}
		}
	}
	
	return 0;
}
