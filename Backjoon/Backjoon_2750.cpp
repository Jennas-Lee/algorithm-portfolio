#include <iostream>

int main() {
    int a[1010], n, t, i, j;

    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++) {
        for(j=1; j<n; j++) {
            if(a[j-1]>a[j]) {
                t=a[j-1];
                a[j-1]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0; i<n; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}