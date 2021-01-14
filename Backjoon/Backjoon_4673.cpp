#include <stdio.h>

int main() {
    int a[10100]={}, i;

    for(i=1; i<=10000; i++) {
        int s=i, t=i;
        while(t>0) {
            s+=t%10;
            t/=10;
        }
        a[s]=1;
    }

    for(i=1; i<=10000; i++) {
        if(a[i]!=1) {
            printf("%d\n", i);
        }
    }

    return 0;
}