#include <iostream>

int memo[1010];

int dp(int n) {
	if(n==1) {
		return 1;
	} if(n==2) {
		return 3;
	} else if(memo[n]!=0) {
		return memo[n];
	} else {
		return memo[n]=(dp(n-1)+dp(n-2)*2)%10007;
	}
}

int main() {
	int n;
	
	scanf("%d", &n);
	printf("%d", dp(n));
	
	return 0;
}
