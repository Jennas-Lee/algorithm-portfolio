#include <stdio.h>

int main() {
	int n, x, i;
	
	scanf("%d %d", &n, &x);
	for(i=0; i<n; i++) {
		int t;
		scanf("%d", &t);
		if(x>t) printf("%d ", t);
	}

    return 0;
}