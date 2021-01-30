#include <iostream>

int main() {
    int n, m, t, s, i, j;

    scanf("%d", &n);
    for(i=0; i<n; i++) {
        s=0;
        scanf("%d", &m);
        for(j=0; j<m; j++) {
            scanf("%d", &t);
            s+=t;
        }
        printf("%d\n", s);
    }

    return 0;
}