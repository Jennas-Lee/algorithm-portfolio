#include <iostream>

int main() {
    int arr[305][305], n, m, i, j, x, y, k, l, s;

    scanf("%d %d", &n, &m);
    for(i=1; i<=n; i++) {
        for(j=1; j<=m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    scanf("%d", &k);
    for(l=0; l<k; l++) {
        s=0;
        scanf("%d %d %d %d", &i, &j, &x, &y);
        for(; i<=x; i++) {
            n=j;
            for(; j<=y; j++) {
                s+=arr[i][j];
            }
            j=n;
        }
        printf("%d\n", s);
    }

    return 0;
}