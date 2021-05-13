#include <iostream>
#include <cmath>

int main() {
	int s=0, m, x, i;
	char q[7];
	
	scanf("%d", &m);
	for(i=0; i<m; i++) {
		scanf("%s", q);
		if(q[0]=='a' && q[1]=='d') {
			scanf("%d", &x);
			x=pow(2, x-1);
			s=s|x;
		} else if(q[0]=='r') {
			scanf("%d", &x);
			x=pow(2, x-1);
			if((s|x)==s) {
				s=s^x;
			}
		} else if(q[0]=='c') {
			scanf("%d", &x);
			x=pow(2, x-1);
			if((s|x)==s) {
				printf("1\n");
			} else {
				printf("0\n");
			}
		} else if(q[0]=='t') {
			scanf("%d", &x);
			x=pow(2, x-1);
			if((s|x)==s) {
				s=s^x;
			} else {
				s=s|x;
			}
		} else if(q[0]=='a' && q[1]=='l') {
			s=1048575;
		} else {
			s=0;
		}
	}
	
	return 0;
}
