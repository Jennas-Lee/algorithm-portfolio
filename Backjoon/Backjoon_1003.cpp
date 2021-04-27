#include <iostream>

using namespace std;

int memo[41];

int fibo(int n) {
	if(memo[n]!=-1) {
		return memo[n];
	}
	if(n==0) {
		memo[n]=0;
		return 0;
	} else if(n==1) {
		memo[n]=1;
		return 1;
	} else {
		memo[n]=fibo(n-1)+fibo(n-2);
		return memo[n];
	}
}

int main() {
	int n, m, i;
	
	scanf("%d", &n);
	fill_n(memo, 41, -1);
	for(i=0; i<n; i++) {
		scanf("%d", &m);
		if(m==0) {
			printf("1 0\n");
		} else {
			printf("%d %d\n", fibo(m-1), fibo(m));
		}
	}
	
	return 0;
}
