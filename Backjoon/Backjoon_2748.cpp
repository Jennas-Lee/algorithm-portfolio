#include <iostream>

long long int memo[95]={0, 1,};

long long int f(int n) {
    int i;

    for(i=0; i<=n; i++) {
        memo[i+2]=memo[i]+memo[i+1];
    }

    return memo[n];
}

int main() {
    int n;

    scanf("%d", &n);
    printf("%lld", f(n));

    return 0;
}