#include <iostream>

int memo[1010];

int dp(int n) {
	if(n<=2) {
		return n;
	} else if(memo[n]!=0) {
		return memo[n];
	} else {
		return memo[x]=(dp(n-1)+dp(n-2))%100007
	}
}

int main() {
	int n;
	
	scanf("%d", &n);
	printf("%d", )
	
	return 0;
}
