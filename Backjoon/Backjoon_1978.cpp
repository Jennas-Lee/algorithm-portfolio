#include <stdio.h>

int main() {
	int n, a[1005]={}, s=0, t, i, j;
	
	for(i=2; i<=1000; i++) {
		a[i]=i;
	}
	for(i=2; i<=1000; i++) {
		if(a[i]==0) {
			continue;
		}
		for(j=2*i; j<=1000; j+=i) {
			a[j]=0;
		}
	}
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		scanf("%d", &t);
		if(a[t]!=0) s++;
	}
	printf("%d", s);
	
	return 0;
}