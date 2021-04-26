#include <iostream>

int z, o, memo[1000];

int fibo(int n) {
	if(n==0) {
		z++;
		return 0;
	} else if(n==1) {
		o++;
		return 1;
	} else if(memo[n]!=0) {
		return memo[n];
	} else {
		memo[n]=fibo(n-1)+fibo(n-2);
		return memo[n];
	}
}

int main() {
	int n, m, i;
	
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		z=0, o=0;
		scanf("%d", &m);
		for(int j=0; j<1000; j++) {
			memo[j]=0;
		}
		fibo(m);
		printf("%d %d\n", z, o);
	}
	
	return 0;
}
