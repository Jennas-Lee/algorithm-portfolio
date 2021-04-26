#include <iostream>
#include <queue>

using namespace std;

typedef struct {
	int num;
	int imp;
} Q_data;

int main() {
	int c, n, m, i, j;
	
	scanf("%d", &c);
	for(i=0; i<c; i++) {
		queue<Q_data> q;
		int count=1;
		scanf("%d %d", &n, &m);
		for(j=0; j<n; j++) {
			int imp_tmp;
			Q_data tmp;
			
			scanf("%d", &imp_tmp);
			tmp.num=j;
			tmp.imp=imp_tmp;
			q.push(tmp);
		}
		while(1) {
			Q_data tmp;
			tmp.num=q.front().num;
			tmp.imp=q.front().imp;
			int max=tmp.imp, size=q.size();
			
			for(j=0; j<size; j++) {
				Q_data tmp;
				
				tmp.num=q.front().num;
				tmp.imp=q.front().imp;
				if(tmp.imp > max) {
					max=tmp.imp;
				}
				q.pop();
				q.push(tmp);
			}
			if(max!=tmp.imp) {
				q.pop();
				q.push(tmp);
				continue;
			} else {
				if(tmp.num==m) {
					printf("%d\n", count);
					break;
				} else {
					q.pop();
					count++;
				}
			}
		}
	}
	
	return 0;
}
