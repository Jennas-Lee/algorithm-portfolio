#include <iostream>

int main() {
    int t, s, n, q, p, i, j;

    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d %d", &s, &n);
        for(j=0; j<n; j++) {
            scanf("%d %d", &p, &q);
            s+=(p*q);
        }
        printf("%d\n", s);
    }

    return 0;
}