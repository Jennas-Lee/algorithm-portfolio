#include <stdio.h>

int main() {
	int n, i, j;
	
	scanf("%d", &n);
	if(n==1) {
		printf("*");
	}
	else {
		for(i=1; i<=2*n; i++) {
			for(j=1; j<=n; j++) {
				if(i%2 == j%2) {
					printf("*");
				} else {
					printf(" ");
				}
			}
			printf("\n");
		}
	}	
	
	return 0;
}