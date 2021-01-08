#include <stdio.h>

int main() {
	int n, a, max=0, m, i;
	
	for(i=1; i<=9; i++) {
		scanf("%d", &a);
		if(a>max) {
			max=a;
			m=i;
		}
	}
	printf("%d\n%d", max, m);
	
	return 0;
}