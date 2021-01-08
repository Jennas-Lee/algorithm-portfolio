#include <stdio.h>

int main() {
	int n, a, max=-10000000, min=10000000, i;
	
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		scanf("%d", &a);
		if(a>max) max=a;
		if(a<min) min=a;
	}
	printf("%d %d", min, max);
	
	return 0;
}