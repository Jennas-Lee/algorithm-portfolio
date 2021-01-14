#include <stdio.h>

int main() {
    int n, s=0, i;

    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        if(i<100) {
            s++;
        } else {
            int t=i, a[6]={}, m=0, j;
            while(t>0) {
                a[m++]=t%10;
                t/=10;
            }
            for(j=2; j<m; j++) {
                if((a[j]-a[j-1])!=(a[j-1]-a[j-2])) {
                    s--;
                    break;
                }
            }
            s++;
        }
    }
    printf("%d", s);

    return 0;
}