#include <stdio.h>

int main() {
	int a[3], b, m=1000000, i, j;
	
	for(i=0; i<3; i++) {
		scanf("%d", &a[i]);
	}
	for(i=0; i<2; i++) {
		scanf("%d", &b);
		for(j=0; j<3; j++) {
			if((a[j]+b-50)<m) {
				m=a[j]+b-50;
			}
		}
	}
	printf("%d", m);
	
	return 0;
}