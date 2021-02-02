#include <iostream>

int main() {
    int n, m, a[101], r=0, i, j, k;

    scanf("%d %d", &n, &m);
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            for(k=0; k<n; k++) {
                if(i!=j && j!=k && k!=i && (a[i]+a[j]+a[k])<=m) {
                    if((a[i]+a[j]+a[k])> r) {
                        r=a[i]+a[j]+a[k];
                    }
                }
            }
        }
    }
    printf("%d", r);

    return 0;
}