#include <iostream>

int ncr(int n, int k) {
    if(n==k || k==0) return 1;
    return ncr(n-1, k-1)+ncr(n-1, k);
}

int main() {
    int t, k, n, i;

    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d %d", &k, &n);
        printf("%d\n", ncr(k+n, k+1));
    }

    return 0;
}