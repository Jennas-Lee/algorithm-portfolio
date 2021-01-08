#include <stdio.h>

int main() {
    int c, i;

    scanf("%d", &c);
    for(i=0; i<c; i++) {
        int n, a[1010]={}, r=0, j;
        double s=0;

        scanf("%d", &n);
        for(j=0; j<n; j++) {
            scanf("%d", &a[i]);
            s+=a[i];
        }
        s/=(double)n;
        printf("AVG : %lf ", s);
        for(j=0; j<n; j++) {
            if((double)a[j]>s) {
                r++;
            }
        }

        printf("%d %.3lf%%\n", r, (double)r/n*100);
    }

    return 0;
}