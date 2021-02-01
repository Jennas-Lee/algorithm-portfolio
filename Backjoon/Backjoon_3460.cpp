#include <iostream>

int main() {
    int t, n, i, j;

    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d", &n);
        for(j=0; n>0; j++) {
            if(n%2==1) {
                printf("%d ", j);
            }
            n/=2;
        }
    }

    return 0;
}