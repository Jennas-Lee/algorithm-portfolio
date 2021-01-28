#include <iostream>

int ncr(int n, int r) {
    if(r==1) {
        return 1;
    } else {
        return ncr(n-1, r-1)+ncr(n, r-1);
    }
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    printf("%d", ncr(n, k));

    return 0;
}