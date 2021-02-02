#include <iostream>

int main() {
    int n, t, u, i;

    scanf("%d", &n);
    for(i=1; i<n; i++) {
        t=0, u=i;
        while(u) {
            t+=u%10;
            u/=10;
        }
        t+=i;
        if(t==n) {
            printf("%d", i);
            return 0;
        }
    }
    printf("0");

    return 0;
}