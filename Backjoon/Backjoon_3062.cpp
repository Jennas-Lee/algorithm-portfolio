#include <iostream>

int rev(int n) {
    int t=0;

    while(n>0) {
        t*=10;
        t+=n%10;
        n/=10;
    }

    return t;
}

int main() {
    int t, n, m, i;

    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d", &n);
        m=n+rev(n);
        if(m==rev(m)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}