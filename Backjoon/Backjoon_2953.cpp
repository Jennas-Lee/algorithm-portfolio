#include <iostream>

int main() {
    int n, m=0, c, t, i, j;

    for(i=1; i<6; i++) {
        t=0;
        for(j=0; j<4; j++) {
            scanf("%d", &n);
            t+=n;
        }
        if(t>m) {
            m=t;
            c=i;
        }
    }

    printf("%d %d", c, m);

    return 0;
}