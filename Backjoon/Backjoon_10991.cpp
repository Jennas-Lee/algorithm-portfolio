#include <iostream>

int main() {
	int n, i, j, k;
	
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		for(j=1; j<n-i; j++) {
			printf(" ");
		}
		for(j=0; j<i; j++) {
			if(j!=0 && j%2!=0) {
				printf(" ");
			} else {
				printf("*");
			}
		}
		for(j=0; j<=i; j++) {
			if((i%2==0 && j%2!=0) || (i%2!=0 && j%2==0)) {
				printf(" ");
			} else {
				printf("*");
			}
		}
		printf("\n");
	}
	
	return 0;
}
