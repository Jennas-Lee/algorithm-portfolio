#include <iostream>

long long int memo[105]={1, 1, 1, 1};

long long int f(int n) {
    int i;

    for(i=4; i<=n; i++) {
        memo[i]=memo[i-2]+memo[i-3];
    }

    return memo[n];
}

int main() {
    int t, n, i;

    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d", &n);
        printf("%lld\n", f(n));
    }

    return 0;
}