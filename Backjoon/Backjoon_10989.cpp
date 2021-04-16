#include <iostream>

int main() {
	int n, m, a[10010]={}, i, j;
	
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		scanf("%d", &m);
		a[m]++;
	}
	for(i=1; i<=10000; i++) {
		if(a[i]==0) {
			continue;
		} else {
			for(j=0; j<a[i]; j++) {
				printf("%d\n", i);
			}
		}
	}
	
	return 0;
}
