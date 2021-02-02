#include <iostream>

int main() {
    int n, x[201], y[201], i, j, r;

    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }
    for(i=0; i<n; i++) {
        r=1;
        for(j=0; j<n; j++) {
            if((x[i]<x[j]) && (y[i]<y[j])) {
                r++;
            }
        }
        printf("%d ", r);
    }

    return 0;
}